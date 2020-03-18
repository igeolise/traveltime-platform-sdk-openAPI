{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTransportationMode exposing (ResponseTransportationMode(..), decoder, encode, toString)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type ResponseTransportationMode
    = Car
    | Parking
    | Boarding
    | Walk
    | Bike
    | Train
    | RailNational
    | RailOverground
    | RailUnderground
    | RailDlr
    | Bus
    | CableCar
    | Plane
    | Ferry
    | Coach



decoder : Decoder ResponseTransportationMode
decoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "car" ->
                        Decode.succeed Car

                    "parking" ->
                        Decode.succeed Parking

                    "boarding" ->
                        Decode.succeed Boarding

                    "walk" ->
                        Decode.succeed Walk

                    "bike" ->
                        Decode.succeed Bike

                    "train" ->
                        Decode.succeed Train

                    "rail_national" ->
                        Decode.succeed RailNational

                    "rail_overground" ->
                        Decode.succeed RailOverground

                    "rail_underground" ->
                        Decode.succeed RailUnderground

                    "rail_dlr" ->
                        Decode.succeed RailDlr

                    "bus" ->
                        Decode.succeed Bus

                    "cable_car" ->
                        Decode.succeed CableCar

                    "plane" ->
                        Decode.succeed Plane

                    "ferry" ->
                        Decode.succeed Ferry

                    "coach" ->
                        Decode.succeed Coach

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encode : ResponseTransportationMode -> Encode.Value
encode model =
    case model of
        Car ->
            Encode.string "car"

        Parking ->
            Encode.string "parking"

        Boarding ->
            Encode.string "boarding"

        Walk ->
            Encode.string "walk"

        Bike ->
            Encode.string "bike"

        Train ->
            Encode.string "train"

        RailNational ->
            Encode.string "rail_national"

        RailOverground ->
            Encode.string "rail_overground"

        RailUnderground ->
            Encode.string "rail_underground"

        RailDlr ->
            Encode.string "rail_dlr"

        Bus ->
            Encode.string "bus"

        CableCar ->
            Encode.string "cable_car"

        Plane ->
            Encode.string "plane"

        Ferry ->
            Encode.string "ferry"

        Coach ->
            Encode.string "coach"




toString : ResponseTransportationMode -> String
toString model =
    case model of
        Car ->
            "car"

        Parking ->
            "parking"

        Boarding ->
            "boarding"

        Walk ->
            "walk"

        Bike ->
            "bike"

        Train ->
            "train"

        RailNational ->
            "rail_national"

        RailOverground ->
            "rail_overground"

        RailUnderground ->
            "rail_underground"

        RailDlr ->
            "rail_dlr"

        Bus ->
            "bus"

        CableCar ->
            "cable_car"

        Plane ->
            "plane"

        Ferry ->
            "ferry"

        Coach ->
            "coach"



