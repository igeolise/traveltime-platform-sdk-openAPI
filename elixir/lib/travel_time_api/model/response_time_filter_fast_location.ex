# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseTimeFilterFastLocation do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"id" => String.t,
    :"properties" => [ResponseTimeFilterFastProperties]
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseTimeFilterFastLocation do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"properties", :list, TravelTimeAPI.Model.ResponseTimeFilterFastProperties, options)
  end
end

