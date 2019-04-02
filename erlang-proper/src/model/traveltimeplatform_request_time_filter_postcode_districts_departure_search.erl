-module(traveltimeplatform_request_time_filter_postcode_districts_departure_search).

-include("traveltimeplatform.hrl").

-export([traveltimeplatform_request_time_filter_postcode_districts_departure_search/0]).

-export_type([traveltimeplatform_request_time_filter_postcode_districts_departure_search/0]).

-type traveltimeplatform_request_time_filter_postcode_districts_departure_search() ::
  [ {'id', binary() }
  | {'transportation', traveltimeplatform_request_transportation:traveltimeplatform_request_transportation() }
  | {'travel_time', integer() }
  | {'departure_time', datetime() }
  | {'reachable_postcodes_threshold', float() }
  | {'properties', list(traveltimeplatform_request_time_filter_postcode_districts_property:traveltimeplatform_request_time_filter_postcode_districts_property()) }
  | {'range', traveltimeplatform_request_range_full:traveltimeplatform_request_range_full() }
  ].

traveltimeplatform_request_time_filter_postcode_districts_departure_search() ->
  [ {'id', binary() }
  , {'transportation', traveltimeplatform_request_transportation:traveltimeplatform_request_transportation() }
  , {'travel_time', integer(60, 14400) }
  , {'departure_time', datetime() }
  , {'reachable_postcodes_threshold', float() }
  , {'properties', list(traveltimeplatform_request_time_filter_postcode_districts_property:traveltimeplatform_request_time_filter_postcode_districts_property()) }
  , {'range', traveltimeplatform_request_range_full:traveltimeplatform_request_range_full() }
  ].
