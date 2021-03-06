package org.openapitools.client.model {

import org.openapitools.client.model.ResponseTimeFilterFastProperties;

    [XmlRootNode(name="ResponseTimeFilterFastLocation")]
    public class ResponseTimeFilterFastLocation {
                [XmlElement(name="id")]
        public var id: String = null;
                // This declaration below of _properties_obj_class is to force flash compiler to include this class
        private var _properties_obj_class: Array = null;
        [XmlElementWrapper(name="properties")]
        [XmlElements(name="properties", type="Array")]
                public var properties: Array = new Array();

    public function toString(): String {
        var str: String = "ResponseTimeFilterFastLocation: ";
        str += " (id: " + id + ")";
        str += " (properties: " + properties + ")";
        return str;
    }

}

}
