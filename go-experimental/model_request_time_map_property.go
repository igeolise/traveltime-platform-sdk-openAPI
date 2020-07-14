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

// RequestTimeMapProperty the model 'RequestTimeMapProperty'
type RequestTimeMapProperty string

// List of RequestTimeMapProperty
const (
	IS_ONLY_WALKING RequestTimeMapProperty = "is_only_walking"
)

func (v *RequestTimeMapProperty) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := RequestTimeMapProperty(value)
	for _, existing := range []RequestTimeMapProperty{ "is_only_walking",   } {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid RequestTimeMapProperty", value)
}

// Ptr returns reference to RequestTimeMapProperty value
func (v RequestTimeMapProperty) Ptr() *RequestTimeMapProperty {
	return &v
}

type NullableRequestTimeMapProperty struct {
	value *RequestTimeMapProperty
	isSet bool
}

func (v NullableRequestTimeMapProperty) Get() *RequestTimeMapProperty {
	return v.value
}

func (v *NullableRequestTimeMapProperty) Set(val *RequestTimeMapProperty) {
	v.value = val
	v.isSet = true
}

func (v NullableRequestTimeMapProperty) IsSet() bool {
	return v.isSet
}

func (v *NullableRequestTimeMapProperty) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRequestTimeMapProperty(val *RequestTimeMapProperty) *NullableRequestTimeMapProperty {
	return &NullableRequestTimeMapProperty{value: val, isSet: true}
}

func (v NullableRequestTimeMapProperty) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRequestTimeMapProperty) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

