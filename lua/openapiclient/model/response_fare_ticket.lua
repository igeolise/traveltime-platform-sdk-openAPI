--[[
  TravelTime API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.2.1
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_fare_ticket class
local response_fare_ticket = {}
local response_fare_ticket_mt = {
	__name = "response_fare_ticket";
	__index = response_fare_ticket;
}

local function cast_response_fare_ticket(t)
	return setmetatable(t, response_fare_ticket_mt)
end

local function new_response_fare_ticket(type, price, currency)
	return cast_response_fare_ticket({
		["type"] = type;
		["price"] = price;
		["currency"] = currency;
	})
end

return {
	cast = cast_response_fare_ticket;
	new = new_response_fare_ticket;
}
