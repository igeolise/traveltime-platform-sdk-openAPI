--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_postcodes_properties class
local response_time_filter_postcodes_properties = {}
local response_time_filter_postcodes_properties_mt = {
	__name = "response_time_filter_postcodes_properties";
	__index = response_time_filter_postcodes_properties;
}

local function cast_response_time_filter_postcodes_properties(t)
	return setmetatable(t, response_time_filter_postcodes_properties_mt)
end

local function new_response_time_filter_postcodes_properties(travel_time, distance)
	return cast_response_time_filter_postcodes_properties({
		["travel_time"] = travel_time;
		["distance"] = distance;
	})
end

return {
	cast = cast_response_time_filter_postcodes_properties;
	new = new_response_time_filter_postcodes_properties;
}
