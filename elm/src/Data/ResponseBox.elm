{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseBox exposing (ResponseBox, decoder, encode, encodeWithTag, toString)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseBox =
    { minLat : Float
    , maxLat : Float
    , minLng : Float
    , maxLng : Float
    }


decoder : Decoder ResponseBox
decoder =
    Decode.succeed ResponseBox
        |> required "min_lat" Decode.float
        |> required "max_lat" Decode.float
        |> required "min_lng" Decode.float
        |> required "max_lng" Decode.float



encode : ResponseBox -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseBox -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseBox -> List (String, Encode.Value)
encodePairs model =
    [ ( "min_lat", Encode.float model.minLat )
    , ( "max_lat", Encode.float model.maxLat )
    , ( "min_lng", Encode.float model.minLng )
    , ( "max_lng", Encode.float model.maxLng )
    ]



toString : ResponseBox -> String
toString =
    Encode.encode 0 << encode




