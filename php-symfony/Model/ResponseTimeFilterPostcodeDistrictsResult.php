<?php
/**
 * ResponseTimeFilterPostcodeDistrictsResult
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
 * Class representing the ResponseTimeFilterPostcodeDistrictsResult model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeFilterPostcodeDistrictsResult 
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
     * @var OpenAPI\Server\Model\ResponseTimeFilterPostcodeDistrict[]
     * @SerializedName("districts")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ResponseTimeFilterPostcodeDistrict")
     * })
     * @Type("array<OpenAPI\Server\Model\ResponseTimeFilterPostcodeDistrict>")
     */
    protected $districts;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->searchId = isset($data['searchId']) ? $data['searchId'] : null;
        $this->districts = isset($data['districts']) ? $data['districts'] : null;
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
     * Gets districts.
     *
     * @return OpenAPI\Server\Model\ResponseTimeFilterPostcodeDistrict[]
     */
    public function getDistricts(): array
    {
        return $this->districts;
    }

    /**
     * Sets districts.
     *
     * @param OpenAPI\Server\Model\ResponseTimeFilterPostcodeDistrict[] $districts
     *
     * @return $this
     */
    public function setDistricts(array $districts)
    {
        $this->districts = $districts;

        return $this;
    }
}


