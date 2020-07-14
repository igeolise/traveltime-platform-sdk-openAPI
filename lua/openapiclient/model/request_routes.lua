--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_routes class
local request_routes = {}
local request_routes_mt = {
	__name = "request_routes";
	__index = request_routes;
}

local function cast_request_routes(t)
	return setmetatable(t, request_routes_mt)
end

local function new_request_routes(locations, departure_searches, arrival_searches)
	return cast_request_routes({
		["locations"] = locations;
		["departure_searches"] = departure_searches;
		["arrival_searches"] = arrival_searches;
	})
end

return {
	cast = cast_request_routes;
	new = new_request_routes;
}
