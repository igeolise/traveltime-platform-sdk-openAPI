{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeFilterResult exposing (ResponseTimeFilterResult, decoder, encoder)

import Data.ResponseTimeFilterLocation as ResponseTimeFilterLocation exposing (ResponseTimeFilterLocation)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeFilterResult =
    { searchId : String
    , locations : (List ResponseTimeFilterLocation)
    , unreachable : (List String)
    }


decoder : Decoder ResponseTimeFilterResult
decoder =
    Decode.succeed ResponseTimeFilterResult
        |> required "search_id" Decode.string
        |> required "locations" (Decode.list ResponseTimeFilterLocation.decoder)
        |> required "unreachable" (Decode.list Decode.string)



encoder : ResponseTimeFilterResult -> Encode.Value
encoder model =
    Encode.object
        [ ( "search_id", Encode.string model.searchId )
        , ( "locations", (Encode.list ResponseTimeFilterLocation.encoder) model.locations )
        , ( "unreachable", (Encode.list Encode.string) model.unreachable )

        ]


