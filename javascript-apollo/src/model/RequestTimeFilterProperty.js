/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
/**
* Enum class RequestTimeFilterProperty.
* @enum {}
* @readonly
*/
export default class RequestTimeFilterProperty {
    
        /**
         * value: "travel_time"
         * @const
         */
        "travel_time" = "travel_time";

    
        /**
         * value: "distance"
         * @const
         */
        "distance" = "distance";

    
        /**
         * value: "distance_breakdown"
         * @const
         */
        "distance_breakdown" = "distance_breakdown";

    
        /**
         * value: "fares"
         * @const
         */
        "fares" = "fares";

    
        /**
         * value: "route"
         * @const
         */
        "route" = "route";

    

    /**
    * Returns a <code>RequestTimeFilterProperty</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/RequestTimeFilterProperty} The enum <code>RequestTimeFilterProperty</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}
