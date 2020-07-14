(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    locations: Request_location.t list;
    departure_searches: Request_time_filter_departure_search.t list;
    arrival_searches: Request_time_filter_arrival_search.t list;
} [@@deriving yojson { strict = false }, show ];;

let create (locations : Request_location.t list) : t = {
    locations = locations;
    departure_searches = [];
    arrival_searches = [];
}
