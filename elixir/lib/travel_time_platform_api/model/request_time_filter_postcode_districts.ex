# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeDistricts do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"departure_searches",
    :"arrival_searches"
  ]

  @type t :: %__MODULE__{
    :"departure_searches" => [RequestTimeFilterPostcodeDistrictsDepartureSearch] | nil,
    :"arrival_searches" => [RequestTimeFilterPostcodeDistrictsArrivalSearch] | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeDistricts do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"departure_searches", :list, TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeDistrictsDepartureSearch, options)
    |> deserialize(:"arrival_searches", :list, TravelTimePlatformAPI.Model.RequestTimeFilterPostcodeDistrictsArrivalSearch, options)
  end
end

