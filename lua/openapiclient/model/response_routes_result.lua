--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_routes_result class
local response_routes_result = {}
local response_routes_result_mt = {
	__name = "response_routes_result";
	__index = response_routes_result;
}

local function cast_response_routes_result(t)
	return setmetatable(t, response_routes_result_mt)
end

local function new_response_routes_result(search_id, locations, unreachable)
	return cast_response_routes_result({
		["search_id"] = search_id;
		["locations"] = locations;
		["unreachable"] = unreachable;
	})
end

return {
	cast = cast_response_routes_result;
	new = new_response_routes_result;
}
