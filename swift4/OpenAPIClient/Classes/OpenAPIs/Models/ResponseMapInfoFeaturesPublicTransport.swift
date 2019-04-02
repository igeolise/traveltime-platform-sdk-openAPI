//
// ResponseMapInfoFeaturesPublicTransport.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ResponseMapInfoFeaturesPublicTransport: Codable {

    public var dateStart: Date
    public var dateEnd: Date

    public init(dateStart: Date, dateEnd: Date) {
        self.dateStart = dateStart
        self.dateEnd = dateEnd
    }

    public enum CodingKeys: String, CodingKey { 
        case dateStart = "date_start"
        case dateEnd = "date_end"
    }


}

