(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    min_lat: float;
    max_lat: float;
    min_lng: float;
    max_lng: float;
} [@@deriving yojson { strict = false }, show ];;

let create (min_lat : float) (max_lat : float) (min_lng : float) (max_lng : float) : t = {
    min_lat = min_lat;
    max_lat = max_lat;
    min_lng = min_lng;
    max_lng = max_lng;
}

