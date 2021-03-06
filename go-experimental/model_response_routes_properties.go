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

// ResponseRoutesProperties struct for ResponseRoutesProperties
type ResponseRoutesProperties struct {
	TravelTime *int32 `json:"travel_time,omitempty"`
	Distance *int32 `json:"distance,omitempty"`
	Fares *ResponseFares `json:"fares,omitempty"`
	Route *ResponseRoute `json:"route,omitempty"`
}

// NewResponseRoutesProperties instantiates a new ResponseRoutesProperties object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResponseRoutesProperties() *ResponseRoutesProperties {
	this := ResponseRoutesProperties{}
	return &this
}

// NewResponseRoutesPropertiesWithDefaults instantiates a new ResponseRoutesProperties object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResponseRoutesPropertiesWithDefaults() *ResponseRoutesProperties {
	this := ResponseRoutesProperties{}
	return &this
}

// GetTravelTime returns the TravelTime field value if set, zero value otherwise.
func (o *ResponseRoutesProperties) GetTravelTime() int32 {
	if o == nil || o.TravelTime == nil {
		var ret int32
		return ret
	}
	return *o.TravelTime
}

// GetTravelTimeOk returns a tuple with the TravelTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResponseRoutesProperties) GetTravelTimeOk() (*int32, bool) {
	if o == nil || o.TravelTime == nil {
		return nil, false
	}
	return o.TravelTime, true
}

// HasTravelTime returns a boolean if a field has been set.
func (o *ResponseRoutesProperties) HasTravelTime() bool {
	if o != nil && o.TravelTime != nil {
		return true
	}

	return false
}

// SetTravelTime gets a reference to the given int32 and assigns it to the TravelTime field.
func (o *ResponseRoutesProperties) SetTravelTime(v int32) {
	o.TravelTime = &v
}

// GetDistance returns the Distance field value if set, zero value otherwise.
func (o *ResponseRoutesProperties) GetDistance() int32 {
	if o == nil || o.Distance == nil {
		var ret int32
		return ret
	}
	return *o.Distance
}

// GetDistanceOk returns a tuple with the Distance field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResponseRoutesProperties) GetDistanceOk() (*int32, bool) {
	if o == nil || o.Distance == nil {
		return nil, false
	}
	return o.Distance, true
}

// HasDistance returns a boolean if a field has been set.
func (o *ResponseRoutesProperties) HasDistance() bool {
	if o != nil && o.Distance != nil {
		return true
	}

	return false
}

// SetDistance gets a reference to the given int32 and assigns it to the Distance field.
func (o *ResponseRoutesProperties) SetDistance(v int32) {
	o.Distance = &v
}

// GetFares returns the Fares field value if set, zero value otherwise.
func (o *ResponseRoutesProperties) GetFares() ResponseFares {
	if o == nil || o.Fares == nil {
		var ret ResponseFares
		return ret
	}
	return *o.Fares
}

// GetFaresOk returns a tuple with the Fares field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResponseRoutesProperties) GetFaresOk() (*ResponseFares, bool) {
	if o == nil || o.Fares == nil {
		return nil, false
	}
	return o.Fares, true
}

// HasFares returns a boolean if a field has been set.
func (o *ResponseRoutesProperties) HasFares() bool {
	if o != nil && o.Fares != nil {
		return true
	}

	return false
}

// SetFares gets a reference to the given ResponseFares and assigns it to the Fares field.
func (o *ResponseRoutesProperties) SetFares(v ResponseFares) {
	o.Fares = &v
}

// GetRoute returns the Route field value if set, zero value otherwise.
func (o *ResponseRoutesProperties) GetRoute() ResponseRoute {
	if o == nil || o.Route == nil {
		var ret ResponseRoute
		return ret
	}
	return *o.Route
}

// GetRouteOk returns a tuple with the Route field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResponseRoutesProperties) GetRouteOk() (*ResponseRoute, bool) {
	if o == nil || o.Route == nil {
		return nil, false
	}
	return o.Route, true
}

// HasRoute returns a boolean if a field has been set.
func (o *ResponseRoutesProperties) HasRoute() bool {
	if o != nil && o.Route != nil {
		return true
	}

	return false
}

// SetRoute gets a reference to the given ResponseRoute and assigns it to the Route field.
func (o *ResponseRoutesProperties) SetRoute(v ResponseRoute) {
	o.Route = &v
}

func (o ResponseRoutesProperties) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.TravelTime != nil {
		toSerialize["travel_time"] = o.TravelTime
	}
	if o.Distance != nil {
		toSerialize["distance"] = o.Distance
	}
	if o.Fares != nil {
		toSerialize["fares"] = o.Fares
	}
	if o.Route != nil {
		toSerialize["route"] = o.Route
	}
	return json.Marshal(toSerialize)
}

type NullableResponseRoutesProperties struct {
	value *ResponseRoutesProperties
	isSet bool
}

func (v NullableResponseRoutesProperties) Get() *ResponseRoutesProperties {
	return v.value
}

func (v *NullableResponseRoutesProperties) Set(val *ResponseRoutesProperties) {
	v.value = val
	v.isSet = true
}

func (v NullableResponseRoutesProperties) IsSet() bool {
	return v.isSet
}

func (v *NullableResponseRoutesProperties) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResponseRoutesProperties(val *ResponseRoutesProperties) *NullableResponseRoutesProperties {
	return &NullableResponseRoutesProperties{value: val, isSet: true}
}

func (v NullableResponseRoutesProperties) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResponseRoutesProperties) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


