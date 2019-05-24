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
import RequestTimeFilterPostcodeDistrictsArrivalSearch from './RequestTimeFilterPostcodeDistrictsArrivalSearch';
import RequestTimeFilterPostcodeDistrictsDepartureSearch from './RequestTimeFilterPostcodeDistrictsDepartureSearch';

/**
 * The RequestTimeFilterPostcodeDistricts model module.
 * @module model/RequestTimeFilterPostcodeDistricts
 * @version 1.0.0
 */
class RequestTimeFilterPostcodeDistricts {
    /**
     * Constructs a new <code>RequestTimeFilterPostcodeDistricts</code>.
     * @alias module:model/RequestTimeFilterPostcodeDistricts
     */
    constructor() { 
        
        RequestTimeFilterPostcodeDistricts.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>RequestTimeFilterPostcodeDistricts</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestTimeFilterPostcodeDistricts} obj Optional instance to populate.
     * @return {module:model/RequestTimeFilterPostcodeDistricts} The populated <code>RequestTimeFilterPostcodeDistricts</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestTimeFilterPostcodeDistricts();

            if (data.hasOwnProperty('departure_searches')) {
                obj['departure_searches'] = ApiClient.convertToType(data['departure_searches'], [RequestTimeFilterPostcodeDistrictsDepartureSearch]);
            }
            if (data.hasOwnProperty('arrival_searches')) {
                obj['arrival_searches'] = ApiClient.convertToType(data['arrival_searches'], [RequestTimeFilterPostcodeDistrictsArrivalSearch]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/RequestTimeFilterPostcodeDistrictsDepartureSearch>} departure_searches
 */
RequestTimeFilterPostcodeDistricts.prototype['departure_searches'] = undefined;

/**
 * @member {Array.<module:model/RequestTimeFilterPostcodeDistrictsArrivalSearch>} arrival_searches
 */
RequestTimeFilterPostcodeDistricts.prototype['arrival_searches'] = undefined;






export default RequestTimeFilterPostcodeDistricts;

