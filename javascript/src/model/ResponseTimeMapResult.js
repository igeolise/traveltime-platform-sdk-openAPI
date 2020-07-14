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
import ResponseShape from './ResponseShape';
import ResponseTimeMapProperties from './ResponseTimeMapProperties';

/**
 * The ResponseTimeMapResult model module.
 * @module model/ResponseTimeMapResult
 * @version 1.2.1
 */
class ResponseTimeMapResult {
    /**
     * Constructs a new <code>ResponseTimeMapResult</code>.
     * @alias module:model/ResponseTimeMapResult
     * @param searchId {String} 
     * @param shapes {Array.<module:model/ResponseShape>} 
     * @param properties {module:model/ResponseTimeMapProperties} 
     */
    constructor(searchId, shapes, properties) { 
        
        ResponseTimeMapResult.initialize(this, searchId, shapes, properties);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, searchId, shapes, properties) { 
        obj['search_id'] = searchId;
        obj['shapes'] = shapes;
        obj['properties'] = properties;
    }

    /**
     * Constructs a <code>ResponseTimeMapResult</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseTimeMapResult} obj Optional instance to populate.
     * @return {module:model/ResponseTimeMapResult} The populated <code>ResponseTimeMapResult</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseTimeMapResult();

            if (data.hasOwnProperty('search_id')) {
                obj['search_id'] = ApiClient.convertToType(data['search_id'], 'String');
            }
            if (data.hasOwnProperty('shapes')) {
                obj['shapes'] = ApiClient.convertToType(data['shapes'], [ResponseShape]);
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = ResponseTimeMapProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} search_id
 */
ResponseTimeMapResult.prototype['search_id'] = undefined;

/**
 * @member {Array.<module:model/ResponseShape>} shapes
 */
ResponseTimeMapResult.prototype['shapes'] = undefined;

/**
 * @member {module:model/ResponseTimeMapProperties} properties
 */
ResponseTimeMapResult.prototype['properties'] = undefined;






export default ResponseTimeMapResult;

