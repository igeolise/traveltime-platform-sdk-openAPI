--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_result class
local response_time_filter_result = {}
local response_time_filter_result_mt = {
	__name = "response_time_filter_result";
	__index = response_time_filter_result;
}

local function cast_response_time_filter_result(t)
	return setmetatable(t, response_time_filter_result_mt)
end

local function new_response_time_filter_result(search_id, locations, unreachable)
	return cast_response_time_filter_result({
		["search_id"] = search_id;
		["locations"] = locations;
		["unreachable"] = unreachable;
	})
end

return {
	cast = cast_response_time_filter_result;
	new = new_response_time_filter_result;
}
