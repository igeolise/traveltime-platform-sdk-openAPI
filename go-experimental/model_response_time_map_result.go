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

// ResponseTimeMapResult struct for ResponseTimeMapResult
type ResponseTimeMapResult struct {
	SearchId string `json:"search_id"`
	Shapes []ResponseShape `json:"shapes"`
	Properties ResponseTimeMapProperties `json:"properties"`
}

// NewResponseTimeMapResult instantiates a new ResponseTimeMapResult object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseTimeMapResult(searchId string, shapes []ResponseShape, properties ResponseTimeMapProperties, ) *ResponseTimeMapResult {
	this := ResponseTimeMapResult{}
	this.SearchId = searchId
	this.Shapes = shapes
	this.Properties = properties
	return &this
}

// NewResponseTimeMapResultWithDefaults instantiates a new ResponseTimeMapResult object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseTimeMapResultWithDefaults() *ResponseTimeMapResult {
	this := ResponseTimeMapResult{}
	return &this
}

// GetSearchId returns the SearchId field value
func (o *ResponseTimeMapResult) GetSearchId() string {
	if o == nil  {
		var ret string
		return ret
	}

	return o.SearchId
}

// GetSearchIdOk returns a tuple with the SearchId field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapResult) GetSearchIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.SearchId, true
}

// SetSearchId sets field value
func (o *ResponseTimeMapResult) SetSearchId(v string) {
	o.SearchId = v
}

// GetShapes returns the Shapes field value
func (o *ResponseTimeMapResult) GetShapes() []ResponseShape {
	if o == nil  {
		var ret []ResponseShape
		return ret
	}

	return o.Shapes
}

// GetShapesOk returns a tuple with the Shapes field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapResult) GetShapesOk() (*[]ResponseShape, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Shapes, true
}

// SetShapes sets field value
func (o *ResponseTimeMapResult) SetShapes(v []ResponseShape) {
	o.Shapes = v
}

// GetProperties returns the Properties field value
func (o *ResponseTimeMapResult) GetProperties() ResponseTimeMapProperties {
	if o == nil  {
		var ret ResponseTimeMapProperties
		return ret
	}

	return o.Properties
}

// GetPropertiesOk returns a tuple with the Properties field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapResult) GetPropertiesOk() (*ResponseTimeMapProperties, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Properties, true
}

// SetProperties sets field value
func (o *ResponseTimeMapResult) SetProperties(v ResponseTimeMapProperties) {
	o.Properties = v
}

func (o ResponseTimeMapResult) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["search_id"] = o.SearchId
	}
	if true {
		toSerialize["shapes"] = o.Shapes
	}
	if true {
		toSerialize["properties"] = o.Properties
	}
	return json.Marshal(toSerialize)
}

type NullableResponseTimeMapResult struct {
	value *ResponseTimeMapResult
	isSet bool
}

func (v NullableResponseTimeMapResult) Get() *ResponseTimeMapResult {
	return v.value
}

func (v *NullableResponseTimeMapResult) Set(val *ResponseTimeMapResult) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseTimeMapResult) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseTimeMapResult) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseTimeMapResult(val *ResponseTimeMapResult) *NullableResponseTimeMapResult {
	return &NullableResponseTimeMapResult{value: val, isSet: true}
}

func (v NullableResponseTimeMapResult) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseTimeMapResult) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


