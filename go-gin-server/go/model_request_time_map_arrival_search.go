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

import (
	"time"
)

type RequestTimeMapArrivalSearch struct {

	Id string `json:"id"`

	Coords Coords `json:"coords"`

	Transportation RequestTransportation `json:"transportation"`

	TravelTime int32 `json:"travel_time"`

	ArrivalTime time.Time `json:"arrival_time"`

	Properties []RequestTimeMapProperty `json:"properties,omitempty"`

	Range RequestRangeNoMaxResults `json:"range,omitempty"`
}
