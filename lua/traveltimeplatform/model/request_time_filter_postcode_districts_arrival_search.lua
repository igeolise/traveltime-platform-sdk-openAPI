--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_time_filter_postcode_districts_arrival_search class
local request_time_filter_postcode_districts_arrival_search = {}
local request_time_filter_postcode_districts_arrival_search_mt = {
	__name = "request_time_filter_postcode_districts_arrival_search";
	__index = request_time_filter_postcode_districts_arrival_search;
}

local function cast_request_time_filter_postcode_districts_arrival_search(t)
	return setmetatable(t, request_time_filter_postcode_districts_arrival_search_mt)
end

local function new_request_time_filter_postcode_districts_arrival_search(id, transportation, travel_time, arrival_time, reachable_postcodes_threshold, properties, range)
	return cast_request_time_filter_postcode_districts_arrival_search({
		["id"] = id;
		["transportation"] = transportation;
		["travel_time"] = travel_time;
		["arrival_time"] = arrival_time;
		["reachable_postcodes_threshold"] = reachable_postcodes_threshold;
		["properties"] = properties;
		["range"] = range;
	})
end

return {
	cast = cast_request_time_filter_postcode_districts_arrival_search;
	new = new_request_time_filter_postcode_districts_arrival_search;
}
