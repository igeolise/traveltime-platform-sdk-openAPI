/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (4.0.0-SNAPSHOT).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import java.math.BigDecimal;
import org.openapitools.model.Client;
import org.openapitools.model.FileSchemaTestClass;
import java.time.LocalDate;
import java.util.Map;
import org.openapitools.model.ModelApiResponse;
import java.time.OffsetDateTime;
import org.openapitools.model.OuterComposite;
import org.springframework.core.io.Resource;
import org.openapitools.model.User;
import org.openapitools.model.XmlItem;
import io.swagger.annotations.*;
import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.context.request.NativeWebRequest;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;
import java.util.Optional;

@Validated
@Api(value = "fake", description = "the fake API")
public interface FakeApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    @ApiOperation(value = "creates an XmlItem", nickname = "createXmlItem", notes = "this route creates an XmlItem", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation") })
    @RequestMapping(value = "/fake/create_xml_item",
        consumes = { "application/xml", "application/xml; charset=utf-8", "application/xml; charset=utf-16", "text/xml", "text/xml; charset=utf-8", "text/xml; charset=utf-16" },
        method = RequestMethod.POST)
    default ResponseEntity<Void> createXmlItem(@ApiParam(value = "XmlItem Body" ,required=true )  @Valid @RequestBody XmlItem xmlItem) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "fakeOuterBooleanSerialize", notes = "Test serialization of outer boolean types", response = Boolean.class, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Output boolean", response = Boolean.class) })
    @RequestMapping(value = "/fake/outer/boolean",
        produces = { "*/*" }, 
        method = RequestMethod.POST)
    default ResponseEntity<Boolean> fakeOuterBooleanSerialize(@ApiParam(value = "Input boolean as post body"  )  @Valid @RequestBody Boolean body) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "fakeOuterCompositeSerialize", notes = "Test serialization of object with outer number type", response = OuterComposite.class, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Output composite", response = OuterComposite.class) })
    @RequestMapping(value = "/fake/outer/composite",
        produces = { "*/*" }, 
        method = RequestMethod.POST)
    default ResponseEntity<OuterComposite> fakeOuterCompositeSerialize(@ApiParam(value = "Input composite as post body"  )  @Valid @RequestBody OuterComposite body) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("*/*"))) {
                    ApiUtil.setExampleResponse(request, "*/*", "{  \"my_string\" : \"my_string\",  \"my_number\" : 0.8008281904610115,  \"my_boolean\" : true}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "fakeOuterNumberSerialize", notes = "Test serialization of outer number types", response = BigDecimal.class, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Output number", response = BigDecimal.class) })
    @RequestMapping(value = "/fake/outer/number",
        produces = { "*/*" }, 
        method = RequestMethod.POST)
    default ResponseEntity<BigDecimal> fakeOuterNumberSerialize(@ApiParam(value = "Input number as post body"  )  @Valid @RequestBody BigDecimal body) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "fakeOuterStringSerialize", notes = "Test serialization of outer string types", response = String.class, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Output string", response = String.class) })
    @RequestMapping(value = "/fake/outer/string",
        produces = { "*/*" }, 
        method = RequestMethod.POST)
    default ResponseEntity<String> fakeOuterStringSerialize(@ApiParam(value = "Input string as post body"  )  @Valid @RequestBody String body) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "testBodyWithFileSchema", notes = "For this test, the body for this request much reference a schema named `File`.", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success") })
    @RequestMapping(value = "/fake/body-with-file-schema",
        consumes = { "application/json" },
        method = RequestMethod.PUT)
    default ResponseEntity<Void> testBodyWithFileSchema(@ApiParam(value = "" ,required=true )  @Valid @RequestBody FileSchemaTestClass body) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "testBodyWithQueryParams", notes = "", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success") })
    @RequestMapping(value = "/fake/body-with-query-params",
        consumes = { "application/json" },
        method = RequestMethod.PUT)
    default ResponseEntity<Void> testBodyWithQueryParams(@NotNull @ApiParam(value = "", required = true) @Valid @RequestParam(value = "query", required = true) String query,@ApiParam(value = "" ,required=true )  @Valid @RequestBody User body) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "To test \"client\" model", nickname = "testClientModel", notes = "To test \"client\" model", response = Client.class, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation", response = Client.class) })
    @RequestMapping(value = "/fake",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.PATCH)
    default ResponseEntity<Client> testClientModel(@ApiParam(value = "client model" ,required=true )  @Valid @RequestBody Client body) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    ApiUtil.setExampleResponse(request, "application/json", "{  \"client\" : \"client\"}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "Fake endpoint for testing various parameters 假端點 偽のエンドポイント 가짜 엔드 포인트 ", nickname = "testEndpointParameters", notes = "Fake endpoint for testing various parameters 假端點 偽のエンドポイント 가짜 엔드 포인트 ", authorizations = {
        @Authorization(value = "http_basic_test")
    }, tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 400, message = "Invalid username supplied"),
        @ApiResponse(code = 404, message = "User not found") })
    @RequestMapping(value = "/fake",
        consumes = { "application/x-www-form-urlencoded" },
        method = RequestMethod.POST)
    default ResponseEntity<Void> testEndpointParameters(@ApiParam(value = "None", required=true) @RequestParam(value="number", required=true)  BigDecimal number,@ApiParam(value = "None", required=true) @RequestParam(value="double", required=true)  Double _double,@ApiParam(value = "None", required=true) @RequestParam(value="pattern_without_delimiter", required=true)  String patternWithoutDelimiter,@ApiParam(value = "None", required=true) @RequestParam(value="byte", required=true)  byte[] _byte,@ApiParam(value = "None") @RequestParam(value="integer", required=false)  Integer integer,@ApiParam(value = "None") @RequestParam(value="int32", required=false)  Integer int32,@ApiParam(value = "None") @RequestParam(value="int64", required=false)  Long int64,@ApiParam(value = "None") @RequestParam(value="float", required=false)  Float _float,@ApiParam(value = "None") @RequestParam(value="string", required=false)  String string,@ApiParam(value = "file detail") @Valid @RequestPart("file") MultipartFile binary,@ApiParam(value = "None") @RequestParam(value="date", required=false)  LocalDate date,@ApiParam(value = "None") @RequestParam(value="dateTime", required=false)  OffsetDateTime dateTime,@ApiParam(value = "None") @RequestParam(value="password", required=false)  String password,@ApiParam(value = "None") @RequestParam(value="callback", required=false)  String paramCallback) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "To test enum parameters", nickname = "testEnumParameters", notes = "To test enum parameters", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 400, message = "Invalid request"),
        @ApiResponse(code = 404, message = "Not found") })
    @RequestMapping(value = "/fake",
        consumes = { "application/x-www-form-urlencoded" },
        method = RequestMethod.GET)
    default ResponseEntity<Void> testEnumParameters(@ApiParam(value = "Header parameter enum test (string array)" , allowableValues=">, $") @RequestHeader(value="enum_header_string_array", required=false) Optional<List<String>> enumHeaderStringArray,@ApiParam(value = "Header parameter enum test (string)" , allowableValues="_abc, -efg, (xyz)", defaultValue="-efg") @RequestHeader(value="enum_header_string", required=false) Optional<String> enumHeaderString,@ApiParam(value = "Query parameter enum test (string array)", allowableValues = ">, $") @Valid @RequestParam(value = "enum_query_string_array", required = false) Optional<List<String>> enumQueryStringArray,@ApiParam(value = "Query parameter enum test (string)", allowableValues = "_abc, -efg, (xyz)", defaultValue = "-efg") @Valid @RequestParam(value = "enum_query_string", required = false, defaultValue="-efg") Optional<String> enumQueryString,@ApiParam(value = "Query parameter enum test (double)", allowableValues = "1, -2") @Valid @RequestParam(value = "enum_query_integer", required = false) Optional<Integer> enumQueryInteger,@ApiParam(value = "Query parameter enum test (double)", allowableValues = "1.1, -1.2") @Valid @RequestParam(value = "enum_query_double", required = false) Optional<Double> enumQueryDouble,@ApiParam(value = "Form parameter enum test (string array)", allowableValues=">, $") @RequestParam(value="enum_form_string_array", required=false)  List<String> enumFormStringArray,@ApiParam(value = "Form parameter enum test (string)", allowableValues="_abc, -efg, (xyz)", defaultValue="-efg") @RequestParam(value="enum_form_string", required=false)  String enumFormString) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "Fake endpoint to test group parameters (optional)", nickname = "testGroupParameters", notes = "Fake endpoint to test group parameters (optional)", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 400, message = "Someting wrong") })
    @RequestMapping(value = "/fake",
        method = RequestMethod.DELETE)
    default ResponseEntity<Void> testGroupParameters(@NotNull @ApiParam(value = "Required String in group parameters", required = true) @Valid @RequestParam(value = "required_string_group", required = true) Integer requiredStringGroup,@ApiParam(value = "Required Boolean in group parameters" ,required=true) @RequestHeader(value="required_boolean_group", required=true) Boolean requiredBooleanGroup,@NotNull @ApiParam(value = "Required Integer in group parameters", required = true) @Valid @RequestParam(value = "required_int64_group", required = true) Long requiredInt64Group,@ApiParam(value = "String in group parameters") @Valid @RequestParam(value = "string_group", required = false) Optional<Integer> stringGroup,@ApiParam(value = "Boolean in group parameters" ) @RequestHeader(value="boolean_group", required=false) Optional<Boolean> booleanGroup,@ApiParam(value = "Integer in group parameters") @Valid @RequestParam(value = "int64_group", required = false) Optional<Long> int64Group) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "test inline additionalProperties", nickname = "testInlineAdditionalProperties", notes = "", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation") })
    @RequestMapping(value = "/fake/inline-additionalProperties",
        consumes = { "application/json" },
        method = RequestMethod.POST)
    default ResponseEntity<Void> testInlineAdditionalProperties(@ApiParam(value = "request body" ,required=true )  @Valid @RequestBody Map<String, String> param) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "test json serialization of form data", nickname = "testJsonFormData", notes = "", tags={ "fake", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation") })
    @RequestMapping(value = "/fake/jsonFormData",
        consumes = { "application/x-www-form-urlencoded" },
        method = RequestMethod.GET)
    default ResponseEntity<Void> testJsonFormData(@ApiParam(value = "field1", required=true) @RequestParam(value="param", required=true)  String param,@ApiParam(value = "field2", required=true) @RequestParam(value="param2", required=true)  String param2) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "uploads an image (required)", nickname = "uploadFileWithRequiredFile", notes = "", response = ModelApiResponse.class, authorizations = {
        @Authorization(value = "petstore_auth", scopes = {
            @AuthorizationScope(scope = "write:pets", description = "modify pets in your account"),
            @AuthorizationScope(scope = "read:pets", description = "read your pets")
            })
    }, tags={ "pet", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation", response = ModelApiResponse.class) })
    @RequestMapping(value = "/fake/{petId}/uploadImageWithRequiredFile",
        produces = { "application/json" }, 
        consumes = { "multipart/form-data" },
        method = RequestMethod.POST)
    default ResponseEntity<ModelApiResponse> uploadFileWithRequiredFile(@ApiParam(value = "ID of pet to update",required=true) @PathVariable("petId") Long petId,@ApiParam(value = "file detail") @Valid @RequestPart("file") MultipartFile requiredFile,@ApiParam(value = "Additional data to pass to server") @RequestParam(value="additionalMetadata", required=false)  String additionalMetadata) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    ApiUtil.setExampleResponse(request, "application/json", "{  \"code\" : 0,  \"type\" : \"type\",  \"message\" : \"message\"}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}
