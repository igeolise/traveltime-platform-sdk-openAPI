--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  OpenAPI spec version: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- request_arrival_time_period class
local request_arrival_time_period = {}
local request_arrival_time_period_mt = {
	__name = "request_arrival_time_period";
	__index = request_arrival_time_period;
}

local function cast_request_arrival_time_period(t)
	return setmetatable(t, request_arrival_time_period_mt)
end

local function new_request_arrival_time_period()
	return cast_request_arrival_time_period({
	})
end

return {
	cast = cast_request_arrival_time_period;
	new = new_request_arrival_time_period;
}
