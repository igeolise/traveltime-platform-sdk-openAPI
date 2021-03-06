(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    id: string;
    transportation: Request_transportation.t;
    travel_time: int32;
    arrival_time: string;
    properties: Enums.requesttimefilterpostcodesproperty list;
    range: Request_range_full.t option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create (id : string) (transportation : Request_transportation.t) (travel_time : int32) (arrival_time : string) (properties : Enums.requesttimefilterpostcodesproperty list) : t = {
    id = id;
    transportation = transportation;
    travel_time = travel_time;
    arrival_time = arrival_time;
    properties = properties;
    range = None;
}

