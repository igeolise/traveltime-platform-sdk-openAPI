/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"time"
)

// ResponseRoute struct for ResponseRoute
type ResponseRoute struct {
	DepartureTime time.Time `json:"departure_time"`
	ArrivalTime time.Time `json:"arrival_time"`
	Parts []ResponseRoutePart `json:"parts"`
}

// NewResponseRoute instantiates a new ResponseRoute object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseRoute(departureTime time.Time, arrivalTime time.Time, parts []ResponseRoutePart, ) *ResponseRoute {
	this := ResponseRoute{}
	this.DepartureTime = departureTime
	this.ArrivalTime = arrivalTime
	this.Parts = parts
	return &this
}

// NewResponseRouteWithDefaults instantiates a new ResponseRoute object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseRouteWithDefaults() *ResponseRoute {
	this := ResponseRoute{}
	return &this
}

// GetDepartureTime returns the DepartureTime field value
func (o *ResponseRoute) GetDepartureTime() time.Time {
	if o == nil  {
		var ret time.Time
		return ret
	}

	return o.DepartureTime
}

// GetDepartureTimeOk returns a tuple with the DepartureTime field value
// and a boolean to check if the value has been set.
func (o *ResponseRoute) GetDepartureTimeOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DepartureTime, true
}

// SetDepartureTime sets field value
func (o *ResponseRoute) SetDepartureTime(v time.Time) {
	o.DepartureTime = v
}

// GetArrivalTime returns the ArrivalTime field value
func (o *ResponseRoute) GetArrivalTime() time.Time {
	if o == nil  {
		var ret time.Time
		return ret
	}

	return o.ArrivalTime
}

// GetArrivalTimeOk returns a tuple with the ArrivalTime field value
// and a boolean to check if the value has been set.
func (o *ResponseRoute) GetArrivalTimeOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.ArrivalTime, true
}

// SetArrivalTime sets field value
func (o *ResponseRoute) SetArrivalTime(v time.Time) {
	o.ArrivalTime = v
}

// GetParts returns the Parts field value
func (o *ResponseRoute) GetParts() []ResponseRoutePart {
	if o == nil  {
		var ret []ResponseRoutePart
		return ret
	}

	return o.Parts
}

// GetPartsOk returns a tuple with the Parts field value
// and a boolean to check if the value has been set.
func (o *ResponseRoute) GetPartsOk() (*[]ResponseRoutePart, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Parts, true
}

// SetParts sets field value
func (o *ResponseRoute) SetParts(v []ResponseRoutePart) {
	o.Parts = v
}

func (o ResponseRoute) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["departure_time"] = o.DepartureTime
	}
	if true {
		toSerialize["arrival_time"] = o.ArrivalTime
	}
	if true {
		toSerialize["parts"] = o.Parts
	}
	return json.Marshal(toSerialize)
}

type NullableResponseRoute struct {
	value *ResponseRoute
	isSet bool
}

func (v NullableResponseRoute) Get() *ResponseRoute {
	return v.value
}

func (v *NullableResponseRoute) Set(val *ResponseRoute) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseRoute) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseRoute) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseRoute(val *ResponseRoute) *NullableResponseRoute {
	return &NullableResponseRoute{value: val, isSet: true}
}

func (v NullableResponseRoute) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseRoute) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

