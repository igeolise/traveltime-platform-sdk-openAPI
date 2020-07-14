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
import ResponseGeocodingGeoJsonFeature from './ResponseGeocodingGeoJsonFeature';

/**
 * The ResponseGeocoding model module.
 * @module model/ResponseGeocoding
 * @version 1.2.1
 */
class ResponseGeocoding {
    /**
     * Constructs a new <code>ResponseGeocoding</code>.
     * @alias module:model/ResponseGeocoding
     * @param type {String} 
     * @param features {Array.<module:model/ResponseGeocodingGeoJsonFeature>} 
     */
    constructor(type, features) { 
        
        ResponseGeocoding.initialize(this, type, features);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, type, features) { 
        obj['type'] = type;
        obj['features'] = features;
    }

    /**
     * Constructs a <code>ResponseGeocoding</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseGeocoding} obj Optional instance to populate.
     * @return {module:model/ResponseGeocoding} The populated <code>ResponseGeocoding</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseGeocoding();

            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('features')) {
                obj['features'] = ApiClient.convertToType(data['features'], [ResponseGeocodingGeoJsonFeature]);
            }
        }
        return obj;
    }


}

/**
 * @member {String} type
 */
ResponseGeocoding.prototype['type'] = undefined;

/**
 * @member {Array.<module:model/ResponseGeocodingGeoJsonFeature>} features
 */
ResponseGeocoding.prototype['features'] = undefined;






export default ResponseGeocoding;

