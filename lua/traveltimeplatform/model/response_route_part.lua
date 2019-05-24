--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_route_part class
local response_route_part = {}
local response_route_part_mt = {
	__name = "response_route_part";
	__index = response_route_part;
}

local function cast_response_route_part(t)
	return setmetatable(t, response_route_part_mt)
end

local function new_response_route_part(id, type, mode, directions, distance, travel_time, coords, direction, road, turn, line, departure_station, arrival_station, departs_at, arrives_at, num_stops)
	return cast_response_route_part({
		["id"] = id;
		["type"] = type;
		["mode"] = mode;
		["directions"] = directions;
		["distance"] = distance;
		["travel_time"] = travel_time;
		["coords"] = coords;
		["direction"] = direction;
		["road"] = road;
		["turn"] = turn;
		["line"] = line;
		["departure_station"] = departure_station;
		["arrival_station"] = arrival_station;
		["departs_at"] = departs_at;
		["arrives_at"] = arrives_at;
		["num_stops"] = num_stops;
	})
end

return {
	cast = cast_response_route_part;
	new = new_response_route_part;
}
