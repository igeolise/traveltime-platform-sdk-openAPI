{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseFares exposing (ResponseFares, decoder, encode)

import Data.ResponseFaresBreakdownItem as ResponseFaresBreakdownItem exposing (ResponseFaresBreakdownItem)
import Data.ResponseFareTicket as ResponseFareTicket exposing (ResponseFareTicket)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseFares =
    { breakdown : (List ResponseFaresBreakdownItem)
    , ticketsTotal : (List ResponseFareTicket)
    }


decoder : Decoder ResponseFares
decoder =
    Decode.succeed ResponseFares
        |> required "breakdown" (Decode.list ResponseFaresBreakdownItem.decoder)
        |> required "tickets_total" (Decode.list ResponseFareTicket.decoder)



encode : ResponseFares -> Encode.Value
encode model =
    Encode.object
        [ ( "breakdown", (Encode.list ResponseFaresBreakdownItem.encode) model.breakdown )
        , ( "tickets_total", (Encode.list ResponseFareTicket.encode) model.ticketsTotal )

        ]


