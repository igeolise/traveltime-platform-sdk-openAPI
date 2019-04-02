# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeSectorsArrivalSearch do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"transportation",
    :"travel_time",
    :"arrival_time",
    :"reachable_postcodes_threshold",
    :"properties",
    :"range"
  ]

  @type t :: %__MODULE__{
    :"id" => String.t,
    :"transportation" => RequestTransportation,
    :"travel_time" => integer(),
    :"arrival_time" => DateTime.t,
    :"reachable_postcodes_threshold" => float(),
    :"properties" => [RequestTimeFilterPostcodeSectorsProperty],
    :"range" => RequestRangeFull | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeSectorsArrivalSearch do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"transportation", :struct, TravelTimePlatformAPI.Model.RequestTransportation, options)
    |> deserialize(:"properties", :list, TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeSectorsProperty, options)
    |> deserialize(:"range", :struct, TravelTimePlatformAPI.Model.RequestRangeFull, options)
  end
end

