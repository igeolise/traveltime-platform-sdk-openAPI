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
	"fmt"
)

// RequestTimeFilterPostcodesProperty the model 'RequestTimeFilterPostcodesProperty'
type RequestTimeFilterPostcodesProperty string

// List of RequestTimeFilterPostcodesProperty
const (
	TRAVEL_TIME RequestTimeFilterPostcodesProperty = "travel_time"
	DISTANCE RequestTimeFilterPostcodesProperty = "distance"
)

func (v *RequestTimeFilterPostcodesProperty) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := RequestTimeFilterPostcodesProperty(value)
	for _, existing := range []RequestTimeFilterPostcodesProperty{ "travel_time", "distance",   } {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid RequestTimeFilterPostcodesProperty", value)
}

// Ptr returns reference to RequestTimeFilterPostcodesProperty value
func (v RequestTimeFilterPostcodesProperty) Ptr() *RequestTimeFilterPostcodesProperty {
	return &v
}

type NullableRequestTimeFilterPostcodesProperty struct {
	value *RequestTimeFilterPostcodesProperty
	isSet bool
}

func (v NullableRequestTimeFilterPostcodesProperty) Get() *RequestTimeFilterPostcodesProperty {
	return v.value
}

func (v *NullableRequestTimeFilterPostcodesProperty) Set(val *RequestTimeFilterPostcodesProperty) {
	v.value = val
	v.isSet = true
}

func (v NullableRequestTimeFilterPostcodesProperty) IsSet() bool {
	return v.isSet
}

func (v *NullableRequestTimeFilterPostcodesProperty) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRequestTimeFilterPostcodesProperty(val *RequestTimeFilterPostcodesProperty) *NullableRequestTimeFilterPostcodesProperty {
	return &NullableRequestTimeFilterPostcodesProperty{value: val, isSet: true}
}

func (v NullableRequestTimeFilterPostcodesProperty) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRequestTimeFilterPostcodesProperty) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
