=begin
TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

OpenAPI spec version: 1.0.0
Contact: support@igeolise.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class RequestTimeFilter < ApplicationRecord
  validates_presence_of :locations

  serialize :locations, Array
  serialize :departure_searches, Array
  serialize :arrival_searches, Array
end
