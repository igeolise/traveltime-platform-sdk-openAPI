<?php
/**
 * ResponseSupportedLocations
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the ResponseSupportedLocations model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseSupportedLocations 
{
        /**
     * @var OpenAPI\Server\Model\ResponseSupportedLocation[]
     * @SerializedName("locations")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ResponseSupportedLocation")
     * })
     * @Type("array<OpenAPI\Server\Model\ResponseSupportedLocation>")
     */
    protected $locations;

    /**
     * @var string[]
     * @SerializedName("unsupported_locations")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected $unsupportedLocations;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->locations = isset($data['locations']) ? $data['locations'] : null;
        $this->unsupportedLocations = isset($data['unsupportedLocations']) ? $data['unsupportedLocations'] : null;
    }

    /**
     * Gets locations.
     *
     * @return OpenAPI\Server\Model\ResponseSupportedLocation[]
     */
    public function getLocations(): array
    {
        return $this->locations;
    }

    /**
     * Sets locations.
     *
     * @param OpenAPI\Server\Model\ResponseSupportedLocation[] $locations
     *
     * @return $this
     */
    public function setLocations(array $locations)
    {
        $this->locations = $locations;

        return $this;
    }

    /**
     * Gets unsupportedLocations.
     *
     * @return string[]
     */
    public function getUnsupportedLocations(): array
    {
        return $this->unsupportedLocations;
    }

    /**
     * Sets unsupportedLocations.
     *
     * @param string[] $unsupportedLocations
     *
     * @return $this
     */
    public function setUnsupportedLocations(array $unsupportedLocations)
    {
        $this->unsupportedLocations = $unsupportedLocations;

        return $this;
    }
}


