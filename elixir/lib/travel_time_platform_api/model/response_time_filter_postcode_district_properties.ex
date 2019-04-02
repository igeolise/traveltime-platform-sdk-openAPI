# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodeDistrictProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"travel_time_reachable",
    :"travel_time_all",
    :"coverage"
  ]

  @type t :: %__MODULE__{
    :"travel_time_reachable" => ResponseTravelTimeStatistics | nil,
    :"travel_time_all" => ResponseTravelTimeStatistics | nil,
    :"coverage" => float() | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodeDistrictProperties do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"travel_time_reachable", :struct, TravelTimePlatformAPI.Model.ResponseTravelTimeStatistics, options)
    |> deserialize(:"travel_time_all", :struct, TravelTimePlatformAPI.Model.ResponseTravelTimeStatistics, options)
  end
end

