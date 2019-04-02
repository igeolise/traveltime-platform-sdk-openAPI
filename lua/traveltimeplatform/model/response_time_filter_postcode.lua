--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_postcode class
local response_time_filter_postcode = {}
local response_time_filter_postcode_mt = {
	__name = "response_time_filter_postcode";
	__index = response_time_filter_postcode;
}

local function cast_response_time_filter_postcode(t)
	return setmetatable(t, response_time_filter_postcode_mt)
end

local function new_response_time_filter_postcode(code, properties)
	return cast_response_time_filter_postcode({
		["code"] = code;
		["properties"] = properties;
	})
end

return {
	cast = cast_response_time_filter_postcode;
	new = new_response_time_filter_postcode;
}
