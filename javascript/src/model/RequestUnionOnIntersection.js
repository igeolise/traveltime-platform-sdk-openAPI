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
 * The RequestUnionOnIntersection model module.
 * @module model/RequestUnionOnIntersection
 * @version 1.2.1
 */
class RequestUnionOnIntersection {
    /**
     * Constructs a new <code>RequestUnionOnIntersection</code>.
     * @alias module:model/RequestUnionOnIntersection
     * @param id {String} 
     * @param searchIds {Array.<String>} 
     */
    constructor(id, searchIds) { 
        
        RequestUnionOnIntersection.initialize(this, id, searchIds);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, searchIds) { 
        obj['id'] = id;
        obj['search_ids'] = searchIds;
    }

    /**
     * Constructs a <code>RequestUnionOnIntersection</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestUnionOnIntersection} obj Optional instance to populate.
     * @return {module:model/RequestUnionOnIntersection} The populated <code>RequestUnionOnIntersection</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestUnionOnIntersection();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('search_ids')) {
                obj['search_ids'] = ApiClient.convertToType(data['search_ids'], ['String']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} id
 */
RequestUnionOnIntersection.prototype['id'] = undefined;

/**
 * @member {Array.<String>} search_ids
 */
RequestUnionOnIntersection.prototype['search_ids'] = undefined;






export default RequestUnionOnIntersection;

