/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import ModelString from './ModelString';
import ResponseTimeFilterPostcodesProperties from './ResponseTimeFilterPostcodesProperties';

/**
 * The ResponseTimeFilterPostcode model module.
 * @module model/ResponseTimeFilterPostcode
 * @version 1.0.0
 */
class ResponseTimeFilterPostcode {
    /**
     * Constructs a new <code>ResponseTimeFilterPostcode</code>.
     * @alias module:model/ResponseTimeFilterPostcode
     * @param code {module:model/ModelString} 
     * @param properties {Array.<module:model/ResponseTimeFilterPostcodesProperties>} 
     */
    constructor(code, properties) { 
        
        ResponseTimeFilterPostcode.initialize(this, code, properties);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, code, properties) { 
        obj['code'] = code;
        obj['properties'] = properties;
    }

    /**
     * Constructs a <code>ResponseTimeFilterPostcode</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseTimeFilterPostcode} obj Optional instance to populate.
     * @return {module:model/ResponseTimeFilterPostcode} The populated <code>ResponseTimeFilterPostcode</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseTimeFilterPostcode();

            if (data.hasOwnProperty('code')) {
                obj['code'] = ApiClient.convertToType(data['code'], ModelString);
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = ApiClient.convertToType(data['properties'], [ResponseTimeFilterPostcodesProperties]);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ModelString} code
 */
ResponseTimeFilterPostcode.prototype['code'] = undefined;

/**
 * @member {Array.<module:model/ResponseTimeFilterPostcodesProperties>} properties
 */
ResponseTimeFilterPostcode.prototype['properties'] = undefined;






export default ResponseTimeFilterPostcode;

