//
// RequestTimeFilterPostcodesProperty.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public enum RequestTimeFilterPostcodesProperty: String {
    case travelTime = "travel_time"
    case distance = "distance"

    func encodeToJSON() -> Any { return self.rawValue }
}
