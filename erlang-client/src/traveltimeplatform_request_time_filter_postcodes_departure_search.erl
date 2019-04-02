-module(traveltimeplatform_request_time_filter_postcodes_departure_search).

-export([encode/1]).

-export_type([traveltimeplatform_request_time_filter_postcodes_departure_search/0]).

-type traveltimeplatform_request_time_filter_postcodes_departure_search() ::
    #{ 'id' := binary(),
       'transportation' := traveltimeplatform_request_transportation:traveltimeplatform_request_transportation(),
       'travel_time' := integer(),
       'departure_time' := traveltimeplatform_date_time:traveltimeplatform_date_time(),
       'properties' := list(),
       'range' => traveltimeplatform_request_range_full:traveltimeplatform_request_range_full()
     }.

encode(#{ 'id' := Id,
          'transportation' := Transportation,
          'travel_time' := TravelTime,
          'departure_time' := DepartureTime,
          'properties' := Properties,
          'range' := Range
        }) ->
    #{ 'id' => Id,
       'transportation' => Transportation,
       'travel_time' => TravelTime,
       'departure_time' => DepartureTime,
       'properties' => Properties,
       'range' => Range
     }.
