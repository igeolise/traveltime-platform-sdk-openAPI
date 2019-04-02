//
// ResponseTimeFilterPostcodeDistricts.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ResponseTimeFilterPostcodeDistricts: JSONEncodable {
    public var results: [ResponseTimeFilterPostcodeDistrictsResult]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["results"] = self.results?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
