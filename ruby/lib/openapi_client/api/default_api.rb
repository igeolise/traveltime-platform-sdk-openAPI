=begin
#TravelTime API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.2.1
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.0.0-SNAPSHOT

=end

require 'cgi'

module OpenapiClient
  class DefaultApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # @param lat [Float] 
    # @param lng [Float] 
    # @param [Hash] opts the optional parameters
    # @option opts [String] :within_country 
    # @return [ResponseGeocoding]
    def geocoding_reverse_search(lat, lng, opts = {})
      data, _status_code, _headers = geocoding_reverse_search_with_http_info(lat, lng, opts)
      data
    end

    # @param lat [Float] 
    # @param lng [Float] 
    # @param [Hash] opts the optional parameters
    # @option opts [String] :within_country 
    # @return [Array<(ResponseGeocoding, Integer, Hash)>] ResponseGeocoding data, response status code and response headers
    def geocoding_reverse_search_with_http_info(lat, lng, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.geocoding_reverse_search ...'
      end
      # verify the required parameter 'lat' is set
      if @api_client.config.client_side_validation && lat.nil?
        fail ArgumentError, "Missing the required parameter 'lat' when calling DefaultApi.geocoding_reverse_search"
      end
      # verify the required parameter 'lng' is set
      if @api_client.config.client_side_validation && lng.nil?
        fail ArgumentError, "Missing the required parameter 'lng' when calling DefaultApi.geocoding_reverse_search"
      end
      # resource path
      local_var_path = '/v4/geocoding/reverse'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'lat'] = lat
      query_params[:'lng'] = lng
      query_params[:'within.country'] = opts[:'within_country'] if !opts[:'within_country'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'ResponseGeocoding' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#geocoding_reverse_search\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param query [String] 
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :focus_lat 
    # @option opts [Float] :focus_lng 
    # @option opts [String] :within_country 
    # @return [ResponseGeocoding]
    def geocoding_search(query, opts = {})
      data, _status_code, _headers = geocoding_search_with_http_info(query, opts)
      data
    end

    # @param query [String] 
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :focus_lat 
    # @option opts [Float] :focus_lng 
    # @option opts [String] :within_country 
    # @return [Array<(ResponseGeocoding, Integer, Hash)>] ResponseGeocoding data, response status code and response headers
    def geocoding_search_with_http_info(query, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.geocoding_search ...'
      end
      # verify the required parameter 'query' is set
      if @api_client.config.client_side_validation && query.nil?
        fail ArgumentError, "Missing the required parameter 'query' when calling DefaultApi.geocoding_search"
      end
      # resource path
      local_var_path = '/v4/geocoding/search'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'query'] = query
      query_params[:'focus.lat'] = opts[:'focus_lat'] if !opts[:'focus_lat'].nil?
      query_params[:'focus.lng'] = opts[:'focus_lng'] if !opts[:'focus_lng'].nil?
      query_params[:'within.country'] = opts[:'within_country'] if !opts[:'within_country'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'ResponseGeocoding' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#geocoding_search\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param [Hash] opts the optional parameters
    # @return [ResponseMapInfo]
    def map_info(opts = {})
      data, _status_code, _headers = map_info_with_http_info(opts)
      data
    end

    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseMapInfo, Integer, Hash)>] ResponseMapInfo data, response status code and response headers
    def map_info_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.map_info ...'
      end
      # resource path
      local_var_path = '/v4/map-info'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] 

      # return_type
      return_type = opts[:return_type] || 'ResponseMapInfo' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#map_info\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_routes [RequestRoutes] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseRoutes]
    def routes(request_routes, opts = {})
      data, _status_code, _headers = routes_with_http_info(request_routes, opts)
      data
    end

    # @param request_routes [RequestRoutes] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseRoutes, Integer, Hash)>] ResponseRoutes data, response status code and response headers
    def routes_with_http_info(request_routes, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.routes ...'
      end
      # verify the required parameter 'request_routes' is set
      if @api_client.config.client_side_validation && request_routes.nil?
        fail ArgumentError, "Missing the required parameter 'request_routes' when calling DefaultApi.routes"
      end
      # resource path
      local_var_path = '/v4/routes'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_routes) 

      # return_type
      return_type = opts[:return_type] || 'ResponseRoutes' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#routes\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_supported_locations [RequestSupportedLocations] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseSupportedLocations]
    def supported_locations(request_supported_locations, opts = {})
      data, _status_code, _headers = supported_locations_with_http_info(request_supported_locations, opts)
      data
    end

    # @param request_supported_locations [RequestSupportedLocations] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseSupportedLocations, Integer, Hash)>] ResponseSupportedLocations data, response status code and response headers
    def supported_locations_with_http_info(request_supported_locations, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.supported_locations ...'
      end
      # verify the required parameter 'request_supported_locations' is set
      if @api_client.config.client_side_validation && request_supported_locations.nil?
        fail ArgumentError, "Missing the required parameter 'request_supported_locations' when calling DefaultApi.supported_locations"
      end
      # resource path
      local_var_path = '/v4/supported-locations'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_supported_locations) 

      # return_type
      return_type = opts[:return_type] || 'ResponseSupportedLocations' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#supported_locations\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_filter [RequestTimeFilter] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeFilter]
    def time_filter(request_time_filter, opts = {})
      data, _status_code, _headers = time_filter_with_http_info(request_time_filter, opts)
      data
    end

    # @param request_time_filter [RequestTimeFilter] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeFilter, Integer, Hash)>] ResponseTimeFilter data, response status code and response headers
    def time_filter_with_http_info(request_time_filter, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_filter ...'
      end
      # verify the required parameter 'request_time_filter' is set
      if @api_client.config.client_side_validation && request_time_filter.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_filter' when calling DefaultApi.time_filter"
      end
      # resource path
      local_var_path = '/v4/time-filter'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_filter) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeFilter' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_filter\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_filter_fast [RequestTimeFilterFast] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeFilterFast]
    def time_filter_fast(request_time_filter_fast, opts = {})
      data, _status_code, _headers = time_filter_fast_with_http_info(request_time_filter_fast, opts)
      data
    end

    # @param request_time_filter_fast [RequestTimeFilterFast] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeFilterFast, Integer, Hash)>] ResponseTimeFilterFast data, response status code and response headers
    def time_filter_fast_with_http_info(request_time_filter_fast, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_filter_fast ...'
      end
      # verify the required parameter 'request_time_filter_fast' is set
      if @api_client.config.client_side_validation && request_time_filter_fast.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_filter_fast' when calling DefaultApi.time_filter_fast"
      end
      # resource path
      local_var_path = '/v4/time-filter/fast'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_filter_fast) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeFilterFast' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_filter_fast\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_filter_postcode_districts [RequestTimeFilterPostcodeDistricts] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeFilterPostcodeDistricts]
    def time_filter_postcode_districts(request_time_filter_postcode_districts, opts = {})
      data, _status_code, _headers = time_filter_postcode_districts_with_http_info(request_time_filter_postcode_districts, opts)
      data
    end

    # @param request_time_filter_postcode_districts [RequestTimeFilterPostcodeDistricts] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeFilterPostcodeDistricts, Integer, Hash)>] ResponseTimeFilterPostcodeDistricts data, response status code and response headers
    def time_filter_postcode_districts_with_http_info(request_time_filter_postcode_districts, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_filter_postcode_districts ...'
      end
      # verify the required parameter 'request_time_filter_postcode_districts' is set
      if @api_client.config.client_side_validation && request_time_filter_postcode_districts.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_filter_postcode_districts' when calling DefaultApi.time_filter_postcode_districts"
      end
      # resource path
      local_var_path = '/v4/time-filter/postcode-districts'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_filter_postcode_districts) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeFilterPostcodeDistricts' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_filter_postcode_districts\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_filter_postcode_sectors [RequestTimeFilterPostcodeSectors] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeFilterPostcodeSectors]
    def time_filter_postcode_sectors(request_time_filter_postcode_sectors, opts = {})
      data, _status_code, _headers = time_filter_postcode_sectors_with_http_info(request_time_filter_postcode_sectors, opts)
      data
    end

    # @param request_time_filter_postcode_sectors [RequestTimeFilterPostcodeSectors] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeFilterPostcodeSectors, Integer, Hash)>] ResponseTimeFilterPostcodeSectors data, response status code and response headers
    def time_filter_postcode_sectors_with_http_info(request_time_filter_postcode_sectors, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_filter_postcode_sectors ...'
      end
      # verify the required parameter 'request_time_filter_postcode_sectors' is set
      if @api_client.config.client_side_validation && request_time_filter_postcode_sectors.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_filter_postcode_sectors' when calling DefaultApi.time_filter_postcode_sectors"
      end
      # resource path
      local_var_path = '/v4/time-filter/postcode-sectors'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_filter_postcode_sectors) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeFilterPostcodeSectors' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_filter_postcode_sectors\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_filter_postcodes [RequestTimeFilterPostcodes] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeFilterPostcodes]
    def time_filter_postcodes(request_time_filter_postcodes, opts = {})
      data, _status_code, _headers = time_filter_postcodes_with_http_info(request_time_filter_postcodes, opts)
      data
    end

    # @param request_time_filter_postcodes [RequestTimeFilterPostcodes] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeFilterPostcodes, Integer, Hash)>] ResponseTimeFilterPostcodes data, response status code and response headers
    def time_filter_postcodes_with_http_info(request_time_filter_postcodes, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_filter_postcodes ...'
      end
      # verify the required parameter 'request_time_filter_postcodes' is set
      if @api_client.config.client_side_validation && request_time_filter_postcodes.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_filter_postcodes' when calling DefaultApi.time_filter_postcodes"
      end
      # resource path
      local_var_path = '/v4/time-filter/postcodes'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_filter_postcodes) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeFilterPostcodes' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_filter_postcodes\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # @param request_time_map [RequestTimeMap] 
    # @param [Hash] opts the optional parameters
    # @return [ResponseTimeMap]
    def time_map(request_time_map, opts = {})
      data, _status_code, _headers = time_map_with_http_info(request_time_map, opts)
      data
    end

    # @param request_time_map [RequestTimeMap] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ResponseTimeMap, Integer, Hash)>] ResponseTimeMap data, response status code and response headers
    def time_map_with_http_info(request_time_map, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: DefaultApi.time_map ...'
      end
      # verify the required parameter 'request_time_map' is set
      if @api_client.config.client_side_validation && request_time_map.nil?
        fail ArgumentError, "Missing the required parameter 'request_time_map' when calling DefaultApi.time_map"
      end
      # resource path
      local_var_path = '/v4/time-map'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'application/vnd.wkt+json', 'application/vnd.wkt-no-holes+json', 'application/vnd.bounding-boxes+json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(request_time_map) 

      # return_type
      return_type = opts[:return_type] || 'ResponseTimeMap' 

      # auth_names
      auth_names = opts[:auth_names] || ['ApiKey', 'ApplicationId']

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: DefaultApi#time_map\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
