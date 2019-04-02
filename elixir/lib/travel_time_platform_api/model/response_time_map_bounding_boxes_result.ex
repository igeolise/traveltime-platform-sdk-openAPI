# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeMapBoundingBoxesResult do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"search_id",
    :"bounding_boxes",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"search_id" => String.t,
    :"bounding_boxes" => [ResponseBoundingBox],
    :"properties" => ResponseTimeMapProperties
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeMapBoundingBoxesResult do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"bounding_boxes", :list, TravelTimePlatformAPI.Model.ResponseBoundingBox, options)
    |> deserialize(:"properties", :struct, TravelTimePlatformAPI.Model.ResponseTimeMapProperties, options)
  end
end

