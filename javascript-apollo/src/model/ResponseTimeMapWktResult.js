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
import ResponseTimeMapProperties from './ResponseTimeMapProperties';

/**
 * The ResponseTimeMapWktResult model module.
 * @module model/ResponseTimeMapWktResult
 * @version 1.2.1
 */
class ResponseTimeMapWktResult {
    /**
     * @member {String} search_id
     * @type {String}
     */
    search_id;
    /**
     * @member {String} shape
     * @type {String}
     */
    shape;
    /**
     * @member {ResponseTimeMapProperties} properties
     * @type {ResponseTimeMapProperties}
     */
    properties;

    

    /**
     * Constructs a new <code>ResponseTimeMapWktResult</code>.
     * @alias module:model/ResponseTimeMapWktResult
     * @param searchId {String} 
     * @param shape {String} 
     * @param properties {ResponseTimeMapProperties} 
     */
    constructor(searchId, shape, properties) { 
        
        ResponseTimeMapWktResult.initialize(this, searchId, shape, properties);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, searchId, shape, properties) { 
        obj['search_id'] = searchId;
        obj['shape'] = shape;
        obj['properties'] = properties;
    }

    /**
     * Constructs a <code>ResponseTimeMapWktResult</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseTimeMapWktResult} obj Optional instance to populate.
     * @return {module:model/ResponseTimeMapWktResult} The populated <code>ResponseTimeMapWktResult</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseTimeMapWktResult();

            if (data.hasOwnProperty('search_id')) {
                obj['search_id'] = ApiClient.convertToType(data['search_id'], 'String');
            }
            if (data.hasOwnProperty('shape')) {
                obj['shape'] = ApiClient.convertToType(data['shape'], 'String');
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = ResponseTimeMapProperties.constructFromObject(data['properties']);
            }
        }
        return obj;
    }
}



export default ResponseTimeMapWktResult;

