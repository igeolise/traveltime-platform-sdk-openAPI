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
import ResponseTimeFilterLocation from './ResponseTimeFilterLocation';

/**
 * The ResponseTimeFilterResult model module.
 * @module model/ResponseTimeFilterResult
 * @version 1.2.1
 */
class ResponseTimeFilterResult {
    /**
     * @member {String} search_id
     * @type {String}
     */
    search_id;
    /**
     * @member {Array.<CodegenProperty{openApiType='ResponseTimeFilterLocation', baseName='locations', complexType='ResponseTimeFilterLocation', getter='getLocations', setter='setLocations', description='null', dataType='ResponseTimeFilterLocation', datatypeWithEnum='ResponseTimeFilterLocation', dataFormat='null', name='locations', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseTimeFilterLocation.constructFromObject(data['locations']);', baseType='ResponseTimeFilterLocation', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseTimeFilterLocation"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Locations', nameInSnakeCase='LOCATIONS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} locations
     * @type {Array.<CodegenProperty{openApiType='ResponseTimeFilterLocation', baseName='locations', complexType='ResponseTimeFilterLocation', getter='getLocations', setter='setLocations', description='null', dataType='ResponseTimeFilterLocation', datatypeWithEnum='ResponseTimeFilterLocation', dataFormat='null', name='locations', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseTimeFilterLocation.constructFromObject(data['locations']);', baseType='ResponseTimeFilterLocation', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseTimeFilterLocation"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Locations', nameInSnakeCase='LOCATIONS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    locations;
    /**
     * @member {Array.<CodegenProperty{openApiType='string', baseName='unreachable', complexType='null', getter='getUnreachable', setter='setUnreachable', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='unreachable', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['unreachable'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Unreachable', nameInSnakeCase='UNREACHABLE', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} unreachable
     * @type {Array.<CodegenProperty{openApiType='string', baseName='unreachable', complexType='null', getter='getUnreachable', setter='setUnreachable', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='unreachable', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['unreachable'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Unreachable', nameInSnakeCase='UNREACHABLE', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    unreachable;

    

    /**
     * Constructs a new <code>ResponseTimeFilterResult</code>.
     * @alias module:model/ResponseTimeFilterResult
     * @param searchId {String} 
     * @param locations {Array.<CodegenProperty{openApiType='ResponseTimeFilterLocation', baseName='locations', complexType='ResponseTimeFilterLocation', getter='getLocations', setter='setLocations', description='null', dataType='ResponseTimeFilterLocation', datatypeWithEnum='ResponseTimeFilterLocation', dataFormat='null', name='locations', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseTimeFilterLocation.constructFromObject(data['locations']);', baseType='ResponseTimeFilterLocation', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseTimeFilterLocation"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Locations', nameInSnakeCase='LOCATIONS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     * @param unreachable {Array.<CodegenProperty{openApiType='string', baseName='unreachable', complexType='null', getter='getUnreachable', setter='setUnreachable', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='unreachable', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['unreachable'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Unreachable', nameInSnakeCase='UNREACHABLE', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     */
    constructor(searchId, locations, unreachable) { 
        
        ResponseTimeFilterResult.initialize(this, searchId, locations, unreachable);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, searchId, locations, unreachable) { 
        obj['search_id'] = searchId;
        obj['locations'] = locations;
        obj['unreachable'] = unreachable;
    }

    /**
     * Constructs a <code>ResponseTimeFilterResult</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseTimeFilterResult} obj Optional instance to populate.
     * @return {module:model/ResponseTimeFilterResult} The populated <code>ResponseTimeFilterResult</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseTimeFilterResult();

            if (data.hasOwnProperty('search_id')) {
                obj['search_id'] = ApiClient.convertToType(data['search_id'], 'String');
            }
            if (data.hasOwnProperty('locations')) {
                obj['locations'] = ApiClient.convertToType(data['locations'], [ResponseTimeFilterLocation]);
            }
            if (data.hasOwnProperty('unreachable')) {
                obj['unreachable'] = ApiClient.convertToType(data['unreachable'], ['String']);
            }
        }
        return obj;
    }
}



export default ResponseTimeFilterResult;

