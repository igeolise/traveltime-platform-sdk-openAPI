package org.openapitools.client.model {

import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsProperty;
import org.openapitools.client.model.RequestTransportation;

    [XmlRootNode(name="RequestTimeFilterPostcodeSectorsDepartureSearch")]
    public class RequestTimeFilterPostcodeSectorsDepartureSearch {
                [XmlElement(name="id")]
        public var id: String = null;
                [XmlElement(name="transportation")]
        public var transportation: RequestTransportation = NaN;
                [XmlElement(name="travel_time")]
        public var travelTime: Number = 0;
                [XmlElement(name="departure_time")]
        public var departureTime: Date = null;
                [XmlElement(name="reachable_postcodes_threshold")]
        public var reachablePostcodesThreshold: Number = 0.0;
                // This declaration below of _properties_obj_class is to force flash compiler to include this class
        private var _properties_obj_class: Array = null;
        [XmlElementWrapper(name="properties")]
        [XmlElements(name="properties", type="Array")]
                public var properties: Array = new Array();
                [XmlElement(name="range")]
        public var range: RequestRangeFull = NaN;

    public function toString(): String {
        var str: String = "RequestTimeFilterPostcodeSectorsDepartureSearch: ";
        str += " (id: " + id + ")";
        str += " (transportation: " + transportation + ")";
        str += " (travelTime: " + travelTime + ")";
        str += " (departureTime: " + departureTime + ")";
        str += " (reachablePostcodesThreshold: " + reachablePostcodesThreshold + ")";
        str += " (properties: " + properties + ")";
        str += " (range: " + range + ")";
        return str;
    }

}

}
