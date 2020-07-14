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
use OpenAPIServer\Model\RequestTimeFilterArrivalSearch;

/**
 * RequestTimeFilterArrivalSearchTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\RequestTimeFilterArrivalSearch
 */
class RequestTimeFilterArrivalSearchTest extends TestCase
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
     * Test "RequestTimeFilterArrivalSearch"
     */
    public function testRequestTimeFilterArrivalSearch()
    {
        $testRequestTimeFilterArrivalSearch = new RequestTimeFilterArrivalSearch();
        $namespacedClassname = RequestTimeFilterArrivalSearch::getModelsNamespace() . '\\RequestTimeFilterArrivalSearch';
        $this->assertSame('\\' . RequestTimeFilterArrivalSearch::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "id"
     */
    public function testPropertyId()
    {
        $this->markTestIncomplete(
            'Test of "id" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "departureLocationIds"
     */
    public function testPropertyDepartureLocationIds()
    {
        $this->markTestIncomplete(
            'Test of "departureLocationIds" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "arrivalLocationId"
     */
    public function testPropertyArrivalLocationId()
    {
        $this->markTestIncomplete(
            'Test of "arrivalLocationId" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "transportation"
     */
    public function testPropertyTransportation()
    {
        $this->markTestIncomplete(
            'Test of "transportation" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "travelTime"
     */
    public function testPropertyTravelTime()
    {
        $this->markTestIncomplete(
            'Test of "travelTime" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "arrivalTime"
     */
    public function testPropertyArrivalTime()
    {
        $this->markTestIncomplete(
            'Test of "arrivalTime" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "properties"
     */
    public function testPropertyProperties()
    {
        $this->markTestIncomplete(
            'Test of "properties" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "range"
     */
    public function testPropertyRange()
    {
        $this->markTestIncomplete(
            'Test of "range" property in "RequestTimeFilterArrivalSearch" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = RequestTimeFilterArrivalSearch::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}