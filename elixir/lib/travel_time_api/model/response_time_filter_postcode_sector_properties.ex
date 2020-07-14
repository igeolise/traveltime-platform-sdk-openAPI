# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseTimeFilterPostcodeSectorProperties do
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

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseTimeFilterPostcodeSectorProperties do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"travel_time_reachable", :struct, TravelTimeAPI.Model.ResponseTravelTimeStatistics, options)
    |> deserialize(:"travel_time_all", :struct, TravelTimeAPI.Model.ResponseTravelTimeStatistics, options)
  end
end

