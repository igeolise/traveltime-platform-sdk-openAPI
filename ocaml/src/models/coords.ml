(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    lat: float;
    lng: float;
} [@@deriving yojson { strict = false }, show ];;

let create (lat : float) (lng : float) : t = {
    lat = lat;
    lng = lng;
}

