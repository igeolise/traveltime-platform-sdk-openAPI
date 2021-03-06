--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_travel_time_statistics class
local response_travel_time_statistics = {}
local response_travel_time_statistics_mt = {
	__name = "response_travel_time_statistics";
	__index = response_travel_time_statistics;
}

local function cast_response_travel_time_statistics(t)
	return setmetatable(t, response_travel_time_statistics_mt)
end

local function new_response_travel_time_statistics(min, max, mean, median)
	return cast_response_travel_time_statistics({
		["min"] = min;
		["max"] = max;
		["mean"] = mean;
		["median"] = median;
	})
end

return {
	cast = cast_response_travel_time_statistics;
	new = new_response_travel_time_statistics;
}
