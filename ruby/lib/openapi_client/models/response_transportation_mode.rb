=begin
#TravelTime Platform API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.0.0

=end

require 'date'

module OpenapiClient
  class ResponseTransportationMode
    CAR = "car".freeze
    PARKING = "parking".freeze
    BOARDING = "boarding".freeze
    WALK = "walk".freeze
    BIKE = "bike".freeze
    TRAIN = "train".freeze
    RAIL_NATIONAL = "rail_national".freeze
    RAIL_OVERGROUND = "rail_overground".freeze
    RAIL_UNDERGROUND = "rail_underground".freeze
    RAIL_DLR = "rail_dlr".freeze
    BUS = "bus".freeze
    CABLE_CAR = "cable_car".freeze
    PLANE = "plane".freeze
    FERRY = "ferry".freeze
    COACH = "coach".freeze

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      constantValues = ResponseTransportationMode.constants.select { |c| ResponseTransportationMode::const_get(c) == value }
      raise "Invalid ENUM value #{value} for class #ResponseTransportationMode" if constantValues.empty?
      value
    end
  end
end
