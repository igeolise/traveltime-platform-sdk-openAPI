//
// ResponseMapInfoMap.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ResponseMapInfoMap: JSONEncodable {

    public var name: String?
    public var features: ResponseMapInfoFeatures?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["features"] = self.features?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

