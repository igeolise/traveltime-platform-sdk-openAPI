{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterPostcodeSectors exposing (RequestTimeFilterPostcodeSectors, decoder, encoder)

import Data.RequestTimeFilterPostcodeSectorsDepartureSearch as RequestTimeFilterPostcodeSectorsDepartureSearch exposing (RequestTimeFilterPostcodeSectorsDepartureSearch)
import Data.RequestTimeFilterPostcodeSectorsArrivalSearch as RequestTimeFilterPostcodeSectorsArrivalSearch exposing (RequestTimeFilterPostcodeSectorsArrivalSearch)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterPostcodeSectors =
    { departureSearches : Maybe ((List RequestTimeFilterPostcodeSectorsDepartureSearch))
    , arrivalSearches : Maybe ((List RequestTimeFilterPostcodeSectorsArrivalSearch))
    }


decoder : Decoder RequestTimeFilterPostcodeSectors
decoder =
    Decode.succeed RequestTimeFilterPostcodeSectors
        |> optional "departure_searches" (Decode.nullable (Decode.list RequestTimeFilterPostcodeSectorsDepartureSearch.decoder)) Nothing
        |> optional "arrival_searches" (Decode.nullable (Decode.list RequestTimeFilterPostcodeSectorsArrivalSearch.decoder)) Nothing



encoder : RequestTimeFilterPostcodeSectors -> Encode.Value
encoder model =
    Encode.object
        [ ( "departure_searches", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterPostcodeSectorsDepartureSearch.encoder) model.departureSearches) )
        , ( "arrival_searches", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterPostcodeSectorsArrivalSearch.encoder) model.arrivalSearches) )

        ]


