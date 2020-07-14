--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_supported_locations class
local response_supported_locations = {}
local response_supported_locations_mt = {
	__name = "response_supported_locations";
	__index = response_supported_locations;
}

local function cast_response_supported_locations(t)
	return setmetatable(t, response_supported_locations_mt)
end

local function new_response_supported_locations(locations, unsupported_locations)
	return cast_response_supported_locations({
		["locations"] = locations;
		["unsupported_locations"] = unsupported_locations;
	})
end

return {
	cast = cast_response_supported_locations;
	new = new_response_supported_locations;
}
