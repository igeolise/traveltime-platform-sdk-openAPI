=begin
TravelTime API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class RequestTimeMapDepartureSearch < ApplicationRecord
  validates_presence_of :id
  validates_presence_of :coords
  validates_presence_of :transportation
  validates_presence_of :travel_time
  validates_presence_of :departure_time

  serialize :properties, Array
end
