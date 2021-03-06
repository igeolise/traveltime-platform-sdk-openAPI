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
import ResponseFareTicket from './ResponseFareTicket';
import ResponseFaresBreakdownItem from './ResponseFaresBreakdownItem';

/**
 * The ResponseFares model module.
 * @module model/ResponseFares
 * @version 1.2.1
 */
class ResponseFares {
    /**
     * Constructs a new <code>ResponseFares</code>.
     * @alias module:model/ResponseFares
     * @param breakdown {Array.<module:model/ResponseFaresBreakdownItem>} 
     * @param ticketsTotal {Array.<module:model/ResponseFareTicket>} 
     */
    constructor(breakdown, ticketsTotal) { 
        
        ResponseFares.initialize(this, breakdown, ticketsTotal);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, breakdown, ticketsTotal) { 
        obj['breakdown'] = breakdown;
        obj['tickets_total'] = ticketsTotal;
    }

    /**
     * Constructs a <code>ResponseFares</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseFares} obj Optional instance to populate.
     * @return {module:model/ResponseFares} The populated <code>ResponseFares</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseFares();

            if (data.hasOwnProperty('breakdown')) {
                obj['breakdown'] = ApiClient.convertToType(data['breakdown'], [ResponseFaresBreakdownItem]);
            }
            if (data.hasOwnProperty('tickets_total')) {
                obj['tickets_total'] = ApiClient.convertToType(data['tickets_total'], [ResponseFareTicket]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/ResponseFaresBreakdownItem>} breakdown
 */
ResponseFares.prototype['breakdown'] = undefined;

/**
 * @member {Array.<module:model/ResponseFareTicket>} tickets_total
 */
ResponseFares.prototype['tickets_total'] = undefined;






export default ResponseFares;

