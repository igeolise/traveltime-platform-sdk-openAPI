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
use OpenAPIServer\Model\ResponseFares;

/**
 * ResponseFaresTest Class Doc Comment
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 *
 * @coversDefaultClass \OpenAPIServer\Model\ResponseFares
 */
class ResponseFaresTest extends TestCase
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
     * Test "ResponseFares"
     */
    public function testResponseFares()
    {
        $testResponseFares = new ResponseFares();
        $namespacedClassname = ResponseFares::getModelsNamespace() . '\\ResponseFares';
        $this->assertSame('\\' . ResponseFares::class, $namespacedClassname);
        $this->assertTrue(
            class_exists($namespacedClassname),
            sprintf('Assertion failed that "%s" class exists', $namespacedClassname)
        );
        $this->markTestIncomplete(
            'Test of "ResponseFares" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "breakdown"
     */
    public function testPropertyBreakdown()
    {
        $this->markTestIncomplete(
            'Test of "breakdown" property in "ResponseFares" model has not been implemented yet.'
        );
    }

    /**
     * Test attribute "ticketsTotal"
     */
    public function testPropertyTicketsTotal()
    {
        $this->markTestIncomplete(
            'Test of "ticketsTotal" property in "ResponseFares" model has not been implemented yet.'
        );
    }

    /**
     * Test getOpenApiSchema static method
     * @covers ::getOpenApiSchema
     */
    public function testGetOpenApiSchema()
    {
        $schemaArr = ResponseFares::getOpenApiSchema();
        $this->assertIsArray($schemaArr);
    }
}
