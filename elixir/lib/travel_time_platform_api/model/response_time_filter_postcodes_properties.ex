# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodesProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"travel_time",
    :"distance"
  ]

  @type t :: %__MODULE__{
    :"travel_time" => integer() | nil,
    :"distance" => integer() | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodesProperties do
  def decode(value, _options) do
    value
  end
end

