{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseRoutesResult exposing (ResponseRoutesResult, decoder, encoder)

import Data.ResponseRoutesLocation as ResponseRoutesLocation exposing (ResponseRoutesLocation)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseRoutesResult =
    { searchId : String
    , locations : (List ResponseRoutesLocation)
    , unreachable : (List String)
    }


decoder : Decoder ResponseRoutesResult
decoder =
    Decode.succeed ResponseRoutesResult
        |> required "search_id" Decode.string
        |> required "locations" (Decode.list ResponseRoutesLocation.decoder)
        |> required "unreachable" (Decode.list Decode.string)



encoder : ResponseRoutesResult -> Encode.Value
encoder model =
    Encode.object
        [ ( "search_id", Encode.string model.searchId )
        , ( "locations", (Encode.list ResponseRoutesLocation.encoder) model.locations )
        , ( "unreachable", (Encode.list Encode.string) model.unreachable )

        ]


