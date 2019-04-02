--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_time_filter_postcodes_departure_search class
local request_time_filter_postcodes_departure_search = {}
local request_time_filter_postcodes_departure_search_mt = {
	__name = "request_time_filter_postcodes_departure_search";
	__index = request_time_filter_postcodes_departure_search;
}

local function cast_request_time_filter_postcodes_departure_search(t)
	return setmetatable(t, request_time_filter_postcodes_departure_search_mt)
end

local function new_request_time_filter_postcodes_departure_search(id, transportation, travel_time, departure_time, properties, range)
	return cast_request_time_filter_postcodes_departure_search({
		["id"] = id;
		["transportation"] = transportation;
		["travel_time"] = travel_time;
		["departure_time"] = departure_time;
		["properties"] = properties;
		["range"] = range;
	})
end

return {
	cast = cast_request_time_filter_postcodes_departure_search;
	new = new_request_time_filter_postcodes_departure_search;
}
