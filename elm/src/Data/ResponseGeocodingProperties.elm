{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseGeocodingProperties exposing (ResponseGeocodingProperties, decoder, encoder)

import Data.ResponseMapInfoFeatures as ResponseMapInfoFeatures exposing (ResponseMapInfoFeatures)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseGeocodingProperties =
    { name : String
    , label : String
    , score : Maybe (Float)
    , houseNumber : Maybe (String)
    , street : Maybe (String)
    , region : Maybe (String)
    , regionCode : Maybe (String)
    , neighbourhood : Maybe (String)
    , county : Maybe (String)
    , macroregion : Maybe (String)
    , city : Maybe (String)
    , country : Maybe (String)
    , countryCode : Maybe (String)
    , continent : Maybe (String)
    , postcode : Maybe (String)
    , features : Maybe (ResponseMapInfoFeatures)
    }


decoder : Decoder ResponseGeocodingProperties
decoder =
    Decode.succeed ResponseGeocodingProperties
        |> required "name" Decode.string
        |> required "label" Decode.string
        |> optional "score" (Decode.nullable Decode.float) Nothing
        |> optional "house_number" (Decode.nullable Decode.string) Nothing
        |> optional "street" (Decode.nullable Decode.string) Nothing
        |> optional "region" (Decode.nullable Decode.string) Nothing
        |> optional "region_code" (Decode.nullable Decode.string) Nothing
        |> optional "neighbourhood" (Decode.nullable Decode.string) Nothing
        |> optional "county" (Decode.nullable Decode.string) Nothing
        |> optional "macroregion" (Decode.nullable Decode.string) Nothing
        |> optional "city" (Decode.nullable Decode.string) Nothing
        |> optional "country" (Decode.nullable Decode.string) Nothing
        |> optional "country_code" (Decode.nullable Decode.string) Nothing
        |> optional "continent" (Decode.nullable Decode.string) Nothing
        |> optional "postcode" (Decode.nullable Decode.string) Nothing
        |> optional "features" (Decode.nullable ResponseMapInfoFeatures.decoder) Nothing



encoder : ResponseGeocodingProperties -> Encode.Value
encoder model =
    Encode.object
        [ ( "name", Encode.string model.name )
        , ( "label", Encode.string model.label )
        , ( "score", Maybe.withDefault Encode.null (Maybe.map Encode.float model.score) )
        , ( "house_number", Maybe.withDefault Encode.null (Maybe.map Encode.string model.houseNumber) )
        , ( "street", Maybe.withDefault Encode.null (Maybe.map Encode.string model.street) )
        , ( "region", Maybe.withDefault Encode.null (Maybe.map Encode.string model.region) )
        , ( "region_code", Maybe.withDefault Encode.null (Maybe.map Encode.string model.regionCode) )
        , ( "neighbourhood", Maybe.withDefault Encode.null (Maybe.map Encode.string model.neighbourhood) )
        , ( "county", Maybe.withDefault Encode.null (Maybe.map Encode.string model.county) )
        , ( "macroregion", Maybe.withDefault Encode.null (Maybe.map Encode.string model.macroregion) )
        , ( "city", Maybe.withDefault Encode.null (Maybe.map Encode.string model.city) )
        , ( "country", Maybe.withDefault Encode.null (Maybe.map Encode.string model.country) )
        , ( "country_code", Maybe.withDefault Encode.null (Maybe.map Encode.string model.countryCode) )
        , ( "continent", Maybe.withDefault Encode.null (Maybe.map Encode.string model.continent) )
        , ( "postcode", Maybe.withDefault Encode.null (Maybe.map Encode.string model.postcode) )
        , ( "features", Maybe.withDefault Encode.null (Maybe.map ResponseMapInfoFeatures.encoder model.features) )

        ]


