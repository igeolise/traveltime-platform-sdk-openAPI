(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    search_id: string;
    locations: Response_time_filter_location.t list;
    unreachable: string list;
} [@@deriving yojson { strict = false }, show ];;

let create (search_id : string) (locations : Response_time_filter_location.t list) (unreachable : string list) : t = {
    search_id = search_id;
    locations = locations;
    unreachable = unreachable;
}

