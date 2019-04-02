{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterPostcodeDistricts exposing (RequestTimeFilterPostcodeDistricts, decoder, encoder)

import Data.RequestTimeFilterPostcodeDistrictsDepartureSearch as RequestTimeFilterPostcodeDistrictsDepartureSearch exposing (RequestTimeFilterPostcodeDistrictsDepartureSearch)
import Data.RequestTimeFilterPostcodeDistrictsArrivalSearch as RequestTimeFilterPostcodeDistrictsArrivalSearch exposing (RequestTimeFilterPostcodeDistrictsArrivalSearch)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterPostcodeDistricts =
    { departureSearches : Maybe ((List RequestTimeFilterPostcodeDistrictsDepartureSearch))
    , arrivalSearches : Maybe ((List RequestTimeFilterPostcodeDistrictsArrivalSearch))
    }


decoder : Decoder RequestTimeFilterPostcodeDistricts
decoder =
    Decode.succeed RequestTimeFilterPostcodeDistricts
        |> optional "departure_searches" (Decode.nullable (Decode.list RequestTimeFilterPostcodeDistrictsDepartureSearch.decoder)) Nothing
        |> optional "arrival_searches" (Decode.nullable (Decode.list RequestTimeFilterPostcodeDistrictsArrivalSearch.decoder)) Nothing



encoder : RequestTimeFilterPostcodeDistricts -> Encode.Value
encoder model =
    Encode.object
        [ ( "departure_searches", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterPostcodeDistrictsDepartureSearch.encoder) model.departureSearches) )
        , ( "arrival_searches", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterPostcodeDistrictsArrivalSearch.encoder) model.arrivalSearches) )

        ]


