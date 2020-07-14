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

// ResponseTimeMapWktResult struct for ResponseTimeMapWktResult
type ResponseTimeMapWktResult struct {
	SearchId string `json:"search_id"`
	Shape string `json:"shape"`
	Properties ResponseTimeMapProperties `json:"properties"`
}

// NewResponseTimeMapWktResult instantiates a new ResponseTimeMapWktResult object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseTimeMapWktResult(searchId string, shape string, properties ResponseTimeMapProperties, ) *ResponseTimeMapWktResult {
	this := ResponseTimeMapWktResult{}
	this.SearchId = searchId
	this.Shape = shape
	this.Properties = properties
	return &this
}

// NewResponseTimeMapWktResultWithDefaults instantiates a new ResponseTimeMapWktResult object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseTimeMapWktResultWithDefaults() *ResponseTimeMapWktResult {
	this := ResponseTimeMapWktResult{}
	return &this
}

// GetSearchId returns the SearchId field value
func (o *ResponseTimeMapWktResult) GetSearchId() string {
	if o == nil  {
		var ret string
		return ret
	}

	return o.SearchId
}

// GetSearchIdOk returns a tuple with the SearchId field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapWktResult) GetSearchIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.SearchId, true
}

// SetSearchId sets field value
func (o *ResponseTimeMapWktResult) SetSearchId(v string) {
	o.SearchId = v
}

// GetShape returns the Shape field value
func (o *ResponseTimeMapWktResult) GetShape() string {
	if o == nil  {
		var ret string
		return ret
	}

	return o.Shape
}

// GetShapeOk returns a tuple with the Shape field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapWktResult) GetShapeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Shape, true
}

// SetShape sets field value
func (o *ResponseTimeMapWktResult) SetShape(v string) {
	o.Shape = v
}

// GetProperties returns the Properties field value
func (o *ResponseTimeMapWktResult) GetProperties() ResponseTimeMapProperties {
	if o == nil  {
		var ret ResponseTimeMapProperties
		return ret
	}

	return o.Properties
}

// GetPropertiesOk returns a tuple with the Properties field value
// and a boolean to check if the value has been set.
func (o *ResponseTimeMapWktResult) GetPropertiesOk() (*ResponseTimeMapProperties, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Properties, true
}

// SetProperties sets field value
func (o *ResponseTimeMapWktResult) SetProperties(v ResponseTimeMapProperties) {
	o.Properties = v
}

func (o ResponseTimeMapWktResult) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["search_id"] = o.SearchId
	}
	if true {
		toSerialize["shape"] = o.Shape
	}
	if true {
		toSerialize["properties"] = o.Properties
	}
	return json.Marshal(toSerialize)
}

type NullableResponseTimeMapWktResult struct {
	value *ResponseTimeMapWktResult
	isSet bool
}

func (v NullableResponseTimeMapWktResult) Get() *ResponseTimeMapWktResult {
	return v.value
}

func (v *NullableResponseTimeMapWktResult) Set(val *ResponseTimeMapWktResult) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseTimeMapWktResult) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseTimeMapWktResult) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseTimeMapWktResult(val *ResponseTimeMapWktResult) *NullableResponseTimeMapWktResult {
	return &NullableResponseTimeMapWktResult{value: val, isSet: true}
}

func (v NullableResponseTimeMapWktResult) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseTimeMapWktResult) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

