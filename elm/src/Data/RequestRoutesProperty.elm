{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestRoutesProperty exposing (RequestRoutesProperty(..), decoder, encode)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type RequestRoutesProperty
    = TravelTime
    | Distance
    | Fares
    | Route



decoder : Decoder RequestRoutesProperty
decoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "travel_time" ->
                        Decode.succeed TravelTime

                    "distance" ->
                        Decode.succeed Distance

                    "fares" ->
                        Decode.succeed Fares

                    "route" ->
                        Decode.succeed Route

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encode : RequestRoutesProperty -> Encode.Value
encode model =
    case model of
        TravelTime ->
            Encode.string "travel_time"

        Distance ->
            Encode.string "distance"

        Fares ->
            Encode.string "fares"

        Route ->
            Encode.string "route"


