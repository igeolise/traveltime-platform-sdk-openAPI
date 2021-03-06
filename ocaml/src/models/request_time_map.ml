(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    departure_searches: Request_time_map_departure_search.t list;
    arrival_searches: Request_time_map_arrival_search.t list;
    unions: Request_union_on_intersection.t list;
    intersections: Request_union_on_intersection.t list;
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    departure_searches = [];
    arrival_searches = [];
    unions = [];
    intersections = [];
}

