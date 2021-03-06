//
// RequestTimeMap.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestTimeMap: Codable { 


    public var departureSearches: [RequestTimeMapDepartureSearch]?
    public var arrivalSearches: [RequestTimeMapArrivalSearch]?
    public var unions: [RequestUnionOnIntersection]?
    public var intersections: [RequestUnionOnIntersection]?

    public init(departureSearches: [RequestTimeMapDepartureSearch]? = nil, arrivalSearches: [RequestTimeMapArrivalSearch]? = nil, unions: [RequestUnionOnIntersection]? = nil, intersections: [RequestUnionOnIntersection]? = nil) {
        self.departureSearches = departureSearches
        self.arrivalSearches = arrivalSearches
        self.unions = unions
        self.intersections = intersections
    }

    public enum CodingKeys: String, CodingKey, CaseIterable { 
        case departureSearches = "departure_searches"
        case arrivalSearches = "arrival_searches"
        case unions
        case intersections
    }

}
