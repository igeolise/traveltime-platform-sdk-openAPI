# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseMapInfoFeaturesPublicTransport do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"date_start",
    :"date_end"
  ]

  @type t :: %__MODULE__{
    :"date_start" => DateTime.t,
    :"date_end" => DateTime.t
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseMapInfoFeaturesPublicTransport do
  def decode(value, _options) do
    value
  end
end

