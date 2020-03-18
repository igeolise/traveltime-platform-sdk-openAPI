note
 description:"[
		TravelTime Platform API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: 1.0.0
 	    Contact: support@igeolise.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	DEFAULT_API

inherit

    API_I


feature -- API Access


	geocoding_reverse_search (lat: REAL_64; lng: REAL_64; within_country: STRING_32): detachable RESPONSE_GEOCODING
			-- 
			-- 
			-- 
			-- argument: lat  (required)
			-- 
			-- argument: lng  (required)
			-- 
			-- argument: within_country  (optional, default to null)
			-- 
			-- 
			-- Result RESPONSE_GEOCODING
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/v4/geocoding/reverse"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "lat", lat));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "lng", lng));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "within.country", within_country));


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<>>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_GEOCODING } l_response.data ({ RESPONSE_GEOCODING }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	geocoding_search (query: STRING_32; focus_lat: REAL_64; focus_lng: REAL_64; within_country: STRING_32): detachable RESPONSE_GEOCODING
			-- 
			-- 
			-- 
			-- argument: query  (required)
			-- 
			-- argument: focus_lat  (optional, default to null)
			-- 
			-- argument: focus_lng  (optional, default to null)
			-- 
			-- argument: within_country  (optional, default to null)
			-- 
			-- 
			-- Result RESPONSE_GEOCODING
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/v4/geocoding/search"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "query", query));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "focus.lat", focus_lat));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "focus.lng", focus_lng));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "within.country", within_country));


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<>>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_GEOCODING } l_response.data ({ RESPONSE_GEOCODING }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	map_info : detachable RESPONSE_MAP_INFO
			-- 
			-- 
			-- 
			-- 
			-- Result RESPONSE_MAP_INFO
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/v4/map-info"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<>>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_MAP_INFO } l_response.data ({ RESPONSE_MAP_INFO }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	routes (request_routes: REQUEST_ROUTES): detachable RESPONSE_ROUTES
			-- 
			-- 
			-- 
			-- argument: request_routes  (required)
			-- 
			-- 
			-- Result RESPONSE_ROUTES
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_routes)
			l_path := "/v4/routes"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_ROUTES } l_response.data ({ RESPONSE_ROUTES }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	supported_locations (request_supported_locations: REQUEST_SUPPORTED_LOCATIONS): detachable RESPONSE_SUPPORTED_LOCATIONS
			-- 
			-- 
			-- 
			-- argument: request_supported_locations  (required)
			-- 
			-- 
			-- Result RESPONSE_SUPPORTED_LOCATIONS
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_supported_locations)
			l_path := "/v4/supported-locations"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_SUPPORTED_LOCATIONS } l_response.data ({ RESPONSE_SUPPORTED_LOCATIONS }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_filter (request_time_filter: REQUEST_TIME_FILTER): detachable RESPONSE_TIME_FILTER
			-- 
			-- 
			-- 
			-- argument: request_time_filter  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_FILTER
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_filter)
			l_path := "/v4/time-filter"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_FILTER } l_response.data ({ RESPONSE_TIME_FILTER }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_filter_fast (request_time_filter_fast: REQUEST_TIME_FILTER_FAST): detachable RESPONSE_TIME_FILTER_FAST
			-- 
			-- 
			-- 
			-- argument: request_time_filter_fast  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_FILTER_FAST
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_filter_fast)
			l_path := "/v4/time-filter/fast"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_FILTER_FAST } l_response.data ({ RESPONSE_TIME_FILTER_FAST }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_filter_postcode_districts (request_time_filter_postcode_districts: REQUEST_TIME_FILTER_POSTCODE_DISTRICTS): detachable RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS
			-- 
			-- 
			-- 
			-- argument: request_time_filter_postcode_districts  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_filter_postcode_districts)
			l_path := "/v4/time-filter/postcode-districts"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS } l_response.data ({ RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_filter_postcode_sectors (request_time_filter_postcode_sectors: REQUEST_TIME_FILTER_POSTCODE_SECTORS): detachable RESPONSE_TIME_FILTER_POSTCODE_SECTORS
			-- 
			-- 
			-- 
			-- argument: request_time_filter_postcode_sectors  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_FILTER_POSTCODE_SECTORS
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_filter_postcode_sectors)
			l_path := "/v4/time-filter/postcode-sectors"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_FILTER_POSTCODE_SECTORS } l_response.data ({ RESPONSE_TIME_FILTER_POSTCODE_SECTORS }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_filter_postcodes (request_time_filter_postcodes: REQUEST_TIME_FILTER_POSTCODES): detachable RESPONSE_TIME_FILTER_POSTCODES
			-- 
			-- 
			-- 
			-- argument: request_time_filter_postcodes  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_FILTER_POSTCODES
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_filter_postcodes)
			l_path := "/v4/time-filter/postcodes"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_FILTER_POSTCODES } l_response.data ({ RESPONSE_TIME_FILTER_POSTCODES }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	time_map (request_time_map: REQUEST_TIME_MAP): detachable RESPONSE_TIME_MAP
			-- 
			-- 
			-- 
			-- argument: request_time_map  (required)
			-- 
			-- 
			-- Result RESPONSE_TIME_MAP
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(request_time_map)
			l_path := "/v4/time-map"


			if attached {STRING} api_client.select_header_accept (<<"application/json", "application/vnd.wkt+json", "application/vnd.wkt-no-holes+json", "application/vnd.bounding-boxes+json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<"ApiKey", "ApplicationId">>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { RESPONSE_TIME_MAP } l_response.data ({ RESPONSE_TIME_MAP }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	


end
