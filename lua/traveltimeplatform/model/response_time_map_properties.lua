--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_map_properties class
local response_time_map_properties = {}
local response_time_map_properties_mt = {
	__name = "response_time_map_properties";
	__index = response_time_map_properties;
}

local function cast_response_time_map_properties(t)
	return setmetatable(t, response_time_map_properties_mt)
end

local function new_response_time_map_properties(is_only_walking)
	return cast_response_time_map_properties({
		["is_only_walking"] = is_only_walking;
	})
end

return {
	cast = cast_response_time_map_properties;
	new = new_response_time_map_properties;
}
