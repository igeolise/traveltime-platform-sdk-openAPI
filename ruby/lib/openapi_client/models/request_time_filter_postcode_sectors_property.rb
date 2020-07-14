=begin
#TravelTime API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.0.0-SNAPSHOT

=end

require 'date'

module OpenapiClient
  class RequestTimeFilterPostcodeSectorsProperty
    TRAVEL_TIME_REACHABLE = "travel_time_reachable".freeze
    TRAVEL_TIME_ALL = "travel_time_all".freeze
    COVERAGE = "coverage".freeze

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
      constantValues = RequestTimeFilterPostcodeSectorsProperty.constants.select { |c| RequestTimeFilterPostcodeSectorsProperty::const_get(c) == value }
      raise "Invalid ENUM value #{value} for class #RequestTimeFilterPostcodeSectorsProperty" if constantValues.empty?
      value
    end
  end
end
