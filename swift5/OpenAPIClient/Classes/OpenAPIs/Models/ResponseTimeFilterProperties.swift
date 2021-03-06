//
// ResponseTimeFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTimeFilterProperties: Codable { 


    public var travelTime: Int?
    public var distance: Int?
    public var distanceBreakdown: [ResponseDistanceBreakdownItem]?
    public var fares: ResponseFares?
    public var route: ResponseRoute?

    public init(travelTime: Int? = nil, distance: Int? = nil, distanceBreakdown: [ResponseDistanceBreakdownItem]? = nil, fares: ResponseFares? = nil, route: ResponseRoute? = nil) {
        self.travelTime = travelTime
        self.distance = distance
        self.distanceBreakdown = distanceBreakdown
        self.fares = fares
        self.route = route
    }

    public enum CodingKeys: String, CodingKey, CaseIterable { 
        case travelTime = "travel_time"
        case distance
        case distanceBreakdown = "distance_breakdown"
        case fares
        case route
    }

}
