//
// RequestRangeFull.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class RequestRangeFull: JSONEncodable {

    public var enabled: Bool?
    public var maxResults: Int32?
    public var width: Int32?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["enabled"] = self.enabled
        nillableDictionary["max_results"] = self.maxResults?.encodeToJSON()
        nillableDictionary["width"] = self.width?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

