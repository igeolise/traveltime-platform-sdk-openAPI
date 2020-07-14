# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseGeocodingGeoJsonFeature do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"type",
    :"geometry",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"type" => String.t,
    :"geometry" => ResponseGeocodingGeometry,
    :"properties" => ResponseGeocodingProperties
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseGeocodingGeoJsonFeature do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"geometry", :struct, TravelTimeAPI.Model.ResponseGeocodingGeometry, options)
    |> deserialize(:"properties", :struct, TravelTimeAPI.Model.ResponseGeocodingProperties, options)
  end
end

