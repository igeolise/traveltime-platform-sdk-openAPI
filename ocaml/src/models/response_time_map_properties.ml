(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    is_only_walking: bool option [@default None];
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    is_only_walking = None;
}
