package traveltimeplatform.client.model {

import traveltimeplatform.client.model.ResponseTimeMapResult;

    [XmlRootNode(name="ResponseTimeMap")]
    public class ResponseTimeMap {
                // This declaration below of _results_obj_class is to force flash compiler to include this class
        private var _results_obj_class: Array = null;
        [XmlElementWrapper(name="results")]
        [XmlElements(name="results", type="Array")]
                public var results: Array = new Array();

    public function toString(): String {
        var str: String = "ResponseTimeMap: ";
        str += " (results: " + results + ")";
        return str;
    }

}

}
