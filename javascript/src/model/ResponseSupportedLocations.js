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
import ResponseSupportedLocation from './ResponseSupportedLocation';

/**
 * The ResponseSupportedLocations model module.
 * @module model/ResponseSupportedLocations
 * @version 1.2.1
 */
class ResponseSupportedLocations {
    /**
     * Constructs a new <code>ResponseSupportedLocations</code>.
     * @alias module:model/ResponseSupportedLocations
     * @param locations {Array.<module:model/ResponseSupportedLocation>} 
     * @param unsupportedLocations {Array.<String>} 
     */
    constructor(locations, unsupportedLocations) { 
        
        ResponseSupportedLocations.initialize(this, locations, unsupportedLocations);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, locations, unsupportedLocations) { 
        obj['locations'] = locations;
        obj['unsupported_locations'] = unsupportedLocations;
    }

    /**
     * Constructs a <code>ResponseSupportedLocations</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseSupportedLocations} obj Optional instance to populate.
     * @return {module:model/ResponseSupportedLocations} The populated <code>ResponseSupportedLocations</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseSupportedLocations();

            if (data.hasOwnProperty('locations')) {
                obj['locations'] = ApiClient.convertToType(data['locations'], [ResponseSupportedLocation]);
            }
            if (data.hasOwnProperty('unsupported_locations')) {
                obj['unsupported_locations'] = ApiClient.convertToType(data['unsupported_locations'], ['String']);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/ResponseSupportedLocation>} locations
 */
ResponseSupportedLocations.prototype['locations'] = undefined;

/**
 * @member {Array.<String>} unsupported_locations
 */
ResponseSupportedLocations.prototype['unsupported_locations'] = undefined;






export default ResponseSupportedLocations;

