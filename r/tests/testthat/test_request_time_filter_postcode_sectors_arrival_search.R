# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test RequestTimeFilterPostcodeSectorsArrivalSearch")

model.instance <- RequestTimeFilterPostcodeSectorsArrivalSearch$new()

test_that("id", {
  # tests for the property `id` (character)

  # uncomment below to test the property 
  #expect_equal(model.instance$`id`, "EXPECTED_RESULT")
})

test_that("transportation", {
  # tests for the property `transportation` (RequestTransportation)

  # uncomment below to test the property 
  #expect_equal(model.instance$`transportation`, "EXPECTED_RESULT")
})

test_that("travel_time", {
  # tests for the property `travel_time` (integer)

  # uncomment below to test the property 
  #expect_equal(model.instance$`travel_time`, "EXPECTED_RESULT")
})

test_that("arrival_time", {
  # tests for the property `arrival_time` (character)

  # uncomment below to test the property 
  #expect_equal(model.instance$`arrival_time`, "EXPECTED_RESULT")
})

test_that("reachable_postcodes_threshold", {
  # tests for the property `reachable_postcodes_threshold` (numeric)

  # uncomment below to test the property 
  #expect_equal(model.instance$`reachable_postcodes_threshold`, "EXPECTED_RESULT")
})

test_that("properties", {
  # tests for the property `properties` (array[RequestTimeFilterPostcodeSectorsProperty])

  # uncomment below to test the property 
  #expect_equal(model.instance$`properties`, "EXPECTED_RESULT")
})

test_that("range", {
  # tests for the property `range` (RequestRangeFull)

  # uncomment below to test the property 
  #expect_equal(model.instance$`range`, "EXPECTED_RESULT")
})

