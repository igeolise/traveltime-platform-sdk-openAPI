# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistricts do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"results"
  ]

  @type t :: %__MODULE__{
    :"results" => [ResponseTimeFilterPostcodeDistrictsResult]
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistricts do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"results", :list, TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistrictsResult, options)
  end
end

