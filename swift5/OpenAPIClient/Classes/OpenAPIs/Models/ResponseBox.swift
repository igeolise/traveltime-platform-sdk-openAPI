//
// ResponseBox.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseBox: Codable { 


    public var minLat: Double
    public var maxLat: Double
    public var minLng: Double
    public var maxLng: Double

    public init(minLat: Double, maxLat: Double, minLng: Double, maxLng: Double) {
        self.minLat = minLat
        self.maxLat = maxLat
        self.minLng = minLng
        self.maxLng = maxLng
    }

    public enum CodingKeys: String, CodingKey, CaseIterable { 
        case minLat = "min_lat"
        case maxLat = "max_lat"
        case minLng = "min_lng"
        case maxLng = "max_lng"
    }

}
