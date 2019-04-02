//
// RequestTimeMapArrivalSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct RequestTimeMapArrivalSearch: Codable {

    public var _id: String
    public var coords: Coords
    public var transportation: RequestTransportation
    public var travelTime: Int
    public var arrivalTime: Date
    public var properties: [RequestTimeMapProperty]?
    public var range: RequestRangeNoMaxResults?

    public init(_id: String, coords: Coords, transportation: RequestTransportation, travelTime: Int, arrivalTime: Date, properties: [RequestTimeMapProperty]?, range: RequestRangeNoMaxResults?) {
        self._id = _id
        self.coords = coords
        self.transportation = transportation
        self.travelTime = travelTime
        self.arrivalTime = arrivalTime
        self.properties = properties
        self.range = range
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case coords
        case transportation
        case travelTime = "travel_time"
        case arrivalTime = "arrival_time"
        case properties
        case range
    }


}

