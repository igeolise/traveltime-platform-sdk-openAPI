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
 * The RequestRangeFull model module.
 * @module model/RequestRangeFull
 * @version 1.2.1
 */
class RequestRangeFull {
    /**
     * @member {Boolean} enabled
     * @type {Boolean}
     */
    enabled;
    /**
     * @member {Number} max_results
     * @type {Number}
     */
    max_results;
    /**
     * @member {Number} width
     * @type {Number}
     */
    width;

    

    /**
     * Constructs a new <code>RequestRangeFull</code>.
     * @alias module:model/RequestRangeFull
     * @param enabled {Boolean} 
     * @param maxResults {Number} 
     * @param width {Number} 
     */
    constructor(enabled, maxResults, width) { 
        
        RequestRangeFull.initialize(this, enabled, maxResults, width);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, enabled, maxResults, width) { 
        obj['enabled'] = enabled;
        obj['max_results'] = maxResults;
        obj['width'] = width;
    }

    /**
     * Constructs a <code>RequestRangeFull</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestRangeFull} obj Optional instance to populate.
     * @return {module:model/RequestRangeFull} The populated <code>RequestRangeFull</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestRangeFull();

            if (data.hasOwnProperty('enabled')) {
                obj['enabled'] = ApiClient.convertToType(data['enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('max_results')) {
                obj['max_results'] = ApiClient.convertToType(data['max_results'], 'Number');
            }
            if (data.hasOwnProperty('width')) {
                obj['width'] = ApiClient.convertToType(data['width'], 'Number');
            }
        }
        return obj;
    }
}



export default RequestRangeFull;

