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

// ResponseMapInfoFeaturesPublicTransport struct for ResponseMapInfoFeaturesPublicTransport
type ResponseMapInfoFeaturesPublicTransport struct {
	DateStart time.Time `json:"date_start"`
	DateEnd time.Time `json:"date_end"`
}

// NewResponseMapInfoFeaturesPublicTransport instantiates a new ResponseMapInfoFeaturesPublicTransport object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseMapInfoFeaturesPublicTransport(dateStart time.Time, dateEnd time.Time, ) *ResponseMapInfoFeaturesPublicTransport {
	this := ResponseMapInfoFeaturesPublicTransport{}
	this.DateStart = dateStart
	this.DateEnd = dateEnd
	return &this
}

// NewResponseMapInfoFeaturesPublicTransportWithDefaults instantiates a new ResponseMapInfoFeaturesPublicTransport object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseMapInfoFeaturesPublicTransportWithDefaults() *ResponseMapInfoFeaturesPublicTransport {
	this := ResponseMapInfoFeaturesPublicTransport{}
	return &this
}

// GetDateStart returns the DateStart field value
func (o *ResponseMapInfoFeaturesPublicTransport) GetDateStart() time.Time {
	if o == nil  {
		var ret time.Time
		return ret
	}

	return o.DateStart
}

// GetDateStartOk returns a tuple with the DateStart field value
// and a boolean to check if the value has been set.
func (o *ResponseMapInfoFeaturesPublicTransport) GetDateStartOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DateStart, true
}

// SetDateStart sets field value
func (o *ResponseMapInfoFeaturesPublicTransport) SetDateStart(v time.Time) {
	o.DateStart = v
}

// GetDateEnd returns the DateEnd field value
func (o *ResponseMapInfoFeaturesPublicTransport) GetDateEnd() time.Time {
	if o == nil  {
		var ret time.Time
		return ret
	}

	return o.DateEnd
}

// GetDateEndOk returns a tuple with the DateEnd field value
// and a boolean to check if the value has been set.
func (o *ResponseMapInfoFeaturesPublicTransport) GetDateEndOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DateEnd, true
}

// SetDateEnd sets field value
func (o *ResponseMapInfoFeaturesPublicTransport) SetDateEnd(v time.Time) {
	o.DateEnd = v
}

func (o ResponseMapInfoFeaturesPublicTransport) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["date_start"] = o.DateStart
	}
	if true {
		toSerialize["date_end"] = o.DateEnd
	}
	return json.Marshal(toSerialize)
}

type NullableResponseMapInfoFeaturesPublicTransport struct {
	value *ResponseMapInfoFeaturesPublicTransport
	isSet bool
}

func (v NullableResponseMapInfoFeaturesPublicTransport) Get() *ResponseMapInfoFeaturesPublicTransport {
	return v.value
}

func (v *NullableResponseMapInfoFeaturesPublicTransport) Set(val *ResponseMapInfoFeaturesPublicTransport) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseMapInfoFeaturesPublicTransport) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseMapInfoFeaturesPublicTransport) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseMapInfoFeaturesPublicTransport(val *ResponseMapInfoFeaturesPublicTransport) *NullableResponseMapInfoFeaturesPublicTransport {
	return &NullableResponseMapInfoFeaturesPublicTransport{value: val, isSet: true}
}

func (v NullableResponseMapInfoFeaturesPublicTransport) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseMapInfoFeaturesPublicTransport) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


