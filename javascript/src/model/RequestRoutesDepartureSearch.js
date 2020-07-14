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
import RequestRangeFull from './RequestRangeFull';
import RequestRoutesProperty from './RequestRoutesProperty';
import RequestTransportation from './RequestTransportation';

/**
 * The RequestRoutesDepartureSearch model module.
 * @module model/RequestRoutesDepartureSearch
 * @version 1.2.1
 */
class RequestRoutesDepartureSearch {
    /**
     * Constructs a new <code>RequestRoutesDepartureSearch</code>.
     * @alias module:model/RequestRoutesDepartureSearch
     * @param id {String} 
     * @param departureLocationId {String} 
     * @param arrivalLocationIds {Array.<String>} 
     * @param transportation {module:model/RequestTransportation} 
     * @param departureTime {Date} 
     * @param properties {Array.<module:model/RequestRoutesProperty>} 
     */
    constructor(id, departureLocationId, arrivalLocationIds, transportation, departureTime, properties) { 
        
        RequestRoutesDepartureSearch.initialize(this, id, departureLocationId, arrivalLocationIds, transportation, departureTime, properties);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, departureLocationId, arrivalLocationIds, transportation, departureTime, properties) { 
        obj['id'] = id;
        obj['departure_location_id'] = departureLocationId;
        obj['arrival_location_ids'] = arrivalLocationIds;
        obj['transportation'] = transportation;
        obj['departure_time'] = departureTime;
        obj['properties'] = properties;
    }

    /**
     * Constructs a <code>RequestRoutesDepartureSearch</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestRoutesDepartureSearch} obj Optional instance to populate.
     * @return {module:model/RequestRoutesDepartureSearch} The populated <code>RequestRoutesDepartureSearch</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestRoutesDepartureSearch();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('departure_location_id')) {
                obj['departure_location_id'] = ApiClient.convertToType(data['departure_location_id'], 'String');
            }
            if (data.hasOwnProperty('arrival_location_ids')) {
                obj['arrival_location_ids'] = ApiClient.convertToType(data['arrival_location_ids'], ['String']);
            }
            if (data.hasOwnProperty('transportation')) {
                obj['transportation'] = RequestTransportation.constructFromObject(data['transportation']);
            }
            if (data.hasOwnProperty('departure_time')) {
                obj['departure_time'] = ApiClient.convertToType(data['departure_time'], 'Date');
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = ApiClient.convertToType(data['properties'], [RequestRoutesProperty]);
            }
            if (data.hasOwnProperty('range')) {
                obj['range'] = RequestRangeFull.constructFromObject(data['range']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} id
 */
RequestRoutesDepartureSearch.prototype['id'] = undefined;

/**
 * @member {String} departure_location_id
 */
RequestRoutesDepartureSearch.prototype['departure_location_id'] = undefined;

/**
 * @member {Array.<String>} arrival_location_ids
 */
RequestRoutesDepartureSearch.prototype['arrival_location_ids'] = undefined;

/**
 * @member {module:model/RequestTransportation} transportation
 */
RequestRoutesDepartureSearch.prototype['transportation'] = undefined;

/**
 * @member {Date} departure_time
 */
RequestRoutesDepartureSearch.prototype['departure_time'] = undefined;

/**
 * @member {Array.<module:model/RequestRoutesProperty>} properties
 */
RequestRoutesDepartureSearch.prototype['properties'] = undefined;

/**
 * @member {module:model/RequestRangeFull} range
 */
RequestRoutesDepartureSearch.prototype['range'] = undefined;






export default RequestRoutesDepartureSearch;

