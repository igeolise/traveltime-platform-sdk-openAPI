--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_supported_locations class
local request_supported_locations = {}
local request_supported_locations_mt = {
	__name = "request_supported_locations";
	__index = request_supported_locations;
}

local function cast_request_supported_locations(t)
	return setmetatable(t, request_supported_locations_mt)
end

local function new_request_supported_locations(locations)
	return cast_request_supported_locations({
		["locations"] = locations;
	})
end

return {
	cast = cast_request_supported_locations;
	new = new_request_supported_locations;
}
