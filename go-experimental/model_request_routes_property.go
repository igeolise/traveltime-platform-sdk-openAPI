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

// RequestRoutesProperty the model 'RequestRoutesProperty'
type RequestRoutesProperty string

// List of RequestRoutesProperty
const (
	TRAVEL_TIME RequestRoutesProperty = "travel_time"
	DISTANCE RequestRoutesProperty = "distance"
	FARES RequestRoutesProperty = "fares"
	ROUTE RequestRoutesProperty = "route"
)

func (v *RequestRoutesProperty) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := RequestRoutesProperty(value)
	for _, existing := range []RequestRoutesProperty{ "travel_time", "distance", "fares", "route",   } {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid RequestRoutesProperty", value)
}

// Ptr returns reference to RequestRoutesProperty value
func (v RequestRoutesProperty) Ptr() *RequestRoutesProperty {
	return &v
}

type NullableRequestRoutesProperty struct {
	value *RequestRoutesProperty
	isSet bool
}

func (v NullableRequestRoutesProperty) Get() *RequestRoutesProperty {
	return v.value
}

func (v *NullableRequestRoutesProperty) Set(val *RequestRoutesProperty) {
	v.value = val
	v.isSet = true
}

func (v NullableRequestRoutesProperty) IsSet() bool {
	return v.isSet
}

func (v *NullableRequestRoutesProperty) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRequestRoutesProperty(val *RequestRoutesProperty) *NullableRequestRoutesProperty {
	return &NullableRequestRoutesProperty{value: val, isSet: true}
}

func (v NullableRequestRoutesProperty) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRequestRoutesProperty) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

