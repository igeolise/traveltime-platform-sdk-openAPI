=begin
#TravelTime Platform API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

OpenAPI spec version: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.3.4

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::RequestSupportedLocations
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'RequestSupportedLocations' do
  before do
    # run before each test
    @instance = OpenapiClient::RequestSupportedLocations.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of RequestSupportedLocations' do
    it 'should create an instance of RequestSupportedLocations' do
      expect(@instance).to be_instance_of(OpenapiClient::RequestSupportedLocations)
    end
  end
  describe 'test attribute "locations"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
