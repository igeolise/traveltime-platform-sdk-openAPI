(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    tickets_total: Response_fare_ticket.t list;
} [@@deriving yojson { strict = false }, show ];;

let create (tickets_total : Response_fare_ticket.t list) : t = {
    tickets_total = tickets_total;
}

