{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterFast exposing (RequestTimeFilterFast, decoder, encode)

import Data.RequestLocation as RequestLocation exposing (RequestLocation)
import Data.RequestTimeFilterFastArrivalSearches as RequestTimeFilterFastArrivalSearches exposing (RequestTimeFilterFastArrivalSearches)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterFast =
    { locations : (List RequestLocation)
    , arrivalSearches : RequestTimeFilterFastArrivalSearches
    }


decoder : Decoder RequestTimeFilterFast
decoder =
    Decode.succeed RequestTimeFilterFast
        |> required "locations" (Decode.list RequestLocation.decoder)
        |> required "arrival_searches" RequestTimeFilterFastArrivalSearches.decoder



encode : RequestTimeFilterFast -> Encode.Value
encode model =
    Encode.object
        [ ( "locations", (Encode.list RequestLocation.encode) model.locations )
        , ( "arrival_searches", RequestTimeFilterFastArrivalSearches.encode model.arrivalSearches )

        ]


