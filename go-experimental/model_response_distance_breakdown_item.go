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
)

// ResponseDistanceBreakdownItem struct for ResponseDistanceBreakdownItem
type ResponseDistanceBreakdownItem struct {
	Mode ResponseTransportationMode `json:"mode"`
	Distance int32 `json:"distance"`
}

// NewResponseDistanceBreakdownItem instantiates a new ResponseDistanceBreakdownItem object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseDistanceBreakdownItem(mode ResponseTransportationMode, distance int32, ) *ResponseDistanceBreakdownItem {
	this := ResponseDistanceBreakdownItem{}
	this.Mode = mode
	this.Distance = distance
	return &this
}

// NewResponseDistanceBreakdownItemWithDefaults instantiates a new ResponseDistanceBreakdownItem object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseDistanceBreakdownItemWithDefaults() *ResponseDistanceBreakdownItem {
	this := ResponseDistanceBreakdownItem{}
	return &this
}

// GetMode returns the Mode field value
func (o *ResponseDistanceBreakdownItem) GetMode() ResponseTransportationMode {
	if o == nil  {
		var ret ResponseTransportationMode
		return ret
	}

	return o.Mode
}

// GetModeOk returns a tuple with the Mode field value
// and a boolean to check if the value has been set.
func (o *ResponseDistanceBreakdownItem) GetModeOk() (*ResponseTransportationMode, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Mode, true
}

// SetMode sets field value
func (o *ResponseDistanceBreakdownItem) SetMode(v ResponseTransportationMode) {
	o.Mode = v
}

// GetDistance returns the Distance field value
func (o *ResponseDistanceBreakdownItem) GetDistance() int32 {
	if o == nil  {
		var ret int32
		return ret
	}

	return o.Distance
}

// GetDistanceOk returns a tuple with the Distance field value
// and a boolean to check if the value has been set.
func (o *ResponseDistanceBreakdownItem) GetDistanceOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Distance, true
}

// SetDistance sets field value
func (o *ResponseDistanceBreakdownItem) SetDistance(v int32) {
	o.Distance = v
}

func (o ResponseDistanceBreakdownItem) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["mode"] = o.Mode
	}
	if true {
		toSerialize["distance"] = o.Distance
	}
	return json.Marshal(toSerialize)
}

type NullableResponseDistanceBreakdownItem struct {
	value *ResponseDistanceBreakdownItem
	isSet bool
}

func (v NullableResponseDistanceBreakdownItem) Get() *ResponseDistanceBreakdownItem {
	return v.value
}

func (v *NullableResponseDistanceBreakdownItem) Set(val *ResponseDistanceBreakdownItem) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseDistanceBreakdownItem) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseDistanceBreakdownItem) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseDistanceBreakdownItem(val *ResponseDistanceBreakdownItem) *NullableResponseDistanceBreakdownItem {
	return &NullableResponseDistanceBreakdownItem{value: val, isSet: true}
}

func (v NullableResponseDistanceBreakdownItem) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseDistanceBreakdownItem) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


