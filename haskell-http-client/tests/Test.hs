{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE OverloadedStrings #-}
{-# LANGUAGE RecordWildCards #-}
{-# LANGUAGE PartialTypeSignatures #-}

module Main where

import Data.Typeable (Proxy(..))
import Test.Hspec
import Test.Hspec.QuickCheck

import PropMime
import Instances ()

import TravelTimePlatform.Model
import TravelTimePlatform.MimeTypes

main :: IO ()
main =
  hspec $ modifyMaxSize (const 10) $ do
    describe "JSON instances" $ do
      pure ()
      propMimeEq MimeJSON (Proxy :: Proxy Coords)
      propMimeEq MimeJSON (Proxy :: Proxy RequestArrivalTimePeriod)
      propMimeEq MimeJSON (Proxy :: Proxy RequestLocation)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRangeFull)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRangeNoMaxResults)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRoutes)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRoutesArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRoutesDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestRoutesProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestSupportedLocations)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilter)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterFast)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterFastArrivalManyToOneSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterFastArrivalOneToManySearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterFastArrivalSearches)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterFastProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeDistricts)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeDistrictsArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeDistrictsDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeDistrictsProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeSectors)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeSectorsArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeSectorsDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodeSectorsProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodes)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodesArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodesDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterPostcodesProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeFilterProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeMap)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeMapArrivalSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeMapDepartureSearch)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTimeMapProperty)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTransportation)
      propMimeEq MimeJSON (Proxy :: Proxy RequestTransportationFast)
      propMimeEq MimeJSON (Proxy :: Proxy RequestUnionOnIntersection)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseBoundingBox)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseBox)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseDistanceBreakdownItem)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseError)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseFareTicket)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseFares)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseFaresBreakdownItem)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseFaresFast)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseGeocoding)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseGeocodingGeoJsonFeature)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseGeocodingGeometry)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseGeocodingProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseMapInfo)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseMapInfoFeatures)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseMapInfoFeaturesPublicTransport)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseMapInfoMap)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoute)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoutePart)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoutes)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoutesLocation)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoutesProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseRoutesResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseShape)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseSupportedLocation)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseSupportedLocations)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilter)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterFast)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterFastLocation)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterFastProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterFastResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterLocation)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcode)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeDistrict)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeDistrictProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeDistricts)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeDistrictsResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeSector)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeSectorProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeSectors)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodeSectorsResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodes)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodesProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterPostcodesResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeFilterResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMap)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapBoundingBoxes)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapBoundingBoxesResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapProperties)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapWkt)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTimeMapWktResult)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTransportationMode)
      propMimeEq MimeJSON (Proxy :: Proxy ResponseTravelTimeStatistics)
      
