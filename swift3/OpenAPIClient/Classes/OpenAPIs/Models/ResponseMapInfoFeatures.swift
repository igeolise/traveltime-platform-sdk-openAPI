//
// ResponseMapInfoFeatures.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ResponseMapInfoFeatures: JSONEncodable {

    public var publicTransport: ResponseMapInfoFeaturesPublicTransport?
    public var fares: Bool?
    public var postcodes: Bool?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["public_transport"] = self.publicTransport?.encodeToJSON()
        nillableDictionary["fares"] = self.fares
        nillableDictionary["postcodes"] = self.postcodes

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

