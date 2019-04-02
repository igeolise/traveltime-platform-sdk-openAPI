{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterPostcodesArrivalSearch exposing (RequestTimeFilterPostcodesArrivalSearch, decoder, encoder)

import Data.RequestTransportation as RequestTransportation exposing (RequestTransportation)
import DateTime exposing (DateTime)
import Data.RequestTimeFilterPostcodesProperty as RequestTimeFilterPostcodesProperty exposing (RequestTimeFilterPostcodesProperty)
import Data.RequestRangeFull as RequestRangeFull exposing (RequestRangeFull)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterPostcodesArrivalSearch =
    { id : String
    , transportation : RequestTransportation
    , travelTime : Int
    , arrivalTime : DateTime
    , properties : (List RequestTimeFilterPostcodesProperty)
    , range : Maybe (RequestRangeFull)
    }


decoder : Decoder RequestTimeFilterPostcodesArrivalSearch
decoder =
    Decode.succeed RequestTimeFilterPostcodesArrivalSearch
        |> required "id" Decode.string
        |> required "transportation" RequestTransportation.decoder
        |> required "travel_time" Decode.int
        |> required "arrival_time" DateTime.decoder
        |> required "properties" (Decode.list RequestTimeFilterPostcodesProperty.decoder)
        |> optional "range" (Decode.nullable RequestRangeFull.decoder) Nothing



encoder : RequestTimeFilterPostcodesArrivalSearch -> Encode.Value
encoder model =
    Encode.object
        [ ( "id", Encode.string model.id )
        , ( "transportation", RequestTransportation.encoder model.transportation )
        , ( "travel_time", Encode.int model.travelTime )
        , ( "arrival_time", DateTime.encoder model.arrivalTime )
        , ( "properties", (Encode.list RequestTimeFilterPostcodesProperty.encoder) model.properties )
        , ( "range", Maybe.withDefault Encode.null (Maybe.map RequestRangeFull.encoder model.range) )

        ]


