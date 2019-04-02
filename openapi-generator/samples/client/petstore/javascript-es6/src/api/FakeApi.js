/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import Client from '../model/Client';
import FileSchemaTestClass from '../model/FileSchemaTestClass';
import OuterComposite from '../model/OuterComposite';
import User from '../model/User';

/**
* Fake service.
* @module api/FakeApi
* @version 1.0.0
*/
export default class FakeApi {

    /**
    * Constructs a new FakeApi. 
    * @alias module:api/FakeApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the fakeOuterBooleanSerialize operation.
     * @callback module:api/FakeApi~fakeOuterBooleanSerializeCallback
     * @param {String} error Error message, if any.
     * @param {Boolean} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Test serialization of outer boolean types
     * @param {Object} opts Optional parameters
     * @param {Boolean} opts.body Input boolean as post body
     * @param {module:api/FakeApi~fakeOuterBooleanSerializeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Boolean}
     */
    fakeOuterBooleanSerialize(opts, callback) {
      opts = opts || {};
      let postBody = opts['body'];


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['*/*'];
      let returnType = 'Boolean';

      return this.apiClient.callApi(
        '/fake/outer/boolean', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the fakeOuterCompositeSerialize operation.
     * @callback module:api/FakeApi~fakeOuterCompositeSerializeCallback
     * @param {String} error Error message, if any.
     * @param {module:model/OuterComposite} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Test serialization of object with outer number type
     * @param {Object} opts Optional parameters
     * @param {module:model/OuterComposite} opts.outerComposite Input composite as post body
     * @param {module:api/FakeApi~fakeOuterCompositeSerializeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/OuterComposite}
     */
    fakeOuterCompositeSerialize(opts, callback) {
      opts = opts || {};
      let postBody = opts['outerComposite'];


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['*/*'];
      let returnType = OuterComposite;

      return this.apiClient.callApi(
        '/fake/outer/composite', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the fakeOuterNumberSerialize operation.
     * @callback module:api/FakeApi~fakeOuterNumberSerializeCallback
     * @param {String} error Error message, if any.
     * @param {Number} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Test serialization of outer number types
     * @param {Object} opts Optional parameters
     * @param {Number} opts.body Input number as post body
     * @param {module:api/FakeApi~fakeOuterNumberSerializeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Number}
     */
    fakeOuterNumberSerialize(opts, callback) {
      opts = opts || {};
      let postBody = opts['body'];


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['*/*'];
      let returnType = 'Number';

      return this.apiClient.callApi(
        '/fake/outer/number', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the fakeOuterStringSerialize operation.
     * @callback module:api/FakeApi~fakeOuterStringSerializeCallback
     * @param {String} error Error message, if any.
     * @param {String} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Test serialization of outer string types
     * @param {Object} opts Optional parameters
     * @param {String} opts.body Input string as post body
     * @param {module:api/FakeApi~fakeOuterStringSerializeCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link String}
     */
    fakeOuterStringSerialize(opts, callback) {
      opts = opts || {};
      let postBody = opts['body'];


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['*/*'];
      let returnType = 'String';

      return this.apiClient.callApi(
        '/fake/outer/string', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testBodyWithFileSchema operation.
     * @callback module:api/FakeApi~testBodyWithFileSchemaCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * For this test, the body for this request much reference a schema named &#x60;File&#x60;.
     * @param {module:model/FileSchemaTestClass} fileSchemaTestClass 
     * @param {module:api/FakeApi~testBodyWithFileSchemaCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testBodyWithFileSchema(fileSchemaTestClass, callback) {
      let postBody = fileSchemaTestClass;

      // verify the required parameter 'fileSchemaTestClass' is set
      if (fileSchemaTestClass === undefined || fileSchemaTestClass === null) {
        throw new Error("Missing the required parameter 'fileSchemaTestClass' when calling testBodyWithFileSchema");
      }


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake/body-with-file-schema', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testBodyWithQueryParams operation.
     * @callback module:api/FakeApi~testBodyWithQueryParamsCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} query 
     * @param {module:model/User} user 
     * @param {module:api/FakeApi~testBodyWithQueryParamsCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testBodyWithQueryParams(query, user, callback) {
      let postBody = user;

      // verify the required parameter 'query' is set
      if (query === undefined || query === null) {
        throw new Error("Missing the required parameter 'query' when calling testBodyWithQueryParams");
      }

      // verify the required parameter 'user' is set
      if (user === undefined || user === null) {
        throw new Error("Missing the required parameter 'user' when calling testBodyWithQueryParams");
      }


      let pathParams = {
      };
      let queryParams = {
        'query': query
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake/body-with-query-params', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testClientModel operation.
     * @callback module:api/FakeApi~testClientModelCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Client} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * To test \&quot;client\&quot; model
     * To test \&quot;client\&quot; model
     * @param {module:model/Client} client client model
     * @param {module:api/FakeApi~testClientModelCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Client}
     */
    testClientModel(client, callback) {
      let postBody = client;

      // verify the required parameter 'client' is set
      if (client === undefined || client === null) {
        throw new Error("Missing the required parameter 'client' when calling testClientModel");
      }


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = Client;

      return this.apiClient.callApi(
        '/fake', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testEndpointParameters operation.
     * @callback module:api/FakeApi~testEndpointParametersCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Fake endpoint for testing various parameters 假端點 偽のエンドポイント 가짜 엔드 포인트 
     * Fake endpoint for testing various parameters 假端點 偽のエンドポイント 가짜 엔드 포인트 
     * @param {Number} _number None
     * @param {Number} _double None
     * @param {String} patternWithoutDelimiter None
     * @param {Blob} _byte None
     * @param {Object} opts Optional parameters
     * @param {Number} opts.integer None
     * @param {Number} opts.int32 None
     * @param {Number} opts.int64 None
     * @param {Number} opts._float None
     * @param {String} opts._string None
     * @param {File} opts.binary None
     * @param {Date} opts._date None
     * @param {Date} opts.dateTime None
     * @param {String} opts.password None
     * @param {String} opts.callback None
     * @param {module:api/FakeApi~testEndpointParametersCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testEndpointParameters(_number, _double, patternWithoutDelimiter, _byte, opts, callback) {
      opts = opts || {};
      let postBody = null;

      // verify the required parameter '_number' is set
      if (_number === undefined || _number === null) {
        throw new Error("Missing the required parameter '_number' when calling testEndpointParameters");
      }

      // verify the required parameter '_double' is set
      if (_double === undefined || _double === null) {
        throw new Error("Missing the required parameter '_double' when calling testEndpointParameters");
      }

      // verify the required parameter 'patternWithoutDelimiter' is set
      if (patternWithoutDelimiter === undefined || patternWithoutDelimiter === null) {
        throw new Error("Missing the required parameter 'patternWithoutDelimiter' when calling testEndpointParameters");
      }

      // verify the required parameter '_byte' is set
      if (_byte === undefined || _byte === null) {
        throw new Error("Missing the required parameter '_byte' when calling testEndpointParameters");
      }


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
        'integer': opts['integer'],
        'int32': opts['int32'],
        'int64': opts['int64'],
        'number': _number,
        'float': opts['_float'],
        'double': _double,
        'string': opts['_string'],
        'pattern_without_delimiter': patternWithoutDelimiter,
        'byte': _byte,
        'binary': opts['binary'],
        'date': opts['_date'],
        'dateTime': opts['dateTime'],
        'password': opts['password'],
        'callback': opts['callback']
      };

      let authNames = ['http_basic_test'];
      let contentTypes = ['application/x-www-form-urlencoded'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testEnumParameters operation.
     * @callback module:api/FakeApi~testEnumParametersCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * To test enum parameters
     * To test enum parameters
     * @param {Object} opts Optional parameters
     * @param {Array.<module:model/String>} opts.enumHeaderStringArray Header parameter enum test (string array)
     * @param {module:model/String} opts.enumHeaderString Header parameter enum test (string) (default to &#39;-efg&#39;)
     * @param {Array.<module:model/String>} opts.enumQueryStringArray Query parameter enum test (string array)
     * @param {module:model/String} opts.enumQueryString Query parameter enum test (string) (default to &#39;-efg&#39;)
     * @param {module:model/Number} opts.enumQueryInteger Query parameter enum test (double)
     * @param {module:model/Number} opts.enumQueryDouble Query parameter enum test (double)
     * @param {Array.<module:model/String>} opts.enumFormStringArray Form parameter enum test (string array) (default to &#39;$&#39;)
     * @param {module:model/String} opts.enumFormString Form parameter enum test (string) (default to &#39;-efg&#39;)
     * @param {module:api/FakeApi~testEnumParametersCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testEnumParameters(opts, callback) {
      opts = opts || {};
      let postBody = null;


      let pathParams = {
      };
      let queryParams = {
        'enum_query_string_array': this.apiClient.buildCollectionParam(opts['enumQueryStringArray'], 'csv'),
        'enum_query_string': opts['enumQueryString'],
        'enum_query_integer': opts['enumQueryInteger'],
        'enum_query_double': opts['enumQueryDouble']
      };
      let headerParams = {
        'enum_header_string_array': opts['enumHeaderStringArray'],
        'enum_header_string': opts['enumHeaderString']
      };
      let formParams = {
        'enum_form_string_array': this.apiClient.buildCollectionParam(opts['enumFormStringArray'], 'csv'),
        'enum_form_string': opts['enumFormString']
      };

      let authNames = [];
      let contentTypes = ['application/x-www-form-urlencoded'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testGroupParameters operation.
     * @callback module:api/FakeApi~testGroupParametersCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Fake endpoint to test group parameters (optional)
     * Fake endpoint to test group parameters (optional)
     * @param {Number} requiredStringGroup Required String in group parameters
     * @param {Boolean} requiredBooleanGroup Required Boolean in group parameters
     * @param {Number} requiredInt64Group Required Integer in group parameters
     * @param {Object} opts Optional parameters
     * @param {Number} opts.stringGroup String in group parameters
     * @param {Boolean} opts.booleanGroup Boolean in group parameters
     * @param {Number} opts.int64Group Integer in group parameters
     * @param {module:api/FakeApi~testGroupParametersCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testGroupParameters(requiredStringGroup, requiredBooleanGroup, requiredInt64Group, opts, callback) {
      opts = opts || {};
      let postBody = null;

      // verify the required parameter 'requiredStringGroup' is set
      if (requiredStringGroup === undefined || requiredStringGroup === null) {
        throw new Error("Missing the required parameter 'requiredStringGroup' when calling testGroupParameters");
      }

      // verify the required parameter 'requiredBooleanGroup' is set
      if (requiredBooleanGroup === undefined || requiredBooleanGroup === null) {
        throw new Error("Missing the required parameter 'requiredBooleanGroup' when calling testGroupParameters");
      }

      // verify the required parameter 'requiredInt64Group' is set
      if (requiredInt64Group === undefined || requiredInt64Group === null) {
        throw new Error("Missing the required parameter 'requiredInt64Group' when calling testGroupParameters");
      }


      let pathParams = {
      };
      let queryParams = {
        'required_string_group': requiredStringGroup,
        'required_int64_group': requiredInt64Group,
        'string_group': opts['stringGroup'],
        'int64_group': opts['int64Group']
      };
      let headerParams = {
        'required_boolean_group': requiredBooleanGroup,
        'boolean_group': opts['booleanGroup']
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testInlineAdditionalProperties operation.
     * @callback module:api/FakeApi~testInlineAdditionalPropertiesCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * test inline additionalProperties
     * @param {Object.<String, {String: String}>} requestBody request body
     * @param {module:api/FakeApi~testInlineAdditionalPropertiesCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testInlineAdditionalProperties(requestBody, callback) {
      let postBody = requestBody;

      // verify the required parameter 'requestBody' is set
      if (requestBody === undefined || requestBody === null) {
        throw new Error("Missing the required parameter 'requestBody' when calling testInlineAdditionalProperties");
      }


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake/inline-additionalProperties', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the testJsonFormData operation.
     * @callback module:api/FakeApi~testJsonFormDataCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * test json serialization of form data
     * @param {String} param field1
     * @param {String} param2 field2
     * @param {module:api/FakeApi~testJsonFormDataCallback} callback The callback function, accepting three arguments: error, data, response
     */
    testJsonFormData(param, param2, callback) {
      let postBody = null;

      // verify the required parameter 'param' is set
      if (param === undefined || param === null) {
        throw new Error("Missing the required parameter 'param' when calling testJsonFormData");
      }

      // verify the required parameter 'param2' is set
      if (param2 === undefined || param2 === null) {
        throw new Error("Missing the required parameter 'param2' when calling testJsonFormData");
      }


      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
        'param': param,
        'param2': param2
      };

      let authNames = [];
      let contentTypes = ['application/x-www-form-urlencoded'];
      let accepts = [];
      let returnType = null;

      return this.apiClient.callApi(
        '/fake/jsonFormData', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }


}
