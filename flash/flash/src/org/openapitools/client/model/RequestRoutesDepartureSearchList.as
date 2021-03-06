package org.openapitools.client.model {

import org.openapitools.common.ListWrapper;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestRoutesProperty;
import org.openapitools.client.model.RequestTransportation;

    public class RequestRoutesDepartureSearchList implements ListWrapper {
        // This declaration below of _RequestRoutesDepartureSearch_obj_class is to force flash compiler to include this class
        private var _requestRoutesDepartureSearch_obj_class: org.openapitools.client.model.RequestRoutesDepartureSearch = null;
        [XmlElements(name="requestRoutesDepartureSearch", type="org.openapitools.client.model.RequestRoutesDepartureSearch")]
        public var requestRoutesDepartureSearch: Array = new Array();

        public function getList(): Array{
            return requestRoutesDepartureSearch;
        }

}

}
