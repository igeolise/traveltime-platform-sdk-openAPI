<?php
/**
 * ResponseTimeMapWktResult
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
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
 * Class representing the ResponseTimeMapWktResult model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeMapWktResult 
{
        /**
     * @var string
     * @SerializedName("search_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $searchId;

    /**
     * @var string
     * @SerializedName("shape")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $shape;

    /**
     * @var OpenAPI\Server\Model\ResponseTimeMapProperties
     * @SerializedName("properties")
     * @Assert\NotNull()
     * @Assert\Type("OpenAPI\Server\Model\ResponseTimeMapProperties")
     * @Type("OpenAPI\Server\Model\ResponseTimeMapProperties")
     */
    protected $properties;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->searchId = isset($data['searchId']) ? $data['searchId'] : null;
        $this->shape = isset($data['shape']) ? $data['shape'] : null;
        $this->properties = isset($data['properties']) ? $data['properties'] : null;
    }

    /**
     * Gets searchId.
     *
     * @return string
     */
    public function getSearchId()
    {
        return $this->searchId;
    }

    /**
     * Sets searchId.
     *
     * @param string $searchId
     *
     * @return $this
     */
    public function setSearchId($searchId)
    {
        $this->searchId = $searchId;

        return $this;
    }

    /**
     * Gets shape.
     *
     * @return string
     */
    public function getShape()
    {
        return $this->shape;
    }

    /**
     * Sets shape.
     *
     * @param string $shape
     *
     * @return $this
     */
    public function setShape($shape)
    {
        $this->shape = $shape;

        return $this;
    }

    /**
     * Gets properties.
     *
     * @return OpenAPI\Server\Model\ResponseTimeMapProperties
     */
    public function getProperties()
    {
        return $this->properties;
    }

    /**
     * Sets properties.
     *
     * @param OpenAPI\Server\Model\ResponseTimeMapProperties $properties
     *
     * @return $this
     */
    public function setProperties(ResponseTimeMapProperties $properties)
    {
        $this->properties = $properties;

        return $this;
    }
}


