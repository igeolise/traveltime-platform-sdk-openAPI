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

# Unit tests for OpenapiClient::RequestTimeFilterPostcodeDistricts
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'RequestTimeFilterPostcodeDistricts' do
  before do
    # run before each test
    @instance = OpenapiClient::RequestTimeFilterPostcodeDistricts.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of RequestTimeFilterPostcodeDistricts' do
    it 'should create an instance of RequestTimeFilterPostcodeDistricts' do
      expect(@instance).to be_instance_of(OpenapiClient::RequestTimeFilterPostcodeDistricts)
    end
  end
  describe 'test attribute "departure_searches"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "arrival_searches"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
