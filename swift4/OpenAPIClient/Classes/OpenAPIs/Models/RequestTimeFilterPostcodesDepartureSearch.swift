//
// RequestTimeFilterPostcodesDepartureSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestTimeFilterPostcodesDepartureSearch: Codable { 


    public var id: String
    public var transportation: RequestTransportation
    public var travelTime: Int
    public var departureTime: Date
    public var properties: [RequestTimeFilterPostcodesProperty]
    public var range: RequestRangeFull?

    public init(id: String, transportation: RequestTransportation, travelTime: Int, departureTime: Date, properties: [RequestTimeFilterPostcodesProperty], range: RequestRangeFull?) {
        self.id = id
        self.transportation = transportation
        self.travelTime = travelTime
        self.departureTime = departureTime
        self.properties = properties
        self.range = range
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case transportation
        case travelTime = "travel_time"
        case departureTime = "departure_time"
        case properties
        case range
    }

}
