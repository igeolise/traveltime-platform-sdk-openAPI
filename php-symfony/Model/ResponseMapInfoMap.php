<?php
/**
 * ResponseMapInfoMap
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
 * The version of the OpenAPI document: 1.0.0
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
 * Class representing the ResponseMapInfoMap model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseMapInfoMap 
{
        /**
     * @var string
     * @SerializedName("name")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $name;

    /**
     * @var OpenAPI\Server\Model\ResponseMapInfoFeatures
     * @SerializedName("features")
     * @Assert\NotNull()
     * @Assert\Type("OpenAPI\Server\Model\ResponseMapInfoFeatures")
     * @Type("OpenAPI\Server\Model\ResponseMapInfoFeatures")
     */
    protected $features;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->features = isset($data['features']) ? $data['features'] : null;
    }

    /**
     * Gets name.
     *
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param string $name
     *
     * @return $this
     */
    public function setName($name)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets features.
     *
     * @return OpenAPI\Server\Model\ResponseMapInfoFeatures
     */
    public function getFeatures(): ResponseMapInfoFeatures
    {
        return $this->features;
    }

    /**
     * Sets features.
     *
     * @param OpenAPI\Server\Model\ResponseMapInfoFeatures $features
     *
     * @return $this
     */
    public function setFeatures(ResponseMapInfoFeatures $features): ResponseMapInfoFeatures
    {
        $this->features = $features;

        return $this;
    }
}


