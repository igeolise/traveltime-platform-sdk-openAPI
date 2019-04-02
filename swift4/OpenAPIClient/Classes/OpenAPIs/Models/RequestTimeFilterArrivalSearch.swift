//
// RequestTimeFilterArrivalSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct RequestTimeFilterArrivalSearch: Codable {

    public var _id: String
    public var departureLocationIds: [String]
    public var arrivalLocationId: String
    public var transportation: RequestTransportation
    public var travelTime: Int
    public var arrivalTime: Date
    public var properties: [RequestTimeFilterProperty]
    public var range: RequestRangeFull?

    public init(_id: String, departureLocationIds: [String], arrivalLocationId: String, transportation: RequestTransportation, travelTime: Int, arrivalTime: Date, properties: [RequestTimeFilterProperty], range: RequestRangeFull?) {
        self._id = _id
        self.departureLocationIds = departureLocationIds
        self.arrivalLocationId = arrivalLocationId
        self.transportation = transportation
        self.travelTime = travelTime
        self.arrivalTime = arrivalTime
        self.properties = properties
        self.range = range
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case departureLocationIds = "departure_location_ids"
        case arrivalLocationId = "arrival_location_id"
        case transportation
        case travelTime = "travel_time"
        case arrivalTime = "arrival_time"
        case properties
        case range
    }


}

