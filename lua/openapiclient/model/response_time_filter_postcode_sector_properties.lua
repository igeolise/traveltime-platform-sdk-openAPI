--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_postcode_sector_properties class
local response_time_filter_postcode_sector_properties = {}
local response_time_filter_postcode_sector_properties_mt = {
	__name = "response_time_filter_postcode_sector_properties";
	__index = response_time_filter_postcode_sector_properties;
}

local function cast_response_time_filter_postcode_sector_properties(t)
	return setmetatable(t, response_time_filter_postcode_sector_properties_mt)
end

local function new_response_time_filter_postcode_sector_properties(travel_time_reachable, travel_time_all, coverage)
	return cast_response_time_filter_postcode_sector_properties({
		["travel_time_reachable"] = travel_time_reachable;
		["travel_time_all"] = travel_time_all;
		["coverage"] = coverage;
	})
end

return {
	cast = cast_response_time_filter_postcode_sector_properties;
	new = new_response_time_filter_postcode_sector_properties;
}
