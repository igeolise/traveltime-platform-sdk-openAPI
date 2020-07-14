# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistrictsResult do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"search_id",
    :"districts"
  ]

  @type t :: %__MODULE__{
    :"search_id" => String.t,
    :"districts" => [ResponseTimeFilterPostcodeDistrict]
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistrictsResult do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"districts", :list, TravelTimeAPI.Model.ResponseTimeFilterPostcodeDistrict, options)
  end
end
