=begin
#TravelTime API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.0.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::ResponseFaresFast
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ResponseFaresFast' do
  before do
    # run before each test
    @instance = OpenapiClient::ResponseFaresFast.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ResponseFaresFast' do
    it 'should create an instance of ResponseFaresFast' do
      expect(@instance).to be_instance_of(OpenapiClient::ResponseFaresFast)
    end
  end
  describe 'test attribute "tickets_total"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
