{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterPostcodeSectorsProperty exposing (RequestTimeFilterPostcodeSectorsProperty(..), decoder, encoder)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type RequestTimeFilterPostcodeSectorsProperty
    = TravelTimeReachable
    | TravelTimeAll
    | Coverage



decoder : Decoder RequestTimeFilterPostcodeSectorsProperty
decoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "travel_time_reachable" ->
                        Decode.succeed TravelTimeReachable

                    "travel_time_all" ->
                        Decode.succeed TravelTimeAll

                    "coverage" ->
                        Decode.succeed Coverage

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encoder : RequestTimeFilterPostcodeSectorsProperty -> Encode.Value
encoder model =
    case model of
        TravelTimeReachable ->
            Encode.string "travel_time_reachable"

        TravelTimeAll ->
            Encode.string "travel_time_all"

        Coverage ->
            Encode.string "coverage"


