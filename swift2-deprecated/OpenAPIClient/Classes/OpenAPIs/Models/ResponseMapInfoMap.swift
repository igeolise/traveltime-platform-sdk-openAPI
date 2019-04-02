//
// ResponseMapInfoMap.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ResponseMapInfoMap: JSONEncodable {
    public var name: String?
    public var features: ResponseMapInfoFeatures?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["features"] = self.features?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
