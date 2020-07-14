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
import Coords from './Coords';
import ResponseTransportationMode from './ResponseTransportationMode';

/**
 * The ResponseRoutePart model module.
 * @module model/ResponseRoutePart
 * @version 1.2.1
 */
class ResponseRoutePart {
    /**
     * @member {String} id
     * @type {String}
     */
    id;
    /**
     * @member {ResponseRoutePart.TypeEnum} type
     * @type {ResponseRoutePart.TypeEnum}
     */
    type;
    /**
     * @member {ResponseTransportationMode} mode
     * @type {ResponseTransportationMode}
     */
    mode;
    /**
     * @member {String} directions
     * @type {String}
     */
    directions;
    /**
     * @member {Number} distance
     * @type {Number}
     */
    distance;
    /**
     * @member {Number} travel_time
     * @type {Number}
     */
    travel_time;
    /**
     * @member {Array.<CodegenProperty{openApiType='Coords', baseName='coords', complexType='Coords', getter='getCoords', setter='setCoords', description='null', dataType='Coords', datatypeWithEnum='Coords', dataFormat='null', name='coords', min='null', max='null', defaultValue='null', defaultValueWithParam=' = Coords.constructFromObject(data['coords']);', baseType='Coords', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/Coords"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Coords', nameInSnakeCase='COORDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} coords
     * @type {Array.<CodegenProperty{openApiType='Coords', baseName='coords', complexType='Coords', getter='getCoords', setter='setCoords', description='null', dataType='Coords', datatypeWithEnum='Coords', dataFormat='null', name='coords', min='null', max='null', defaultValue='null', defaultValueWithParam=' = Coords.constructFromObject(data['coords']);', baseType='Coords', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/Coords"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Coords', nameInSnakeCase='COORDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    coords;
    /**
     * @member {String} direction
     * @type {String}
     */
    direction;
    /**
     * @member {String} road
     * @type {String}
     */
    road;
    /**
     * @member {String} turn
     * @type {String}
     */
    turn;
    /**
     * @member {String} line
     * @type {String}
     */
    line;
    /**
     * @member {String} departure_station
     * @type {String}
     */
    departure_station;
    /**
     * @member {String} arrival_station
     * @type {String}
     */
    arrival_station;
    /**
     * @member {String} departs_at
     * @type {String}
     */
    departs_at;
    /**
     * @member {String} arrives_at
     * @type {String}
     */
    arrives_at;
    /**
     * @member {Number} num_stops
     * @type {Number}
     */
    num_stops;

    

    /**
     * Constructs a new <code>ResponseRoutePart</code>.
     * @alias module:model/ResponseRoutePart
     * @param id {String} 
     * @param type {ResponseRoutePart.TypeEnum} 
     * @param mode {ResponseTransportationMode} 
     * @param directions {String} 
     * @param distance {Number} 
     * @param travelTime {Number} 
     * @param coords {Array.<CodegenProperty{openApiType='Coords', baseName='coords', complexType='Coords', getter='getCoords', setter='setCoords', description='null', dataType='Coords', datatypeWithEnum='Coords', dataFormat='null', name='coords', min='null', max='null', defaultValue='null', defaultValueWithParam=' = Coords.constructFromObject(data['coords']);', baseType='Coords', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/Coords"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Coords', nameInSnakeCase='COORDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     */
    constructor(id, type, mode, directions, distance, travelTime, coords) { 
        
        ResponseRoutePart.initialize(this, id, type, mode, directions, distance, travelTime, coords);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, type, mode, directions, distance, travelTime, coords) { 
        obj['id'] = id;
        obj['type'] = type;
        obj['mode'] = mode;
        obj['directions'] = directions;
        obj['distance'] = distance;
        obj['travel_time'] = travelTime;
        obj['coords'] = coords;
    }

    /**
     * Constructs a <code>ResponseRoutePart</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseRoutePart} obj Optional instance to populate.
     * @return {module:model/ResponseRoutePart} The populated <code>ResponseRoutePart</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseRoutePart();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('mode')) {
                obj['mode'] = ResponseTransportationMode.constructFromObject(data['mode']);
            }
            if (data.hasOwnProperty('directions')) {
                obj['directions'] = ApiClient.convertToType(data['directions'], 'String');
            }
            if (data.hasOwnProperty('distance')) {
                obj['distance'] = ApiClient.convertToType(data['distance'], 'Number');
            }
            if (data.hasOwnProperty('travel_time')) {
                obj['travel_time'] = ApiClient.convertToType(data['travel_time'], 'Number');
            }
            if (data.hasOwnProperty('coords')) {
                obj['coords'] = ApiClient.convertToType(data['coords'], [Coords]);
            }
            if (data.hasOwnProperty('direction')) {
                obj['direction'] = ApiClient.convertToType(data['direction'], 'String');
            }
            if (data.hasOwnProperty('road')) {
                obj['road'] = ApiClient.convertToType(data['road'], 'String');
            }
            if (data.hasOwnProperty('turn')) {
                obj['turn'] = ApiClient.convertToType(data['turn'], 'String');
            }
            if (data.hasOwnProperty('line')) {
                obj['line'] = ApiClient.convertToType(data['line'], 'String');
            }
            if (data.hasOwnProperty('departure_station')) {
                obj['departure_station'] = ApiClient.convertToType(data['departure_station'], 'String');
            }
            if (data.hasOwnProperty('arrival_station')) {
                obj['arrival_station'] = ApiClient.convertToType(data['arrival_station'], 'String');
            }
            if (data.hasOwnProperty('departs_at')) {
                obj['departs_at'] = ApiClient.convertToType(data['departs_at'], 'String');
            }
            if (data.hasOwnProperty('arrives_at')) {
                obj['arrives_at'] = ApiClient.convertToType(data['arrives_at'], 'String');
            }
            if (data.hasOwnProperty('num_stops')) {
                obj['num_stops'] = ApiClient.convertToType(data['num_stops'], 'Number');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>type</code> property.
 * @enum {String}
 * @readonly
 */
ResponseRoutePart['TypeEnum'] = {

    /**
     * value: "basic"
     * @const
     */
    "basic": "basic",

    /**
     * value: "start_end"
     * @const
     */
    "start_end": "start_end",

    /**
     * value: "road"
     * @const
     */
    "road": "road",

    /**
     * value: "public_transport"
     * @const
     */
    "public_transport": "public_transport"
};



export default ResponseRoutePart;

