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

// RequestTimeFilterDepartureSearch struct for RequestTimeFilterDepartureSearch
type RequestTimeFilterDepartureSearch struct {
	Id string `json:"id"`
	DepartureLocationId string `json:"departure_location_id"`
	ArrivalLocationIds []string `json:"arrival_location_ids"`
	Transportation RequestTransportation `json:"transportation"`
	TravelTime int32 `json:"travel_time"`
	DepartureTime time.Time `json:"departure_time"`
	Properties []RequestTimeFilterProperty `json:"properties"`
	Range *RequestRangeFull `json:"range,omitempty"`
}

// NewRequestTimeFilterDepartureSearch instantiates a new RequestTimeFilterDepartureSearch object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRequestTimeFilterDepartureSearch(id string, departureLocationId string, arrivalLocationIds []string, transportation RequestTransportation, travelTime int32, departureTime time.Time, properties []RequestTimeFilterProperty, ) *RequestTimeFilterDepartureSearch {
	this := RequestTimeFilterDepartureSearch{}
	this.Id = id
	this.DepartureLocationId = departureLocationId
	this.ArrivalLocationIds = arrivalLocationIds
	this.Transportation = transportation
	this.TravelTime = travelTime
	this.DepartureTime = departureTime
	this.Properties = properties
	return &this
}

// NewRequestTimeFilterDepartureSearchWithDefaults instantiates a new RequestTimeFilterDepartureSearch object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRequestTimeFilterDepartureSearchWithDefaults() *RequestTimeFilterDepartureSearch {
	this := RequestTimeFilterDepartureSearch{}
	return &this
}

// GetId returns the Id field value
func (o *RequestTimeFilterDepartureSearch) GetId() string {
	if o == nil  {
		var ret string
		return ret
	}

	return o.Id
}

// GetIdOk returns a tuple with the Id field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Id, true
}

// SetId sets field value
func (o *RequestTimeFilterDepartureSearch) SetId(v string) {
	o.Id = v
}

// GetDepartureLocationId returns the DepartureLocationId field value
func (o *RequestTimeFilterDepartureSearch) GetDepartureLocationId() string {
	if o == nil  {
		var ret string
		return ret
	}

	return o.DepartureLocationId
}

// GetDepartureLocationIdOk returns a tuple with the DepartureLocationId field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetDepartureLocationIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DepartureLocationId, true
}

// SetDepartureLocationId sets field value
func (o *RequestTimeFilterDepartureSearch) SetDepartureLocationId(v string) {
	o.DepartureLocationId = v
}

// GetArrivalLocationIds returns the ArrivalLocationIds field value
func (o *RequestTimeFilterDepartureSearch) GetArrivalLocationIds() []string {
	if o == nil  {
		var ret []string
		return ret
	}

	return o.ArrivalLocationIds
}

// GetArrivalLocationIdsOk returns a tuple with the ArrivalLocationIds field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetArrivalLocationIdsOk() (*[]string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.ArrivalLocationIds, true
}

// SetArrivalLocationIds sets field value
func (o *RequestTimeFilterDepartureSearch) SetArrivalLocationIds(v []string) {
	o.ArrivalLocationIds = v
}

// GetTransportation returns the Transportation field value
func (o *RequestTimeFilterDepartureSearch) GetTransportation() RequestTransportation {
	if o == nil  {
		var ret RequestTransportation
		return ret
	}

	return o.Transportation
}

// GetTransportationOk returns a tuple with the Transportation field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetTransportationOk() (*RequestTransportation, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Transportation, true
}

// SetTransportation sets field value
func (o *RequestTimeFilterDepartureSearch) SetTransportation(v RequestTransportation) {
	o.Transportation = v
}

// GetTravelTime returns the TravelTime field value
func (o *RequestTimeFilterDepartureSearch) GetTravelTime() int32 {
	if o == nil  {
		var ret int32
		return ret
	}

	return o.TravelTime
}

