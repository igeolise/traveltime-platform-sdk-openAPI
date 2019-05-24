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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package org.openapitools.api;

import org.openapitools.model.Category;
import java.io.File;
import java.util.List;
import java.util.Map;
import org.openapitools.model.ModelApiResponse;
import org.openapitools.model.Pet;
import org.openapitools.model.Tag;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;
import org.apache.cxf.jaxrs.ext.multipart.Attachment;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;
import com.fasterxml.jackson.jaxrs.xml.JacksonXMLProvider;
import org.apache.cxf.jaxrs.provider.MultipartProvider;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;

import org.junit.runner.RunWith;
import org.springframework.test.context.junit4.SpringRunner;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.boot.test.context.SpringBootTest.WebEnvironment;
import org.springframework.boot.web.server.LocalServerPort;
import java.io.File;
import java.util.Set;
import javax.validation.ConstraintViolation;
import javax.validation.Validation;
import javax.validation.Validator;
import javax.validation.ValidatorFactory;
import com.fasterxml.jackson.databind.node.JsonNodeFactory;
import com.fasterxml.jackson.databind.node.ObjectNode;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.openapitools.codegen.utils.JsonCache;

/**
 * OpenAPI Petstore
 *
 * <p>This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API tests for PetApi.
 */
@RunWith(SpringRunner.class)
@SpringBootTest(webEnvironment = WebEnvironment.RANDOM_PORT)
public class PetApiTest {
    private static Validator validator;
    private static JsonCache cache;

    @BeforeClass
    public static void beforeClass() throws Exception {
        File cacheFile = new File(System.getProperty("jaxrs.test.client.json",
                "C:\\source\\GitHub\\demonfiddler\\openapi-generator\\samples\\server\\petstore\\jaxrs-cxf-test-data\\src\\main\\resources\\test-data.json"));
        cache = JsonCache.Factory.instance.get("test-data").load(cacheFile).child("/org.openapitools.api/PetApi");

        validator = Validation.buildDefaultValidatorFactory().getValidator();
    }

    @LocalServerPort
    private int serverPort;

    private PetApi api;

    @Before
    public void setup() {
        List<?> providers = Arrays.asList(new JacksonJsonProvider(), new JacksonXMLProvider(), new MultipartProvider());

        api = JAXRSClientFactory.create("http://localhost:" + serverPort + "/services", PetApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client); 
    }

    private void validate(Object o) {
        assertNotNull(o);
        Set<ConstraintViolation<Object>> violations = validator.validate(o);
        if (!violations.isEmpty()) {
            StringBuilder message = new StringBuilder("Validation failed");
            for (ConstraintViolation<Object> violation : violations)
                message.append("; ").append(violation.getPropertyPath()).append(": ").append(violation.getMessage());
            fail(message.toString());
        }
    }

    
    /**
     * Add a new pet to the store
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void addPetTest() throws Exception {
        Pet body = cache.getObject("/addPet/body", Pet.class);
        api.addPet(body);
    }
    
    /**
     * Deletes a pet
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void deletePetTest() throws Exception {
        Long petId = cache.getLong("/deletePet/petId");
        String apiKey = cache.getString("/deletePet/apiKey");
        api.deletePet(petId, apiKey);
    }
    
    /**
     * Finds Pets by status
     *
     * Multiple status values can be provided with comma separated strings
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void findPetsByStatusTest() throws Exception {
        List<String> status = cache.getObjects("/findPetsByStatus/status", String.class);
        List<Pet> response = api.findPetsByStatus(status);
        // TODO: complete test assertions
        validate(response);
    }
    
    /**
     * Finds Pets by tags
     *
     * Multiple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void findPetsByTagsTest() throws Exception {
        List<String> tags = cache.getObjects("/findPetsByTags/tags", String.class);
        List<Pet> response = api.findPetsByTags(tags);
        // TODO: complete test assertions
        validate(response);
    }
    
    /**
     * Find pet by ID
     *
     * Returns a single pet
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void getPetByIdTest() throws Exception {
        Long petId = cache.getLong("/getPetById/petId");
        Pet response = api.getPetById(petId);
        // TODO: complete test assertions
        validate(response);
    }
    
    /**
     * Update an existing pet
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void updatePetTest() throws Exception {
        Pet body = cache.getObject("/updatePet/body", Pet.class);
        api.updatePet(body);
    }

    // Currently failing - see https://github.com/OpenAPITools/openapi-generator/issues/2193.
    /**
     * Updates a pet in the store with form data
     *
     * @throws ApiException if the API call fails
     */
    @Test
    @Ignore
    public void updatePetWithFormTest() throws Exception {
        Long petId = cache.getLong("/updatePetWithForm/petId");
        String name = cache.getString("/updatePetWithForm/name");
        String status = cache.getString("/updatePetWithForm/status");
        api.updatePetWithForm(petId, name, status);
    }
    
    // Currently failing - see https://github.com/OpenAPITools/openapi-generator/issues/2193.
    /**
     * uploads an image
     *
     * @throws ApiException if the API call fails
     */
    @Test
    @Ignore
    public void uploadFileTest() throws Exception {
        Long petId = cache.getLong("/uploadFile/petId");
        String additionalMetadata = cache.getString("/uploadFile/additionalMetadata");
        Attachment file = new Attachment("file", MediaType.TEXT_PLAIN, "Dummy attachment content");
        ModelApiResponse response = api.uploadFile(petId, additionalMetadata, file);
        // TODO: complete test assertions
        validate(response);
    }
    
    // Currently failing - see https://github.com/OpenAPITools/openapi-generator/issues/2193.
    /**
     * uploads an image (required)
     *
     * @throws ApiException if the API call fails
     */
    @Test
    @Ignore
    public void uploadFileWithRequiredFileTest() throws Exception {
        Long petId = cache.getLong("/uploadFileWithRequiredFile/petId");
        Attachment requiredFile = new Attachment("requiredFile", MediaType.TEXT_PLAIN, "Dummy attachment content");
        String additionalMetadata = cache.getString("/uploadFileWithRequiredFile/additionalMetadata");
        ModelApiResponse response = api.uploadFileWithRequiredFile(petId, requiredFile, additionalMetadata);
        // TODO: complete test assertions
        validate(response);
    }
    
}
