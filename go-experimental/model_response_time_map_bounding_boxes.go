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

// ResponseTimeMapBoundingBoxes struct for ResponseTimeMapBoundingBoxes
type ResponseTimeMapBoundingBoxes struct {
	Results []ResponseTimeMapBoundingBoxesResult `json:"results"`
}

// NewResponseTimeMapBoundingBoxes instantiates a new ResponseTimeMapBoundingBoxes object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseTimeMapBoundingBoxes(results []ResponseTimeMapBoundingBoxesResult, ) *ResponseTimeMapBoundingBoxes {
	this := ResponseTimeMapBoundingBoxes{}
	this.Results = results
	return &this
}

// NewResponseTimeMapBoundingBoxesWithDefaults instantiates a new ResponseTimeMapBoundingBoxes object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseTimeMapBoundingBoxesWithDefaults() *ResponseTimeMapBoundingBoxes {
	this := ResponseTimeMapBoundingBoxes{}
	return &this
}

// GetResults returns the Results field value
func (o *ResponseTimeMapBoundingBoxes) GetResults() []ResponseTimeMapBoundingBoxesResult {
	if o == nil  {
		var ret []ResponseTimeMapBoundingBoxesResult
		return ret
	}

	return o.Results
}

// GetResultsOk returns a tuple with the Results field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapBoundingBoxes) GetResultsOk() (*[]ResponseTimeMapBoundingBoxesResult, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Results, true
}

// SetResults sets field value
func (o *ResponseTimeMapBoundingBoxes) SetResults(v []ResponseTimeMapBoundingBoxesResult) {
	o.Results = v
}

func (o ResponseTimeMapBoundingBoxes) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["results"] = o.Results
	}
	return json.Marshal(toSerialize)
}

type NullableResponseTimeMapBoundingBoxes struct {
	value *ResponseTimeMapBoundingBoxes
	isSet bool
}

func (v NullableResponseTimeMapBoundingBoxes) Get() *ResponseTimeMapBoundingBoxes {
	return v.value
}

func (v *NullableResponseTimeMapBoundingBoxes) Set(val *ResponseTimeMapBoundingBoxes) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseTimeMapBoundingBoxes) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseTimeMapBoundingBoxes) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseTimeMapBoundingBoxes(val *ResponseTimeMapBoundingBoxes) *NullableResponseTimeMapBoundingBoxes {
	return &NullableResponseTimeMapBoundingBoxes{value: val, isSet: true}
}

func (v NullableResponseTimeMapBoundingBoxes) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseTimeMapBoundingBoxes) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


