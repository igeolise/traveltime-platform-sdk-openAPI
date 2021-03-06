package org.openapitools.client.model {

import org.openapitools.common.ListWrapper;
import org.openapitools.client.model.ResponseTransportationMode;

    public class ResponseDistanceBreakdownItemList implements ListWrapper {
        // This declaration below of _ResponseDistanceBreakdownItem_obj_class is to force flash compiler to include this class
        private var _responseDistanceBreakdownItem_obj_class: org.openapitools.client.model.ResponseDistanceBreakdownItem = null;
        [XmlElements(name="responseDistanceBreakdownItem", type="org.openapitools.client.model.ResponseDistanceBreakdownItem")]
        public var responseDistanceBreakdownItem: Array = new Array();

        public function getList(): Array{
            return responseDistanceBreakdownItem;
        }

}

}
