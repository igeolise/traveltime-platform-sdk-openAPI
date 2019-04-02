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

# Unit tests for OpenapiClient::ResponseTimeFilterPostcodeSectorsResult
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ResponseTimeFilterPostcodeSectorsResult' do
  before do
    # run before each test
    @instance = OpenapiClient::ResponseTimeFilterPostcodeSectorsResult.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ResponseTimeFilterPostcodeSectorsResult' do
    it 'should create an instance of ResponseTimeFilterPostcodeSectorsResult' do
      expect(@instance).to be_instance_of(OpenapiClient::ResponseTimeFilterPostcodeSectorsResult)
    end
  end
  describe 'test attribute "search_id"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "sectors"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
