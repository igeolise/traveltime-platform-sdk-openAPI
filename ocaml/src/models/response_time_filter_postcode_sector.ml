(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    code: String.t;
    properties: Response_time_filter_postcode_sector_properties.t;
} [@@deriving yojson { strict = false }, show ];;

let create (code : String.t) (properties : Response_time_filter_postcode_sector_properties.t) : t = {
    code = code;
    properties = properties;
}

