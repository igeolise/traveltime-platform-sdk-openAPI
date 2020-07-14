<?php

/**
 * TravelTime API
 * PHP version 7.2
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Please update the test case below to test the model.
 */
namespace OpenAPIServer\Model;

use PHPUnit\Framework\TestCase;
use OpenAPIServer\Model\ResponseGeocodingGeoJsonFeature;

/**
 * ResponseGeocodingGeoJsonFeatureTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ResponseGeocodingGeoJsonFeature
 */
class ResponseGeocodingGeoJsonFeatureTest extends TestCase
{

    /**
     * Setup before running any test cases
     */
    public static function setUpBeforeClass(): void
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp(): void
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown(): void
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass(): void
    {
    }

    /**
     * Test "ResponseGeocodingGeoJsonFeature"
     */
    public function testResponseGeocodingGeoJsonFeature()
    {
        $testResponseGeocodingGeoJsonFeature = new ResponseGeocodingGeoJsonFeature();
        $namespacedClassname = ResponseGeocodingGeoJsonFeature::getModelsNamespace() . '\\ResponseGeocodingGeoJsonFeature';
        $this->assertSame('\\' . ResponseGeocodingGeoJsonFeature::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "ResponseGeocodingGeoJsonFeature" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "type"
     */
    public function testPropertyType()
    {
        $this->markTestIncomplete(
            'Test of "type" property in "ResponseGeocodingGeoJsonFeature" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "geometry"
     */
    public function testPropertyGeometry()
    {
        $this->markTestIncomplete(
            'Test of "geometry" property in "ResponseGeocodingGeoJsonFeature" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "properties"
     */
    public function testPropertyProperties()
    {
        $this->markTestIncomplete(
            'Test of "properties" property in "ResponseGeocodingGeoJsonFeature" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ResponseGeocodingGeoJsonFeature::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
