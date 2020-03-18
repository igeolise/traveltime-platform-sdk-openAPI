//
// ResponseDistanceBreakdownItem.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseDistanceBreakdownItem: Codable { 


    public var mode: ResponseTransportationMode
    public var distance: Int

    public init(mode: ResponseTransportationMode, distance: Int) {
        self.mode = mode
        self.distance = distance
    }

}
