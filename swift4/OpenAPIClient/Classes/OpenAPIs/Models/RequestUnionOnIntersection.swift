//
// RequestUnionOnIntersection.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct RequestUnionOnIntersection: Codable {

    public var _id: String
    public var searchIds: [String]

    public init(_id: String, searchIds: [String]) {
        self._id = _id
        self.searchIds = searchIds
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case searchIds = "search_ids"
    }


}

