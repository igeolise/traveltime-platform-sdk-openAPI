//
// ResponseTimeFilterPostcodeSectorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTimeFilterPostcodeSectorProperties: Codable { 


    public var travelTimeReachable: ResponseTravelTimeStatistics?
    public var travelTimeAll: ResponseTravelTimeStatistics?
    public var coverage: Double?

    public init(travelTimeReachable: ResponseTravelTimeStatistics?, travelTimeAll: ResponseTravelTimeStatistics?, coverage: Double?) {
        self.travelTimeReachable = travelTimeReachable
        self.travelTimeAll = travelTimeAll
        self.coverage = coverage
    }

    public enum CodingKeys: String, CodingKey { 
        case travelTimeReachable = "travel_time_reachable"
        case travelTimeAll = "travel_time_all"
        case coverage
    }

}
