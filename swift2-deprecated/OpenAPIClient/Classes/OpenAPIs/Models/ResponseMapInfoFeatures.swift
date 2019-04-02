//
// ResponseMapInfoFeatures.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ResponseMapInfoFeatures: JSONEncodable {
    public var publicTransport: ResponseMapInfoFeaturesPublicTransport?
    public var fares: Bool?
    public var postcodes: Bool?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["public_transport"] = self.publicTransport?.encodeToJSON()
        nillableDictionary["fares"] = self.fares
        nillableDictionary["postcodes"] = self.postcodes
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
