# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseSupportedLocations do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"locations",
    :"unsupported_locations"
  ]

  @type t :: %__MODULE__{
    :"locations" => [ResponseSupportedLocation],
    :"unsupported_locations" => [String.t]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseSupportedLocations do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"locations", :list, TravelTimePlatformAPI.Model.ResponseSupportedLocation, options)
  end
end

