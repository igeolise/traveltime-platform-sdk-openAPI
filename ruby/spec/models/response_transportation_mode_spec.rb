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

# Unit tests for OpenapiClient::ResponseTransportationMode
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ResponseTransportationMode' do
  before do
    # run before each test
    @instance = OpenapiClient::ResponseTransportationMode.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ResponseTransportationMode' do
    it 'should create an instance of ResponseTransportationMode' do
      expect(@instance).to be_instance_of(OpenapiClient::ResponseTransportationMode)
    end
  end
end
