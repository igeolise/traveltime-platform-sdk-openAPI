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
 * The Coords model module.
 * @module model/Coords
 * @version 1.2.1
 */
class Coords {
    /**
     * Constructs a new <code>Coords</code>.
     * @alias module:model/Coords
     * @param lat {Number} 
     * @param lng {Number} 
     */
    constructor(lat, lng) { 
        
        Coords.initialize(this, lat, lng);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, lat, lng) { 
        obj['lat'] = lat;
        obj['lng'] = lng;
    }

    /**
     * Constructs a <code>Coords</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Coords} obj Optional instance to populate.
     * @return {module:model/Coords} The populated <code>Coords</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Coords();

            if (data.hasOwnProperty('lat')) {
                obj['lat'] = ApiClient.convertToType(data['lat'], 'Number');
            }
            if (data.hasOwnProperty('lng')) {
                obj['lng'] = ApiClient.convertToType(data['lng'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} lat
 */
Coords.prototype['lat'] = undefined;

/**
 * @member {Number} lng
 */
Coords.prototype['lng'] = undefined;






export default Coords;

