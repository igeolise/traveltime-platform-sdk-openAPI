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

// RequestTimeMap struct for RequestTimeMap
type RequestTimeMap struct {
	DepartureSearches *[]RequestTimeMapDepartureSearch `json:"departure_searches,omitempty"`
	ArrivalSearches *[]RequestTimeMapArrivalSearch `json:"arrival_searches,omitempty"`
	Unions *[]RequestUnionOnIntersection `json:"unions,omitempty"`
	Intersections *[]RequestUnionOnIntersection `json:"intersections,omitempty"`
}

// NewRequestTimeMap instantiates a new RequestTimeMap object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRequestTimeMap() *RequestTimeMap {
	this := RequestTimeMap{}
	return &this
}

// NewRequestTimeMapWithDefaults instantiates a new RequestTimeMap object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRequestTimeMapWithDefaults() *RequestTimeMap {
	this := RequestTimeMap{}
	return &this
}

// GetDepartureSearches returns the DepartureSearches field value if set, zero value otherwise.
func (o *RequestTimeMap) GetDepartureSearches() []RequestTimeMapDepartureSearch {
	if o == nil || o.DepartureSearches == nil {
		var ret []RequestTimeMapDepartureSearch
		return ret
	}
	return *o.DepartureSearches
}

// GetDepartureSearchesOk returns a tuple with the DepartureSearches field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RequestTimeMap) GetDepartureSearchesOk() (*[]RequestTimeMapDepartureSearch, bool) {
	if o == nil || o.DepartureSearches == nil {
		return nil, false
	}
	return o.DepartureSearches, true
}

// HasDepartureSearches returns a boolean if a field has been set.
func (o *RequestTimeMap) HasDepartureSearches() bool {
	if o != nil && o.DepartureSearches != nil {
		return true
	}

	return false
}

// SetDepartureSearches gets a reference to the given []RequestTimeMapDepartureSearch and assigns it to the DepartureSearches field.
func (o *RequestTimeMap) SetDepartureSearches(v []RequestTimeMapDepartureSearch) {
	o.DepartureSearches = &v
}

// GetArrivalSearches returns the ArrivalSearches field value if set, zero value otherwise.
func (o *RequestTimeMap) GetArrivalSearches() []RequestTimeMapArrivalSearch {
	if o == nil || o.ArrivalSearches == nil {
		var ret []RequestTimeMapArrivalSearch
		return ret
	}
	return *o.ArrivalSearches
}

// GetArrivalSearchesOk returns a tuple with the ArrivalSearches field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RequestTimeMap) GetArrivalSearchesOk() (*[]RequestTimeMapArrivalSearch, bool) {
	if o == nil || o.ArrivalSearches == nil {
		return nil, false
	}
	return o.ArrivalSearches, true
}

// HasArrivalSearches returns a boolean if a field has been set.
func (o *RequestTimeMap) HasArrivalSearches() bool {
	if o != nil && o.ArrivalSearches != nil {
		return true
	}

	return false
}

// SetArrivalSearches gets a reference to the given []RequestTimeMapArrivalSearch and assigns it to the ArrivalSearches field.
func (o *RequestTimeMap) SetArrivalSearches(v []RequestTimeMapArrivalSearch) {
	o.ArrivalSearches = &v
}

// GetUnions returns the Unions field value if set, zero value otherwise.
func (o *RequestTimeMap) GetUnions() []RequestUnionOnIntersection {
	if o == nil || o.Unions == nil {
		var ret []RequestUnionOnIntersection
		return ret
	}
	return *o.Unions
}

// GetUnionsOk returns a tuple with the Unions field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RequestTimeMap) GetUnionsOk() (*[]RequestUnionOnIntersection, bool) {
	if o == nil || o.Unions == nil {
		return nil, false
	}
	return o.Unions, true
}

// HasUnions returns a boolean if a field has been set.
func (o *RequestTimeMap) HasUnions() bool {
	if o != nil && o.Unions != nil {
		return true
	}

	return false
}

// SetUnions gets a reference to the given []RequestUnionOnIntersection and assigns it to the Unions field.
func (o *RequestTimeMap) SetUnions(v []RequestUnionOnIntersection) {
	o.Unions = &v
}

// GetIntersections returns the Intersections field value if set, zero value otherwise.
func (o *RequestTimeMap) GetIntersections() []RequestUnionOnIntersection {
	if o == nil || o.Intersections == nil {
		var ret []RequestUnionOnIntersection
		return ret
	}
	return *o.Intersections
}

// GetIntersectionsOk returns a tuple with the Intersections field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RequestTimeMap) GetIntersectionsOk() (*[]RequestUnionOnIntersection, bool) {
	if o == nil || o.Intersections == nil {
		return nil, false
	}
	return o.Intersections, true
}

// HasIntersections returns a boolean if a field has been set.
func (o *RequestTimeMap) HasIntersections() bool {
	if o != nil && o.Intersections != nil {
		return true
	}

	return false
}

// SetIntersections gets a reference to the given []RequestUnionOnIntersection and assigns it to the Intersections field.
func (o *RequestTimeMap) SetIntersections(v []RequestUnionOnIntersection) {
	o.Intersections = &v
}

func (o RequestTimeMap) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.DepartureSearches != nil {
		toSerialize["departure_searches"] = o.DepartureSearches
	}
	if o.ArrivalSearches != nil {
		toSerialize["arrival_searches"] = o.ArrivalSearches
	}
	if o.Unions != nil {
		toSerialize["unions"] = o.Unions
	}
	if o.Intersections != nil {
		toSerialize["intersections"] = o.Intersections
	}
	return json.Marshal(toSerialize)
}

type NullableRequestTimeMap struct {
	value *RequestTimeMap
	isSet bool
}

func (v NullableRequestTimeMap) Get() *RequestTimeMap {
	return v.value
}

func (v *NullableRequestTimeMap) Set(val *RequestTimeMap) {
	v.value = val
	v.isSet = true
}

func (v NullableRequestTimeMap) IsSet() bool {
	return v.isSet
}

func (v *NullableRequestTimeMap) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRequestTimeMap(val *RequestTimeMap) *NullableRequestTimeMap {
	return &NullableRequestTimeMap{value: val, isSet: true}
}

func (v NullableRequestTimeMap) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRequestTimeMap) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


