//
// RequestTimeFilterFastArrivalOneToManySearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestTimeFilterFastArrivalOneToManySearch: Codable { 


    public var id: String
    public var departureLocationId: String
    public var arrivalLocationIds: [String]
    public var transportation: RequestTransportationFast
    public var travelTime: Int
    public var arrivalTimePeriod: RequestArrivalTimePeriod
    public var properties: [RequestTimeFilterFastProperty]

    public init(id: String, departureLocationId: String, arrivalLocationIds: [String], transportation: RequestTransportationFast, travelTime: Int, arrivalTimePeriod: RequestArrivalTimePeriod, properties: [RequestTimeFilterFastProperty]) {
        self.id = id
        self.departureLocationId = departureLocationId
        self.arrivalLocationIds = arrivalLocationIds
        self.transportation = transportation
        self.travelTime = travelTime
        self.arrivalTimePeriod = arrivalTimePeriod
        self.properties = properties
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case departureLocationId = "departure_location_id"
        case arrivalLocationIds = "arrival_location_ids"
        case transportation
        case travelTime = "travel_time"
        case arrivalTimePeriod = "arrival_time_period"
        case properties
    }

}
