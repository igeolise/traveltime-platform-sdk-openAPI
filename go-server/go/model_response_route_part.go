/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package traveltimeplatform

type ResponseRoutePart struct {

	Id string `json:"id"`

	Type string `json:"type"`

	Mode ResponseTransportationMode `json:"mode"`

	Directions string `json:"directions"`

	Distance int32 `json:"distance"`

	TravelTime int32 `json:"travel_time"`

	Coords []Coords `json:"coords"`

	Direction string `json:"direction,omitempty"`

	Road string `json:"road,omitempty"`

	Turn string `json:"turn,omitempty"`

	Line string `json:"line,omitempty"`

	DepartureStation string `json:"departure_station,omitempty"`

	ArrivalStation string `json:"arrival_station,omitempty"`

	DepartsAt string `json:"departs_at,omitempty"`

	ArrivesAt string `json:"arrives_at,omitempty"`

	NumStops int32 `json:"num_stops,omitempty"`
}
