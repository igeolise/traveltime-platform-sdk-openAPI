//
// ResponseTimeFilterLocation.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ResponseTimeFilterLocation: Codable {

    public var id: String
    public var properties: [ResponseTimeFilterProperties]

    public init(id: String, properties: [ResponseTimeFilterProperties]) {
        self.id = id
        self.properties = properties
    }


}

