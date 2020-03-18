{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseRoute exposing (ResponseRoute, decoder, encode, encodeWithTag, toString)

import DateTime exposing (DateTime)
import DateTime exposing (DateTime)
import Data.ResponseRoutePart as ResponseRoutePart exposing (ResponseRoutePart)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseRoute =
    { departureTime : DateTime
    , arrivalTime : DateTime
    , parts : (List ResponseRoutePart)
    }


decoder : Decoder ResponseRoute
decoder =
    Decode.succeed ResponseRoute
        |> required "departure_time" DateTime.decoder
        |> required "arrival_time" DateTime.decoder
        |> required "parts" (Decode.list ResponseRoutePart.decoder)



encode : ResponseRoute -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseRoute -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseRoute -> List (String, Encode.Value)
encodePairs model =
    [ ( "departure_time", DateTime.encode model.departureTime )
    , ( "arrival_time", DateTime.encode model.arrivalTime )
    , ( "parts", (Encode.list ResponseRoutePart.encode) model.parts )
    ]



toString : ResponseRoute -> String
toString =
    Encode.encode 0 << encode




