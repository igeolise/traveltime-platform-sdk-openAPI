//
// ResponseTimeFilterPostcodeDistrict.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTimeFilterPostcodeDistrict: Codable { 


    public var code: ModelString
    public var properties: ResponseTimeFilterPostcodeDistrictProperties

    public init(code: ModelString, properties: ResponseTimeFilterPostcodeDistrictProperties) {
        self.code = code
        self.properties = properties
    }

}
