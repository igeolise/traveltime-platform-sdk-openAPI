//
// ResponseTransportationMode.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ResponseTransportationMode: JSONEncodable {

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
