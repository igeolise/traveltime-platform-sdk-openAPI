//
// RequestSupportedLocations.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestSupportedLocations: Codable { 


    public var locations: [RequestLocation]

    public init(locations: [RequestLocation]) {
        self.locations = locations
    }

}