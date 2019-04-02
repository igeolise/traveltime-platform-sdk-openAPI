//
// RequestTimeFilterPostcodeSectors.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class RequestTimeFilterPostcodeSectors: JSONEncodable {

    public var departureSearches: [RequestTimeFilterPostcodeSectorsDepartureSearch]?
    public var arrivalSearches: [RequestTimeFilterPostcodeSectorsArrivalSearch]?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["departure_searches"] = self.departureSearches?.encodeToJSON()
        nillableDictionary["arrival_searches"] = self.arrivalSearches?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

