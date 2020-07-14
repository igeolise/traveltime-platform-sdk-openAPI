{-# LANGUAGE DataKinds                  #-}
{-# LANGUAGE DeriveDataTypeable         #-}
{-# LANGUAGE DeriveGeneric              #-}
{-# LANGUAGE DeriveTraversable          #-}
{-# LANGUAGE FlexibleContexts           #-}
{-# LANGUAGE FlexibleInstances          #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}
{-# LANGUAGE OverloadedStrings          #-}
{-# LANGUAGE RecordWildCards            #-}
{-# LANGUAGE TypeFamilies               #-}
{-# LANGUAGE TypeOperators              #-}
{-# LANGUAGE ViewPatterns               #-}
{-# OPTIONS_GHC
-fno-warn-unused-binds -fno-warn-unused-imports -freduction-depth=328 #-}

module TravelTime.API
  -- * Client and Server
  ( Config(..)
  , TravelTimeBackend(..)
  , createTravelTimeClient
  , runTravelTimeServer
  , runTravelTimeMiddlewareServer
  , runTravelTimeClient
  , runTravelTimeClientWithManager
  , callTravelTime
  , TravelTimeClient
  , TravelTimeClientError(..)
  -- ** Servant
  , TravelTimeAPI
  ) where

import           TravelTime.Types

import           Control.Monad.Catch                (Exception, MonadThrow, throwM)
import           Control.Monad.Except               (ExceptT, runExceptT)
import           Control.Monad.IO.Class
import           Control.Monad.Trans.Reader         (ReaderT (..))
import           Data.Aeson                         (Value)
import           Data.Coerce                        (coerce)
import           Data.Data                          (Data)
import           Data.Function                      ((&))
import qualified Data.Map                           as Map
import           Data.Monoid                        ((<>))
import           Data.Proxy                         (Proxy (..))
import           Data.Set                           (Set)
import           Data.Text                          (Text)
import qualified Data.Text                          as T
import           Data.Time
import           Data.UUID                          (UUID)
import           GHC.Exts                           (IsString (..))
import           GHC.Generics                       (Generic)
import           Network.HTTP.Client                (Manager, newManager)
import           Network.HTTP.Client.TLS            (tlsManagerSettings)
import           Network.HTTP.Types.Method          (methodOptions)
import           Network.Wai                        (Middleware)
import qualified Network.Wai.Handler.Warp           as Warp
import           Servant                            (ServerError, serve)
import           Servant.API
import           Servant.API.Verbs                  (StdMethod (..), Verb)
import           Servant.Client                     (ClientEnv, Scheme (Http), ClientError, client,
                                                     mkClientEnv, parseBaseUrl)
import           Servant.Client.Core                (baseUrlPort, baseUrlHost)
import           Servant.Client.Internal.HttpClient (ClientM (..))
import           Servant.Server                     (Handler (..), Application)
import           Servant.Server.StaticFiles         (serveDirectoryFileServer)
import           Web.FormUrlEncoded
import           Web.HttpApiData




-- | List of elements parsed from a query.
newtype QueryList (p :: CollectionFormat) a = QueryList
  { fromQueryList :: [a]
  } deriving (Functor, Applicative, Monad, Foldable, Traversable)

-- | Formats in which a list can be encoded into a HTTP path.
data CollectionFormat
  = CommaSeparated -- ^ CSV format for multiple parameters.
  | SpaceSeparated -- ^ Also called "SSV"
  | TabSeparated -- ^ Also called "TSV"
  | PipeSeparated -- ^ `value1|value2|value2`
  | MultiParamArray -- ^ Using multiple GET parameters, e.g. `foo=bar&foo=baz`. Only for GET params.

instance FromHttpApiData a => FromHttpApiData (QueryList 'CommaSeparated a) where
  parseQueryParam = parseSeparatedQueryList ','

instance FromHttpApiData a => FromHttpApiData (QueryList 'TabSeparated a) where
  parseQueryParam = parseSeparatedQueryList '\t'

instance FromHttpApiData a => FromHttpApiData (QueryList 'SpaceSeparated a) where
  parseQueryParam = parseSeparatedQueryList ' '

instance FromHttpApiData a => FromHttpApiData (QueryList 'PipeSeparated a) where
  parseQueryParam = parseSeparatedQueryList '|'

instance FromHttpApiData a => FromHttpApiData (QueryList 'MultiParamArray a) where
  parseQueryParam = error "unimplemented FromHttpApiData for MultiParamArray collection format"

parseSeparatedQueryList :: FromHttpApiData a => Char -> Text -> Either Text (QueryList p a)
parseSeparatedQueryList char = fmap QueryList . mapM parseQueryParam . T.split (== char)

instance ToHttpApiData a => ToHttpApiData (QueryList 'CommaSeparated a) where
  toQueryParam = formatSeparatedQueryList ','

instance ToHttpApiData a => ToHttpApiData (QueryList 'TabSeparated a) where
  toQueryParam = formatSeparatedQueryList '\t'

instance ToHttpApiData a => ToHttpApiData (QueryList 'SpaceSeparated a) where
  toQueryParam = formatSeparatedQueryList ' '

instance ToHttpApiData a => ToHttpApiData (QueryList 'PipeSeparated a) where
  toQueryParam = formatSeparatedQueryList '|'

instance ToHttpApiData a => ToHttpApiData (QueryList 'MultiParamArray a) where
  toQueryParam = error "unimplemented ToHttpApiData for MultiParamArray collection format"

formatSeparatedQueryList :: ToHttpApiData a => Char ->  QueryList p a -> Text
formatSeparatedQueryList char = T.intercalate (T.singleton char) . map toQueryParam . fromQueryList


-- | Servant type-level API, generated from the OpenAPI spec for TravelTime.
type TravelTimeAPI
    =    "v4" :> "geocoding" :> "reverse" :> QueryParam "lat" Double :> QueryParam "lng" Double :> QueryParam "within.country" Text :> Verb 'GET 200 '[JSON] ResponseGeocoding -- 'geocodingReverseSearch' route
    :<|> "v4" :> "geocoding" :> "search" :> QueryParam "query" Text :> QueryParam "focus.lat" Double :> QueryParam "focus.lng" Double :> QueryParam "within.country" Text :> Verb 'GET 200 '[JSON] ResponseGeocoding -- 'geocodingSearch' route
    :<|> "v4" :> "map-info" :> Verb 'GET 200 '[JSON] ResponseMapInfo -- 'mapInfo' route
    :<|> "v4" :> "routes" :> ReqBody '[JSON] RequestRoutes :> Verb 'POST 200 '[JSON] ResponseRoutes -- 'routes' route
    :<|> "v4" :> "supported-locations" :> ReqBody '[JSON] RequestSupportedLocations :> Verb 'POST 200 '[JSON] ResponseSupportedLocations -- 'supportedLocations' route
    :<|> "v4" :> "time-filter" :> ReqBody '[JSON] RequestTimeFilter :> Verb 'POST 200 '[JSON] ResponseTimeFilter -- 'timeFilter' route
    :<|> "v4" :> "time-filter" :> "fast" :> ReqBody '[JSON] RequestTimeFilterFast :> Verb 'POST 200 '[JSON] ResponseTimeFilterFast -- 'timeFilterFast' route
    :<|> "v4" :> "time-filter" :> "postcode-districts" :> ReqBody '[JSON] RequestTimeFilterPostcodeDistricts :> Verb 'POST 200 '[JSON] ResponseTimeFilterPostcodeDistricts -- 'timeFilterPostcodeDistricts' route
    :<|> "v4" :> "time-filter" :> "postcode-sectors" :> ReqBody '[JSON] RequestTimeFilterPostcodeSectors :> Verb 'POST 200 '[JSON] ResponseTimeFilterPostcodeSectors -- 'timeFilterPostcodeSectors' route
    :<|> "v4" :> "time-filter" :> "postcodes" :> ReqBody '[JSON] RequestTimeFilterPostcodes :> Verb 'POST 200 '[JSON] ResponseTimeFilterPostcodes -- 'timeFilterPostcodes' route
    :<|> "v4" :> "time-map" :> ReqBody '[JSON] RequestTimeMap :> Verb 'POST 200 '[JSON] ResponseTimeMap -- 'timeMap' route
    :<|> Raw 


-- | Server or client configuration, specifying the host and port to query or serve on.
data Config = Config
  { configUrl :: String  -- ^ scheme://hostname:port/path, e.g. "http://localhost:8080/"
  } deriving (Eq, Ord, Show, Read)


-- | Custom exception type for our errors.
newtype TravelTimeClientError = TravelTimeClientError ClientError
  deriving (Show, Exception)
-- | Configuration, specifying the full url of the service.


-- | Backend for TravelTime.
-- The backend can be used both for the client and the server. The client generated from the TravelTime OpenAPI spec
-- is a backend that executes actions by sending HTTP requests (see @createTravelTimeClient@). Alternatively, provided
-- a backend, the API can be served using @runTravelTimeMiddlewareServer@.
data TravelTimeBackend m = TravelTimeBackend
  { geocodingReverseSearch :: Maybe Double -> Maybe Double -> Maybe Text -> m ResponseGeocoding{- ^  -}
  , geocodingSearch :: Maybe Text -> Maybe Double -> Maybe Double -> Maybe Text -> m ResponseGeocoding{- ^  -}
  , mapInfo :: m ResponseMapInfo{- ^  -}
  , routes :: RequestRoutes -> m ResponseRoutes{- ^  -}
  , supportedLocations :: RequestSupportedLocations -> m ResponseSupportedLocations{- ^  -}
  , timeFilter :: RequestTimeFilter -> m ResponseTimeFilter{- ^  -}
  , timeFilterFast :: RequestTimeFilterFast -> m ResponseTimeFilterFast{- ^  -}
  , timeFilterPostcodeDistricts :: RequestTimeFilterPostcodeDistricts -> m ResponseTimeFilterPostcodeDistricts{- ^  -}
  , timeFilterPostcodeSectors :: RequestTimeFilterPostcodeSectors -> m ResponseTimeFilterPostcodeSectors{- ^  -}
  , timeFilterPostcodes :: RequestTimeFilterPostcodes -> m ResponseTimeFilterPostcodes{- ^  -}
  , timeMap :: RequestTimeMap -> m ResponseTimeMap{- ^  -}
  }

newtype TravelTimeClient a = TravelTimeClient
  { runClient :: ClientEnv -> ExceptT ClientError IO a
  } deriving Functor

instance Applicative TravelTimeClient where
  pure x = TravelTimeClient (\_ -> pure x)
  (TravelTimeClient f) <*> (TravelTimeClient x) =
    TravelTimeClient (\env -> f env <*> x env)

instance Monad TravelTimeClient where
  (TravelTimeClient a) >>= f =
    TravelTimeClient (\env -> do
      value <- a env
      runClient (f value) env)

instance MonadIO TravelTimeClient where
  liftIO io = TravelTimeClient (\_ -> liftIO io)

createTravelTimeClient :: TravelTimeBackend TravelTimeClient
createTravelTimeClient = TravelTimeBackend{..}
  where
    ((coerce -> geocodingReverseSearch) :<|>
     (coerce -> geocodingSearch) :<|>
     (coerce -> mapInfo) :<|>
     (coerce -> routes) :<|>
     (coerce -> supportedLocations) :<|>
     (coerce -> timeFilter) :<|>
     (coerce -> timeFilterFast) :<|>
     (coerce -> timeFilterPostcodeDistricts) :<|>
     (coerce -> timeFilterPostcodeSectors) :<|>
     (coerce -> timeFilterPostcodes) :<|>
     (coerce -> timeMap) :<|>
     _) = client (Proxy :: Proxy TravelTimeAPI)

-- | Run requests in the TravelTimeClient monad.
runTravelTimeClient :: Config -> TravelTimeClient a -> ExceptT ClientError IO a
runTravelTimeClient clientConfig cl = do
  manager <- liftIO $ newManager tlsManagerSettings
  runTravelTimeClientWithManager manager clientConfig cl

-- | Run requests in the TravelTimeClient monad using a custom manager.
runTravelTimeClientWithManager :: Manager -> Config -> TravelTimeClient a -> ExceptT ClientError IO a
runTravelTimeClientWithManager manager Config{..} cl = do
  url <- parseBaseUrl configUrl
  runClient cl $ mkClientEnv manager url

-- | Like @runClient@, but returns the response or throws
--   a TravelTimeClientError
callTravelTime
  :: (MonadIO m, MonadThrow m)
  => ClientEnv -> TravelTimeClient a -> m a
callTravelTime env f = do
  res <- liftIO $ runExceptT $ runClient f env
  case res of
    Left err       -> throwM (TravelTimeClientError err)
    Right response -> pure response


requestMiddlewareId :: Application -> Application
requestMiddlewareId a = a

-- | Run the TravelTime server at the provided host and port.
runTravelTimeServer
  :: (MonadIO m, MonadThrow m)
  => Config -> TravelTimeBackend (ExceptT ServerError IO) -> m ()
runTravelTimeServer config backend = runTravelTimeMiddlewareServer config requestMiddlewareId backend

-- | Run the TravelTime server at the provided host and port.
runTravelTimeMiddlewareServer
  :: (MonadIO m, MonadThrow m)
  => Config -> Middleware -> TravelTimeBackend (ExceptT ServerError IO) -> m ()
runTravelTimeMiddlewareServer Config{..} middleware backend = do
  url <- parseBaseUrl configUrl
  let warpSettings = Warp.defaultSettings
        & Warp.setPort (baseUrlPort url)
        & Warp.setHost (fromString $ baseUrlHost url)
  liftIO $ Warp.runSettings warpSettings $ middleware $ serve (Proxy :: Proxy TravelTimeAPI) (serverFromBackend backend)
  where
    serverFromBackend TravelTimeBackend{..} =
      (coerce geocodingReverseSearch :<|>
       coerce geocodingSearch :<|>
       coerce mapInfo :<|>
       coerce routes :<|>
       coerce supportedLocations :<|>
       coerce timeFilter :<|>
       coerce timeFilterFast :<|>
       coerce timeFilterPostcodeDistricts :<|>
       coerce timeFilterPostcodeSectors :<|>
       coerce timeFilterPostcodes :<|>
       coerce timeMap :<|>
       serveDirectoryFileServer "static")
