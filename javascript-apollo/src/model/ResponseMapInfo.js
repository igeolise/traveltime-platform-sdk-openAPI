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
import ResponseMapInfoMap from './ResponseMapInfoMap';

/**
 * The ResponseMapInfo model module.
 * @module model/ResponseMapInfo
 * @version 1.2.1
 */
class ResponseMapInfo {
    /**
     * @member {Array.<CodegenProperty{openApiType='ResponseMapInfoMap', baseName='maps', complexType='ResponseMapInfoMap', getter='getMaps', setter='setMaps', description='null', dataType='ResponseMapInfoMap', datatypeWithEnum='ResponseMapInfoMap', dataFormat='null', name='maps', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseMapInfoMap.constructFromObject(data['maps']);', baseType='ResponseMapInfoMap', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseMapInfoMap"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Maps', nameInSnakeCase='MAPS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} maps
     * @type {Array.<CodegenProperty{openApiType='ResponseMapInfoMap', baseName='maps', complexType='ResponseMapInfoMap', getter='getMaps', setter='setMaps', description='null', dataType='ResponseMapInfoMap', datatypeWithEnum='ResponseMapInfoMap', dataFormat='null', name='maps', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseMapInfoMap.constructFromObject(data['maps']);', baseType='ResponseMapInfoMap', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseMapInfoMap"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Maps', nameInSnakeCase='MAPS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>}
     */
    maps;

    

    /**
     * Constructs a new <code>ResponseMapInfo</code>.
     * @alias module:model/ResponseMapInfo
     * @param maps {Array.<CodegenProperty{openApiType='ResponseMapInfoMap', baseName='maps', complexType='ResponseMapInfoMap', getter='getMaps', setter='setMaps', description='null', dataType='ResponseMapInfoMap', datatypeWithEnum='ResponseMapInfoMap', dataFormat='null', name='maps', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ResponseMapInfoMap.constructFromObject(data['maps']);', baseType='ResponseMapInfoMap', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ResponseMapInfoMap"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, hasMore=false, required=false, deprecated=false, secondaryParam=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isLong=false, isNumber=false, isFloat=false, isDouble=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isListContainer=false, isMapContainer=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Maps', nameInSnakeCase='MAPS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false}>} 
     */
    constructor(maps) { 
        
        ResponseMapInfo.initialize(this, maps);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, maps) { 
        obj['maps'] = maps;
    }

    /**
     * Constructs a <code>ResponseMapInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseMapInfo} obj Optional instance to populate.
     * @return {module:model/ResponseMapInfo} The populated <code>ResponseMapInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseMapInfo();

            if (data.hasOwnProperty('maps')) {
                obj['maps'] = ApiClient.convertToType(data['maps'], [ResponseMapInfoMap]);
            }
        }
        return obj;
    }
}



export default ResponseMapInfo;

