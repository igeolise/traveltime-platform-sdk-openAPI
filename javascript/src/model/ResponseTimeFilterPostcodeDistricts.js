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
import ResponseTimeFilterPostcodeDistrictsResult from './ResponseTimeFilterPostcodeDistrictsResult';

/**
 * The ResponseTimeFilterPostcodeDistricts model module.
 * @module model/ResponseTimeFilterPostcodeDistricts
 * @version 1.2.1
 */
class ResponseTimeFilterPostcodeDistricts {
    /**
     * Constructs a new <code>ResponseTimeFilterPostcodeDistricts</code>.
     * @alias module:model/ResponseTimeFilterPostcodeDistricts
     * @param results {Array.<module:model/ResponseTimeFilterPostcodeDistrictsResult>} 
     */
    constructor(results) { 
        
        ResponseTimeFilterPostcodeDistricts.initialize(this, results);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, results) { 
        obj['results'] = results;
    }

    /**
     * Constructs a <code>ResponseTimeFilterPostcodeDistricts</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseTimeFilterPostcodeDistricts} obj Optional instance to populate.
     * @return {module:model/ResponseTimeFilterPostcodeDistricts} The populated <code>ResponseTimeFilterPostcodeDistricts</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseTimeFilterPostcodeDistricts();

            if (data.hasOwnProperty('results')) {
                obj['results'] = ApiClient.convertToType(data['results'], [ResponseTimeFilterPostcodeDistrictsResult]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/ResponseTimeFilterPostcodeDistrictsResult>} results
 */
ResponseTimeFilterPostcodeDistricts.prototype['results'] = undefined;






export default ResponseTimeFilterPostcodeDistricts;

