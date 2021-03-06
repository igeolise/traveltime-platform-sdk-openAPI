//
// ResponseTimeMapResult.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTimeMapResult: Codable { 


    public var searchId: String
    public var shapes: [ResponseShape]
    public var properties: ResponseTimeMapProperties

    public init(searchId: String, shapes: [ResponseShape], properties: ResponseTimeMapProperties) {
        self.searchId = searchId
        self.shapes = shapes
        self.properties = properties
    }

    public enum CodingKeys: String, CodingKey, CaseIterable { 
        case searchId = "search_id"
        case shapes
        case properties
    }

}
