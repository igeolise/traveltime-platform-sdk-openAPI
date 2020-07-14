# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimeAPI.Model.ResponseFaresFast do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"tickets_total"
  ]

  @type t :: %__MODULE__{
    :"tickets_total" => [ResponseFareTicket]
  }
end

defimpl Poison.Decoder, for: TravelTimeAPI.Model.ResponseFaresFast do
  import TravelTimeAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"tickets_total", :list, TravelTimeAPI.Model.ResponseFareTicket, options)
  end
end

