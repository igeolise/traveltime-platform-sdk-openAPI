package traveltimeplatform.client.model {

import org.openapitools.common.ListWrapper;

    public class RequestRangeFullList implements ListWrapper {
        // This declaration below of _RequestRangeFull_obj_class is to force flash compiler to include this class
        private var _requestRangeFull_obj_class: traveltimeplatform.client.model.RequestRangeFull = null;
        [XmlElements(name="requestRangeFull", type="traveltimeplatform.client.model.RequestRangeFull")]
        public var requestRangeFull: Array = new Array();

        public function getList(): Array{
            return requestRangeFull;
        }

}

}
