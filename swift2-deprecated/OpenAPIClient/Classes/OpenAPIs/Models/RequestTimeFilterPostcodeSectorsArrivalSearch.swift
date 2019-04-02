//
// RequestTimeFilterPostcodeSectorsArrivalSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class RequestTimeFilterPostcodeSectorsArrivalSearch: JSONEncodable {
    public var id: String?
    public var transportation: RequestTransportation?
    public var travelTime: Int32?
    public var arrivalTime: NSDate?
    public var reachablePostcodesThreshold: Double?
    public var properties: [RequestTimeFilterPostcodeSectorsProperty]?
    public var range: RequestRangeFull?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["id"] = self.id
        nillableDictionary["transportation"] = self.transportation?.encodeToJSON()
        nillableDictionary["travel_time"] = self.travelTime?.encodeToJSON()
        nillableDictionary["arrival_time"] = self.arrivalTime?.encodeToJSON()
        nillableDictionary["reachable_postcodes_threshold"] = self.reachablePostcodesThreshold
        nillableDictionary["properties"] = self.properties?.encodeToJSON()
        nillableDictionary["range"] = self.range?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
