{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeFilterPostcodeDistrict exposing (ResponseTimeFilterPostcodeDistrict, decoder, encode, encodeWithTag, toString)

import Data.ResponseTimeFilterPostcodeDistrictProperties as ResponseTimeFilterPostcodeDistrictProperties exposing (ResponseTimeFilterPostcodeDistrictProperties)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeFilterPostcodeDistrict =
    { code : String
    , properties : ResponseTimeFilterPostcodeDistrictProperties
    }


decoder : Decoder ResponseTimeFilterPostcodeDistrict
decoder =
    Decode.succeed ResponseTimeFilterPostcodeDistrict
        |> required "code" Decode.string
        |> required "properties" ResponseTimeFilterPostcodeDistrictProperties.decoder



encode : ResponseTimeFilterPostcodeDistrict -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseTimeFilterPostcodeDistrict -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseTimeFilterPostcodeDistrict -> List (String, Encode.Value)
encodePairs model =
    [ ( "code", Encode.string model.code )
    , ( "properties", ResponseTimeFilterPostcodeDistrictProperties.encode model.properties )
    ]



toString : ResponseTimeFilterPostcodeDistrict -> String
toString =
    Encode.encode 0 << encode




