package org.openapitools.client.model {

import org.openapitools.client.model.ResponseTimeFilterPostcodeDistrictsResult;

    [XmlRootNode(name="ResponseTimeFilterPostcodeDistricts")]
    public class ResponseTimeFilterPostcodeDistricts {
                // This declaration below of _results_obj_class is to force flash compiler to include this class
        private var _results_obj_class: Array = null;
        [XmlElementWrapper(name="results")]
        [XmlElements(name="results", type="Array")]
                public var results: Array = new Array();

    public function toString(): String {
        var str: String = "ResponseTimeFilterPostcodeDistricts: ";
        str += " (results: " + results + ")";
        return str;
    }

}

}
