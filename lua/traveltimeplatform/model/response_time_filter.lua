--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter class
local response_time_filter = {}
local response_time_filter_mt = {
	__name = "response_time_filter";
	__index = response_time_filter;
}

local function cast_response_time_filter(t)
	return setmetatable(t, response_time_filter_mt)
end

local function new_response_time_filter(results)
	return cast_response_time_filter({
		["results"] = results;
	})
end

return {
	cast = cast_response_time_filter;
	new = new_response_time_filter;
}
