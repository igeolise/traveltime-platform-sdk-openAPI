-module(openapi_request_time_filter_postcode_districts).

-export([encode/1]).

-export_type([openapi_request_time_filter_postcode_districts/0]).

-type openapi_request_time_filter_postcode_districts() ::
    #{ 'departure_searches' => list(),
       'arrival_searches' => list()
     }.

encode(#{ 'departure_searches' := DepartureSearches,
          'arrival_searches' := ArrivalSearches
        }) ->
    #{ 'departure_searches' => DepartureSearches,
       'arrival_searches' => ArrivalSearches
     }.
