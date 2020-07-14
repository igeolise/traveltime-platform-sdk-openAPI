<?php
/**
 * ResponseTimeFilterPostcodeSectorsResult
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
 * Class representing the ResponseTimeFilterPostcodeSectorsResult model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeFilterPostcodeSectorsResult 
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
     * @var OpenAPI\Server\Model\ResponseTimeFilterPostcodeSector[]
     * @SerializedName("sectors")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ResponseTimeFilterPostcodeSector")
     * })
     * @Type("array<OpenAPI\Server\Model\ResponseTimeFilterPostcodeSector>")
     */
    protected $sectors;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->searchId = isset($data['searchId']) ? $data['searchId'] : null;
        $this->sectors = isset($data['sectors']) ? $data['sectors'] : null;
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
     * Gets sectors.
     *
     * @return OpenAPI\Server\Model\ResponseTimeFilterPostcodeSector[]
     */
    public function getSectors(): array
    {
        return $this->sectors;
    }

    /**
     * Sets sectors.
     *
     * @param OpenAPI\Server\Model\ResponseTimeFilterPostcodeSector[] $sectors
     *
     * @return $this
     */
    public function setSectors(array $sectors)
    {
        $this->sectors = $sectors;

        return $this;
    }
}


