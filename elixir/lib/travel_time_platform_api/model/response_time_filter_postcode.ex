# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeFilterPostcode do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"code",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"code" => String,
    :"properties" => [ResponseTimeFilterPostcodesProperties]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeFilterPostcode do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"properties", :list, TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodesProperties, options)
  end
end

