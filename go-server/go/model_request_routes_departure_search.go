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

type RequestRoutesDepartureSearch struct {

	Id string `json:"id"`

	DepartureLocationId string `json:"departure_location_id"`

	ArrivalLocationIds []string `json:"arrival_location_ids"`

	Transportation *RequestTransportation `json:"transportation"`

	DepartureTime time.Time `json:"departure_time"`

	Properties []RequestRoutesProperty `json:"properties"`

	Range *RequestRangeFull `json:"range,omitempty"`
}
