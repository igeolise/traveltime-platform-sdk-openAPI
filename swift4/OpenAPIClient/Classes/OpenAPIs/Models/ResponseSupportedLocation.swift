//
// ResponseSupportedLocation.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ResponseSupportedLocation: Codable {

    public var _id: String
    public var mapName: String

    public init(_id: String, mapName: String) {
        self._id = _id
        self.mapName = mapName
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case mapName = "map_name"
    }


}

