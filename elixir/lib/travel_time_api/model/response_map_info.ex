# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseMapInfo do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"maps"
  ]

  @type t :: %__MODULE__{
    :"maps" => [ResponseMapInfoMap]
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseMapInfo do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"maps", :list, TravelTimeAPI.Model.ResponseMapInfoMap, options)
  end
end
