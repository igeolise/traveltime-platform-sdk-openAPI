/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package traveltimeplatform
type ResponseTransportationMode string

// List of ResponseTransportationMode
const (
	CAR ResponseTransportationMode = "car"
	PARKING ResponseTransportationMode = "parking"
	BOARDING ResponseTransportationMode = "boarding"
	WALK ResponseTransportationMode = "walk"
	BIKE ResponseTransportationMode = "bike"
	TRAIN ResponseTransportationMode = "train"
	RAIL_NATIONAL ResponseTransportationMode = "rail_national"
	RAIL_OVERGROUND ResponseTransportationMode = "rail_overground"
	RAIL_UNDERGROUND ResponseTransportationMode = "rail_underground"
	RAIL_DLR ResponseTransportationMode = "rail_dlr"
	BUS ResponseTransportationMode = "bus"
	CABLE_CAR ResponseTransportationMode = "cable_car"
	PLANE ResponseTransportationMode = "plane"
	FERRY ResponseTransportationMode = "ferry"
	COACH ResponseTransportationMode = "coach"
)