// GetTravelTimeOk returns a tuple with the TravelTime field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetTravelTimeOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.TravelTime, true
}

// SetTravelTime sets field value
func (o *RequestTimeFilterDepartureSearch) SetTravelTime(v int32) {
	o.TravelTime = v
}

// GetDepartureTime returns the DepartureTime field value
func (o *RequestTimeFilterDepartureSearch) GetDepartureTime() time.Time {
	if o == nil  {
		var ret time.Time
		return ret
	}

	return o.DepartureTime
}

// GetDepartureTimeOk returns a tuple with the DepartureTime field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetDepartureTimeOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DepartureTime, true
}

// SetDepartureTime sets field value
func (o *RequestTimeFilterDepartureSearch) SetDepartureTime(v time.Time) {
	o.DepartureTime = v
}

// GetProperties returns the Properties field value
func (o *RequestTimeFilterDepartureSearch) GetProperties() []RequestTimeFilterProperty {
	if o == nil  {
		var ret []RequestTimeFilterProperty
		return ret
	}

	return o.Properties
}

// GetPropertiesOk returns a tuple with the Properties field value
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetPropertiesOk() (*[]RequestTimeFilterProperty, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Properties, true
}

// SetProperties sets field value
func (o *RequestTimeFilterDepartureSearch) SetProperties(v []RequestTimeFilterProperty) {
	o.Properties = v
}

// GetRange returns the Range field value if set, zero value otherwise.
func (o *RequestTimeFilterDepartureSearch) GetRange() RequestRangeFull {
	if o == nil || o.Range == nil {
		var ret RequestRangeFull
		return ret
	}
	return *o.Range
}

// GetRangeOk returns a tuple with the Range field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RequestTimeFilterDepartureSearch) GetRangeOk() (*RequestRangeFull, bool) {
	if o == nil || o.Range == nil {
		return nil, false
	}
	return o.Range, true
}

// HasRange returns a boolean if a field has been set.
func (o *RequestTimeFilterDepartureSearch) HasRange() bool {
	if o != nil && o.Range != nil {
		return true
	}

	return false
}

// SetRange gets a reference to the given RequestRangeFull and assigns it to the Range field.
func (o *RequestTimeFilterDepartureSearch) SetRange(v RequestRangeFull) {
	o.Range = &v
}

func (o RequestTimeFilterDepartureSearch) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["id"] = o.Id
	}
	if true {
		toSerialize["departure_location_id"] = o.DepartureLocationId
	}
	if true {
		toSerialize["arrival_location_ids"] = o.ArrivalLocationIds
	}
	if true {
		toSerialize["transportation"] = o.Transportation
	}
	if true {
		toSerialize["travel_time"] = o.TravelTime
	}
	if true {
		toSerialize["departure_time"] = o.DepartureTime
	}
	if true {
		toSerialize["properties"] = o.Properties
	}
	if o.Range != nil {
		toSerialize["range"] = o.Range
	}
	return json.Marshal(toSerialize)
}

type NullableRequestTimeFilterDepartureSearch struct {
	value *RequestTimeFilterDepartureSearch
	isSet bool
}

func (v NullableRequestTimeFilterDepartureSearch) Get() *RequestTimeFilterDepartureSearch {
	return v.value
}

func (v *NullableRequestTimeFilterDepartureSearch) Set(val *RequestTimeFilterDepartureSearch) {
	v.value = val
	v.isSet = true
}

func (v NullableRequestTimeFilterDepartureSearch) IsSet() bool {
	return v.isSet
}

func (v *NullableRequestTimeFilterDepartureSearch) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRequestTimeFilterDepartureSearch(val *RequestTimeFilterDepartureSearch) *NullableRequestTimeFilterDepartureSearch {
	return &NullableRequestTimeFilterDepartureSearch{value: val, isSet: true}
}

func (v NullableRequestTimeFilterDepartureSearch) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRequestTimeFilterDepartureSearch) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


