=begin
TravelTime API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class RequestTimeFilterPostcodeSectorsArrivalSearch < ApplicationRecord
  validates_presence_of :id
  validates_presence_of :transportation
  validates_presence_of :travel_time
  validates_presence_of :arrival_time
  validates_presence_of :reachable_postcodes_threshold
  validates_presence_of :properties

  serialize :properties, Array
end
