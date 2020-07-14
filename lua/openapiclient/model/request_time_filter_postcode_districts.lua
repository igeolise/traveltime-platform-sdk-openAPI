--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_time_filter_postcode_districts class
local request_time_filter_postcode_districts = {}
local request_time_filter_postcode_districts_mt = {
	__name = "request_time_filter_postcode_districts";
	__index = request_time_filter_postcode_districts;
}

local function cast_request_time_filter_postcode_districts(t)
	return setmetatable(t, request_time_filter_postcode_districts_mt)
end

local function new_request_time_filter_postcode_districts(departure_searches, arrival_searches)
	return cast_request_time_filter_postcode_districts({
		["departure_searches"] = departure_searches;
		["arrival_searches"] = arrival_searches;
	})
end

return {
	cast = cast_request_time_filter_postcode_districts;
	new = new_request_time_filter_postcode_districts;
}
