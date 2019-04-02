-module(traveltimeplatform_response_fares_breakdown_item).

-include("traveltimeplatform.hrl").

-export([traveltimeplatform_response_fares_breakdown_item/0]).

-export_type([traveltimeplatform_response_fares_breakdown_item/0]).

-type traveltimeplatform_response_fares_breakdown_item() ::
  [ {'modes', list(traveltimeplatform_response_transportation_mode:traveltimeplatform_response_transportation_mode()) }
  | {'route_part_ids', list(integer()) }
  | {'tickets', list(traveltimeplatform_response_fare_ticket:traveltimeplatform_response_fare_ticket()) }
  ].

traveltimeplatform_response_fares_breakdown_item() ->
  [ {'modes', list(traveltimeplatform_response_transportation_mode:traveltimeplatform_response_transportation_mode()) }
  , {'route_part_ids', list(integer()) }
  , {'tickets', list(traveltimeplatform_response_fare_ticket:traveltimeplatform_response_fare_ticket()) }
  ].
