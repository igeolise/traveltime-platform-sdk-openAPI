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
import RequestArrivalTimePeriod from './RequestArrivalTimePeriod';
import RequestTimeFilterFastProperty from './RequestTimeFilterFastProperty';
import RequestTransportationFast from './RequestTransportationFast';

/**
 * The RequestTimeFilterFastArrivalOneToManySearch model module.
 * @module model/RequestTimeFilterFastArrivalOneToManySearch
 * @version 1.2.1
 */
class RequestTimeFilterFastArrivalOneToManySearch {
    /**
     * @member {String} id
     * @type {String}
     */
    id;
    /**
     * @member {String} departure_location_id
     * @type {String}
     */
    departure_location_id;
    /**
     * @member {Array.<CodegenProperty{openApiType='string', baseName='arrivalLocationIds', complexType='null', getter='getArrivalLocationIds', setter='setArrivalLocationIds', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='arrivalLocationIds', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['arrivalLocationIds'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='ArrivalLocationIds', nameInSnakeCase='ARRIVAL_LOCATION_IDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} arrival_location_ids
     * @type {Array.<CodegenProperty{openApiType='string', baseName='arrivalLocationIds', complexType='null', getter='getArrivalLocationIds', setter='setArrivalLocationIds', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='arrivalLocationIds', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['arrivalLocationIds'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='ArrivalLocationIds', nameInSnakeCase='ARRIVAL_LOCATION_IDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    arrival_location_ids;
    /**
     * @member {RequestTransportationFast} transportation
     * @type {RequestTransportationFast}
     */
    transportation;
    /**
     * @member {Number} travel_time
     * @type {Number}
     */
    travel_time;
    /**
     * @member {RequestArrivalTimePeriod} arrival_time_period
     * @type {RequestArrivalTimePeriod}
     */
    arrival_time_period;
    /**
     * @member {Array.<CodegenProperty{openApiType='RequestTimeFilterFastProperty', baseName='properties', complexType='RequestTimeFilterFastProperty', getter='getProperties', setter='setProperties', description='null', dataType='RequestTimeFilterFastProperty', datatypeWithEnum='RequestTimeFilterFastProperty', dataFormat='null', name='properties', min='null', max='null', defaultValue='null', defaultValueWithParam=' = RequestTimeFilterFastProperty.constructFromObject(data['properties']);', baseType='RequestTimeFilterFastProperty', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/RequestTimeFilterFastProperty"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=false, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues={values=[travel_time, fares], enumVars=[{name=travel_time, isString=true, value="travel_time"}, {name=fares, isString=true, value="fares"}]}, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Properties', nameInSnakeCase='PROPERTIES', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} properties
     * @type {Array.<CodegenProperty{openApiType='RequestTimeFilterFastProperty', baseName='properties', complexType='RequestTimeFilterFastProperty', getter='getProperties', setter='setProperties', description='null', dataType='RequestTimeFilterFastProperty', datatypeWithEnum='RequestTimeFilterFastProperty', dataFormat='null', name='properties', min='null', max='null', defaultValue='null', defaultValueWithParam=' = RequestTimeFilterFastProperty.constructFromObject(data['properties']);', baseType='RequestTimeFilterFastProperty', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/RequestTimeFilterFastProperty"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=false, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues={values=[travel_time, fares], enumVars=[{name=travel_time, isString=true, value="travel_time"}, {name=fares, isString=true, value="fares"}]}, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Properties', nameInSnakeCase='PROPERTIES', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    properties;

    

    /**
     * Constructs a new <code>RequestTimeFilterFastArrivalOneToManySearch</code>.
     * @alias module:model/RequestTimeFilterFastArrivalOneToManySearch
     * @param id {String} 
     * @param departureLocationId {String} 
     * @param arrivalLocationIds {Array.<CodegenProperty{openApiType='string', baseName='arrivalLocationIds', complexType='null', getter='getArrivalLocationIds', setter='setArrivalLocationIds', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='arrivalLocationIds', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['arrivalLocationIds'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='ArrivalLocationIds', nameInSnakeCase='ARRIVAL_LOCATION_IDS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     * @param transportation {RequestTransportationFast} 
     * @param travelTime {Number} 
     * @param arrivalTimePeriod {RequestArrivalTimePeriod} 
     * @param properties {Array.<CodegenProperty{openApiType='RequestTimeFilterFastProperty', baseName='properties', complexType='RequestTimeFilterFastProperty', getter='getProperties', setter='setProperties', description='null', dataType='RequestTimeFilterFastProperty', datatypeWithEnum='RequestTimeFilterFastProperty', dataFormat='null', name='properties', min='null', max='null', defaultValue='null', defaultValueWithParam=' = RequestTimeFilterFastProperty.constructFromObject(data['properties']);', baseType='RequestTimeFilterFastProperty', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/RequestTimeFilterFastProperty"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=false, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues={values=[travel_time, fares], enumVars=[{name=travel_time, isString=true, value="travel_time"}, {name=fares, isString=true, value="fares"}]}, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Properties', nameInSnakeCase='PROPERTIES', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     */
    constructor(id, departureLocationId, arrivalLocationIds, transportation, travelTime, arrivalTimePeriod, properties) { 
        
        RequestTimeFilterFastArrivalOneToManySearch.initialize(this, id, departureLocationId, arrivalLocationIds, transportation, travelTime, arrivalTimePeriod, properties);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, id, departureLocationId, arrivalLocationIds, transportation, travelTime, arrivalTimePeriod, properties) { 
        obj['id'] = id;
        obj['departure_location_id'] = departureLocationId;
        obj['arrival_location_ids'] = arrivalLocationIds;
        obj['transportation'] = transportation;
        obj['travel_time'] = travelTime;
        obj['arrival_time_period'] = arrivalTimePeriod;
        obj['properties'] = properties;
    }

    /**
     * Constructs a <code>RequestTimeFilterFastArrivalOneToManySearch</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestTimeFilterFastArrivalOneToManySearch} obj Optional instance to populate.
     * @return {module:model/RequestTimeFilterFastArrivalOneToManySearch} The populated <code>RequestTimeFilterFastArrivalOneToManySearch</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestTimeFilterFastArrivalOneToManySearch();

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
                obj['transportation'] = RequestTransportationFast.constructFromObject(data['transportation']);
            }
            if (data.hasOwnProperty('travel_time')) {
                obj['travel_time'] = ApiClient.convertToType(data['travel_time'], 'Number');
            }
            if (data.hasOwnProperty('arrival_time_period')) {
                obj['arrival_time_period'] = RequestArrivalTimePeriod.constructFromObject(data['arrival_time_period']);
            }
            if (data.hasOwnProperty('properties')) {
                obj['properties'] = ApiClient.convertToType(data['properties'], [RequestTimeFilterFastProperty]);
            }
        }
        return obj;
    }
}



export default RequestTimeFilterFastArrivalOneToManySearch;

