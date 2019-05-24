//
// RequestTimeFilterPostcodeDistrictsDepartureSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct RequestTimeFilterPostcodeDistrictsDepartureSearch: Codable {

    public var id: String
    public var transportation: RequestTransportation
    public var travelTime: Int
    public var departureTime: Date
    public var reachablePostcodesThreshold: Double
    public var properties: [RequestTimeFilterPostcodeDistrictsProperty]
    public var range: RequestRangeFull?

    public init(id: String, transportation: RequestTransportation, travelTime: Int, departureTime: Date, reachablePostcodesThreshold: Double, properties: [RequestTimeFilterPostcodeDistrictsProperty], range: RequestRangeFull?) {
        self.id = id
        self.transportation = transportation
        self.travelTime = travelTime
        self.departureTime = departureTime
        self.reachablePostcodesThreshold = reachablePostcodesThreshold
        self.properties = properties
        self.range = range
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case transportation
        case travelTime = "travel_time"
        case departureTime = "departure_time"
        case reachablePostcodesThreshold = "reachable_postcodes_threshold"
        case properties
        case range
    }


}

