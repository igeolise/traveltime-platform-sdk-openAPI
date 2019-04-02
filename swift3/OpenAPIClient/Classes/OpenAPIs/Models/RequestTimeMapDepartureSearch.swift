//
// RequestTimeMapDepartureSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class RequestTimeMapDepartureSearch: JSONEncodable {

    public var id: String?
    public var coords: Coords?
    public var transportation: RequestTransportation?
    public var travelTime: Int32?
    public var departureTime: Date?
    public var properties: [RequestTimeMapProperty]?
    public var range: RequestRangeNoMaxResults?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["id"] = self.id
        nillableDictionary["coords"] = self.coords?.encodeToJSON()
        nillableDictionary["transportation"] = self.transportation?.encodeToJSON()
        nillableDictionary["travel_time"] = self.travelTime?.encodeToJSON()
        nillableDictionary["departure_time"] = self.departureTime?.encodeToJSON()
        nillableDictionary["properties"] = self.properties?.encodeToJSON()
        nillableDictionary["range"] = self.range?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

