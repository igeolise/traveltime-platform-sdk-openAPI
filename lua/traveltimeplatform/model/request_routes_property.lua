--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_routes_property class
local request_routes_property = {}
local request_routes_property_mt = {
	__name = "request_routes_property";
	__index = request_routes_property;
}

local function cast_request_routes_property(t)
	return setmetatable(t, request_routes_property_mt)
end

local function new_request_routes_property()
	return cast_request_routes_property({
	})
end

return {
	cast = cast_request_routes_property;
	new = new_request_routes_property;
}
