//
// RequestTimeFilterPostcodesDepartureSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class RequestTimeFilterPostcodesDepartureSearch: JSONEncodable {
    public var id: String?
    public var transportation: RequestTransportation?
    public var travelTime: Int32?
    public var departureTime: NSDate?
    public var properties: [RequestTimeFilterPostcodesProperty]?
    public var range: RequestRangeFull?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["id"] = self.id
        nillableDictionary["transportation"] = self.transportation?.encodeToJSON()
        nillableDictionary["travel_time"] = self.travelTime?.encodeToJSON()
        nillableDictionary["departure_time"] = self.departureTime?.encodeToJSON()
        nillableDictionary["properties"] = self.properties?.encodeToJSON()
        nillableDictionary["range"] = self.range?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
