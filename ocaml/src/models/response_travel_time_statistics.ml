(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    min: int32;
    max: int32;
    mean: int32;
    median: int32;
} [@@deriving yojson { strict = false }, show ];;

let create (min : int32) (max : int32) (mean : int32) (median : int32) : t = {
    min = min;
    max = max;
    mean = mean;
    median = median;
}

