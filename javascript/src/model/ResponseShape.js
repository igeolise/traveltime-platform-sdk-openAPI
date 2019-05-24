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
import Coords from './Coords';

/**
 * The ResponseShape model module.
 * @module model/ResponseShape
 * @version 1.0.0
 */
class ResponseShape {
    /**
     * Constructs a new <code>ResponseShape</code>.
     * @alias module:model/ResponseShape
     * @param shell {Array.<module:model/Coords>} 
     * @param holes {Array.<Array.<module:model/Coords>>} 
     */
    constructor(shell, holes) { 
        
        ResponseShape.initialize(this, shell, holes);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, shell, holes) { 
        obj['shell'] = shell;
        obj['holes'] = holes;
    }

    /**
     * Constructs a <code>ResponseShape</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseShape} obj Optional instance to populate.
     * @return {module:model/ResponseShape} The populated <code>ResponseShape</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseShape();

            if (data.hasOwnProperty('shell')) {
                obj['shell'] = ApiClient.convertToType(data['shell'], [Coords]);
            }
            if (data.hasOwnProperty('holes')) {
                obj['holes'] = ApiClient.convertToType(data['holes'], [[Coords]]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/Coords>} shell
 */
ResponseShape.prototype['shell'] = undefined;

/**
 * @member {Array.<Array.<module:model/Coords>>} holes
 */
ResponseShape.prototype['holes'] = undefined;






export default ResponseShape;

