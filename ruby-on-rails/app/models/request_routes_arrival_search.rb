=begin
TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

OpenAPI spec version: 1.0.0
Contact: support@igeolise.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class RequestRoutesArrivalSearch < ApplicationRecord
  validates_presence_of :id
  validates_presence_of :departure_location_ids
  validates_presence_of :arrival_location_id
  validates_presence_of :transportation
  validates_presence_of :arrival_time
  validates_presence_of :properties

  serialize :departure_location_ids, Array
  serialize :properties, Array
end
