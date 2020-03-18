<?php
/**
 * ResponseGeocodingGeometry
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
 * Class representing the ResponseGeocodingGeometry model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseGeocodingGeometry 
{
        /**
     * @var string
     * @SerializedName("type")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $type;

    /**
     * @var double[]
     * @SerializedName("coordinates")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("double")
     * })
     * @Type("array<double>")
     */
    protected $coordinates;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->type = isset($data['type']) ? $data['type'] : null;
        $this->coordinates = isset($data['coordinates']) ? $data['coordinates'] : null;
    }

    /**
     * Gets type.
     *
     * @return string
     */
    public function getType()
    {
        return $this->type;
    }

    /**
     * Sets type.
     *
     * @param string $type
     *
     * @return $this
     */
    public function setType($type)
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets coordinates.
     *
     * @return double[]
     */
    public function getCoordinates(): array
    {
        return $this->coordinates;
    }

    /**
     * Sets coordinates.
     *
     * @param double[] $coordinates
     *
     * @return $this
     */
    public function setCoordinates(array $coordinates): array
    {
        $this->coordinates = $coordinates;

        return $this;
    }
}


