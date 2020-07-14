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
import Coords from './Coords';

/**
 * The RequestLocation model module.
 * @module model/RequestLocation
 * @version 1.2.1
 */
class RequestLocation {
    /**
     * @member {String} id
     * @type {String}
     */
    id;
    /**
     * @member {Coords} coords
     * @type {Coords}
     */
    coords;

    

    /**
     * Constructs a new <code>RequestLocation</code>.
     * @alias module:model/RequestLocation
     * @param id {String} 
     * @param coords {Coords} 
     */
    constructor(id, coords) { 
        
        RequestLocation.initialize(this, id, coords);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, coords) { 
        obj['id'] = id;
        obj['coords'] = coords;
    }

    /**
     * Constructs a <code>RequestLocation</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestLocation} obj Optional instance to populate.
     * @return {module:model/RequestLocation} The populated <code>RequestLocation</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestLocation();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('coords')) {
                obj['coords'] = Coords.constructFromObject(data['coords']);
            }
        }
        return obj;
    }
}



export default RequestLocation;

