//
// ResponseRoutePart.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ResponseRoutePart: Codable {

    public enum ModelType: String, Codable {
        case basic = "basic"
        case startEnd = "start_end"
        case road = "road"
        case publicTransport = "public_transport"
    }
    public var id: String
    public var type: ModelType
    public var mode: ResponseTransportationMode
    public var directions: String
    public var distance: Int
    public var travelTime: Int
    public var coords: [Coords]
    public var direction: String?
    public var road: String?
    public var turn: String?
    public var line: String?
    public var departureStation: String?
    public var arrivalStation: String?
    public var departsAt: String?
    public var arrivesAt: String?
    public var numStops: Int?

    public init(id: String, type: ModelType, mode: ResponseTransportationMode, directions: String, distance: Int, travelTime: Int, coords: [Coords], direction: String?, road: String?, turn: String?, line: String?, departureStation: String?, arrivalStation: String?, departsAt: String?, arrivesAt: String?, numStops: Int?) {
        self.id = id
        self.type = type
        self.mode = mode
        self.directions = directions
        self.distance = distance
        self.travelTime = travelTime
        self.coords = coords
        self.direction = direction
        self.road = road
        self.turn = turn
        self.line = line
        self.departureStation = departureStation
        self.arrivalStation = arrivalStation
        self.departsAt = departsAt
        self.arrivesAt = arrivesAt
        self.numStops = numStops
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case type
        case mode
        case directions
        case distance
        case travelTime = "travel_time"
        case coords
        case direction
        case road
        case turn
        case line
        case departureStation = "departure_station"
        case arrivalStation = "arrival_station"
        case departsAt = "departs_at"
        case arrivesAt = "arrives_at"
        case numStops = "num_stops"
    }


}

