package traveltimeplatform.client.model {

import traveltimeplatform.client.model.RequestRangeFull;
import traveltimeplatform.client.model.RequestTimeFilterPostcodeDistrictsProperty;
import traveltimeplatform.client.model.RequestTransportation;

    [XmlRootNode(name="RequestTimeFilterPostcodeDistrictsArrivalSearch")]
    public class RequestTimeFilterPostcodeDistrictsArrivalSearch {
                [XmlElement(name="id")]
        public var id: String = null;
                [XmlElement(name="transportation")]
        public var transportation: RequestTransportation = NaN;
                [XmlElement(name="travel_time")]
        public var travelTime: Number = 0;
                [XmlElement(name="arrival_time")]
        public var arrivalTime: Date = null;
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
        var str: String = "RequestTimeFilterPostcodeDistrictsArrivalSearch: ";
        str += " (id: " + id + ")";
        str += " (transportation: " + transportation + ")";
        str += " (travelTime: " + travelTime + ")";
        str += " (arrivalTime: " + arrivalTime + ")";
        str += " (reachablePostcodesThreshold: " + reachablePostcodesThreshold + ")";
        str += " (properties: " + properties + ")";
        str += " (range: " + range + ")";
        return str;
    }

}

}
