package org.openapitools.client.model {

import org.openapitools.client.model.ResponseTravelTimeStatistics;

    [XmlRootNode(name="ResponseTimeFilterPostcodeSectorProperties")]
    public class ResponseTimeFilterPostcodeSectorProperties {
                [XmlElement(name="travel_time_reachable")]
        public var travelTimeReachable: ResponseTravelTimeStatistics = NaN;
                [XmlElement(name="travel_time_all")]
        public var travelTimeAll: ResponseTravelTimeStatistics = NaN;
                [XmlElement(name="coverage")]
        public var coverage: Number = 0.0;

    public function toString(): String {
        var str: String = "ResponseTimeFilterPostcodeSectorProperties: ";
        str += " (travelTimeReachable: " + travelTimeReachable + ")";
        str += " (travelTimeAll: " + travelTimeAll + ")";
        str += " (coverage: " + coverage + ")";
        return str;
    }

}

}
