--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_range_no_max_results class
local request_range_no_max_results = {}
local request_range_no_max_results_mt = {
	__name = "request_range_no_max_results";
	__index = request_range_no_max_results;
}

local function cast_request_range_no_max_results(t)
	return setmetatable(t, request_range_no_max_results_mt)
end

local function new_request_range_no_max_results(enabled, width)
	return cast_request_range_no_max_results({
		["enabled"] = enabled;
		["width"] = width;
	})
end

return {
	cast = cast_request_range_no_max_results;
	new = new_request_range_no_max_results;
}
