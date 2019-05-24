{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestRoutesArrivalSearch exposing (RequestRoutesArrivalSearch, decoder, encode)

import Data.RequestTransportation as RequestTransportation exposing (RequestTransportation)
import DateTime exposing (DateTime)
import Data.RequestRoutesProperty as RequestRoutesProperty exposing (RequestRoutesProperty)
import Data.RequestRangeFull as RequestRangeFull exposing (RequestRangeFull)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestRoutesArrivalSearch =
    { id : String
    , departureLocationIds : (List String)
    , arrivalLocationId : String
    , transportation : RequestTransportation
    , arrivalTime : DateTime
    , properties : (List RequestRoutesProperty)
    , range : Maybe (RequestRangeFull)
    }


decoder : Decoder RequestRoutesArrivalSearch
decoder =
    Decode.succeed RequestRoutesArrivalSearch
        |> required "id" Decode.string
        |> required "departure_location_ids" (Decode.list Decode.string)
        |> required "arrival_location_id" Decode.string
        |> required "transportation" RequestTransportation.decoder
        |> required "arrival_time" DateTime.decoder
        |> required "properties" (Decode.list RequestRoutesProperty.decoder)
        |> optional "range" (Decode.nullable RequestRangeFull.decoder) Nothing



encode : RequestRoutesArrivalSearch -> Encode.Value
encode model =
    Encode.object
        [ ( "id", Encode.string model.id )
        , ( "departure_location_ids", (Encode.list Encode.string) model.departureLocationIds )
        , ( "arrival_location_id", Encode.string model.arrivalLocationId )
        , ( "transportation", RequestTransportation.encode model.transportation )
        , ( "arrival_time", DateTime.encode model.arrivalTime )
        , ( "properties", (Encode.list RequestRoutesProperty.encode) model.properties )
        , ( "range", Maybe.withDefault Encode.null (Maybe.map RequestRangeFull.encode model.range) )

        ]


