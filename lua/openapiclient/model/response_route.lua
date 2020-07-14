--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_route class
local response_route = {}
local response_route_mt = {
	__name = "response_route";
	__index = response_route;
}

local function cast_response_route(t)
	return setmetatable(t, response_route_mt)
end

local function new_response_route(departure_time, arrival_time, parts)
	return cast_response_route({
		["departure_time"] = departure_time;
		["arrival_time"] = arrival_time;
		["parts"] = parts;
	})
end

return {
	cast = cast_response_route;
	new = new_response_route;
}
