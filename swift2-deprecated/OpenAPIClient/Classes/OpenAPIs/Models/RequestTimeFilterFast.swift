//
// RequestTimeFilterFast.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class RequestTimeFilterFast: JSONEncodable {
    public var locations: [RequestLocation]?
    public var arrivalSearches: RequestTimeFilterFastArrivalSearches?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["locations"] = self.locations?.encodeToJSON()
        nillableDictionary["arrival_searches"] = self.arrivalSearches?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
