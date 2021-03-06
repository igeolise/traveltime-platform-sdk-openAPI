--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_routes_departure_search class
local request_routes_departure_search = {}
local request_routes_departure_search_mt = {
	__name = "request_routes_departure_search";
	__index = request_routes_departure_search;
}

local function cast_request_routes_departure_search(t)
	return setmetatable(t, request_routes_departure_search_mt)
end

local function new_request_routes_departure_search(id, departure_location_id, arrival_location_ids, transportation, departure_time, properties, range)
	return cast_request_routes_departure_search({
		["id"] = id;
		["departure_location_id"] = departure_location_id;
		["arrival_location_ids"] = arrival_location_ids;
		["transportation"] = transportation;
		["departure_time"] = departure_time;
		["properties"] = properties;
		["range"] = range;
	})
end

return {
	cast = cast_request_routes_departure_search;
	new = new_request_routes_departure_search;
}
