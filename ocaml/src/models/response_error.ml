(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    http_status: int32 option [@default None];
    error_code: int32 option [@default None];
    description: string option [@default None];
    documentation_link: string option [@default None];
    additional_info: (string * string list) list;
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    http_status = None;
    error_code = None;
    description = None;
    documentation_link = None;
    additional_info = [];
}
