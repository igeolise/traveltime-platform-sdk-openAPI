(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    modes: Enums.responsetransportationmode list;
    route_part_ids: int32 list;
    tickets: Response_fare_ticket.t list;
} [@@deriving yojson { strict = false }, show ];;

let create (modes : Enums.responsetransportationmode list) (route_part_ids : int32 list) (tickets : Response_fare_ticket.t list) : t = {
    modes = modes;
    route_part_ids = route_part_ids;
    tickets = tickets;
}

