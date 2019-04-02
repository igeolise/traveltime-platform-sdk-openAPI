{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseRoutes exposing (ResponseRoutes, decoder, encoder)

import Data.ResponseRoutesResult as ResponseRoutesResult exposing (ResponseRoutesResult)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseRoutes =
    { results : (List ResponseRoutesResult)
    }


decoder : Decoder ResponseRoutes
decoder =
    Decode.succeed ResponseRoutes
        |> required "results" (Decode.list ResponseRoutesResult.decoder)



encoder : ResponseRoutes -> Encode.Value
encoder model =
    Encode.object
        [ ( "results", (Encode.list ResponseRoutesResult.encoder) model.results )

        ]


