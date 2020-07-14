//
// RequestTimeFilterPostcodes.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestTimeFilterPostcodes: Codable { 


    public var departureSearches: [RequestTimeFilterPostcodesDepartureSearch]?
    public var arrivalSearches: [RequestTimeFilterPostcodesArrivalSearch]?

    public init(departureSearches: [RequestTimeFilterPostcodesDepartureSearch]? = nil, arrivalSearches: [RequestTimeFilterPostcodesArrivalSearch]? = nil) {
        self.departureSearches = departureSearches
        self.arrivalSearches = arrivalSearches
    }

    public enum CodingKeys: String, CodingKey, CaseIterable { 
        case departureSearches = "departure_searches"
        case arrivalSearches = "arrival_searches"
    }

}