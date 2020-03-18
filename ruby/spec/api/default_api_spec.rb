=begin
#TravelTime Platform API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::DefaultApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'DefaultApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::DefaultApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of DefaultApi' do
    it 'should create an instance of DefaultApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::DefaultApi)
    end
  end

  # unit tests for geocoding_reverse_search
  # @param lat 
  # @param lng 
  # @param [Hash] opts the optional parameters
  # @option opts [String] :within_country 
  # @return [ResponseGeocoding]
  describe 'geocoding_reverse_search test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for geocoding_search
  # @param query 
  # @param [Hash] opts the optional parameters
  # @option opts [Float] :focus_lat 
  # @option opts [Float] :focus_lng 
  # @option opts [String] :within_country 
  # @return [ResponseGeocoding]
  describe 'geocoding_search test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for map_info
  # @param [Hash] opts the optional parameters
  # @return [ResponseMapInfo]
  describe 'map_info test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for routes
  # @param request_routes 
  # @param [Hash] opts the optional parameters
  # @return [ResponseRoutes]
  describe 'routes test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for supported_locations
  # @param request_supported_locations 
  # @param [Hash] opts the optional parameters
  # @return [ResponseSupportedLocations]
  describe 'supported_locations test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_filter
  # @param request_time_filter 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeFilter]
  describe 'time_filter test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_filter_fast
  # @param request_time_filter_fast 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeFilterFast]
  describe 'time_filter_fast test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_filter_postcode_districts
  # @param request_time_filter_postcode_districts 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeFilterPostcodeDistricts]
  describe 'time_filter_postcode_districts test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_filter_postcode_sectors
  # @param request_time_filter_postcode_sectors 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeFilterPostcodeSectors]
  describe 'time_filter_postcode_sectors test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_filter_postcodes
  # @param request_time_filter_postcodes 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeFilterPostcodes]
  describe 'time_filter_postcodes test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for time_map
  # @param request_time_map 
  # @param [Hash] opts the optional parameters
  # @return [ResponseTimeMap]
  describe 'time_map test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
