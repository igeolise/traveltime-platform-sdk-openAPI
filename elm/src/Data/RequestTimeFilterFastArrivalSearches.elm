{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI spec version: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterFastArrivalSearches exposing (RequestTimeFilterFastArrivalSearches, decoder, encoder)

import Data.RequestTimeFilterFastArrivalManyToOneSearch as RequestTimeFilterFastArrivalManyToOneSearch exposing (RequestTimeFilterFastArrivalManyToOneSearch)
import Data.RequestTimeFilterFastArrivalOneToManySearch as RequestTimeFilterFastArrivalOneToManySearch exposing (RequestTimeFilterFastArrivalOneToManySearch)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterFastArrivalSearches =
    { manyToOne : Maybe ((List RequestTimeFilterFastArrivalManyToOneSearch))
    , oneToMany : Maybe ((List RequestTimeFilterFastArrivalOneToManySearch))
    }


decoder : Decoder RequestTimeFilterFastArrivalSearches
decoder =
    Decode.succeed RequestTimeFilterFastArrivalSearches
        |> optional "many_to_one" (Decode.nullable (Decode.list RequestTimeFilterFastArrivalManyToOneSearch.decoder)) Nothing
        |> optional "one_to_many" (Decode.nullable (Decode.list RequestTimeFilterFastArrivalOneToManySearch.decoder)) Nothing



encoder : RequestTimeFilterFastArrivalSearches -> Encode.Value
encoder model =
    Encode.object
        [ ( "many_to_one", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterFastArrivalManyToOneSearch.encoder) model.manyToOne) )
        , ( "one_to_many", Maybe.withDefault Encode.null (Maybe.map (Encode.list RequestTimeFilterFastArrivalOneToManySearch.encoder) model.oneToMany) )

        ]


