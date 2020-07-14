--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_map_info class
local response_map_info = {}
local response_map_info_mt = {
	__name = "response_map_info";
	__index = response_map_info;
}

local function cast_response_map_info(t)
	return setmetatable(t, response_map_info_mt)
end

local function new_response_map_info(maps)
	return cast_response_map_info({
		["maps"] = maps;
	})
end

return {
	cast = cast_response_map_info;
	new = new_response_map_info;
}
