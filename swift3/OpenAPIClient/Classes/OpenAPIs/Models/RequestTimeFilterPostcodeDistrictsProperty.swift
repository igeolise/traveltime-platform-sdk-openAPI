//
// RequestTimeFilterPostcodeDistrictsProperty.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public enum RequestTimeFilterPostcodeDistrictsProperty: String {
    case travelTimeReachable = "travel_time_reachable"
    case travelTimeAll = "travel_time_all"
    case coverage = "coverage"

    func encodeToJSON() -> Any { return self.rawValue }
}
