--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_time_filter_postcode_sectors class
local request_time_filter_postcode_sectors = {}
local request_time_filter_postcode_sectors_mt = {
	__name = "request_time_filter_postcode_sectors";
	__index = request_time_filter_postcode_sectors;
}

local function cast_request_time_filter_postcode_sectors(t)
	return setmetatable(t, request_time_filter_postcode_sectors_mt)
end

local function new_request_time_filter_postcode_sectors(departure_searches, arrival_searches)
	return cast_request_time_filter_postcode_sectors({
		["departure_searches"] = departure_searches;
		["arrival_searches"] = arrival_searches;
	})
end

return {
	cast = cast_request_time_filter_postcode_sectors;
	new = new_request_time_filter_postcode_sectors;
}
