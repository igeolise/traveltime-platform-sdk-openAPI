<?php
/**
 * ResponseTimeFilterPostcodeDistrictProperties
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
 * Class representing the ResponseTimeFilterPostcodeDistrictProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeFilterPostcodeDistrictProperties 
{
        /**
     * @var OpenAPI\Server\Model\ResponseTravelTimeStatistics|null
     * @SerializedName("travel_time_reachable")
     * @Assert\Type("OpenAPI\Server\Model\ResponseTravelTimeStatistics")
     * @Type("OpenAPI\Server\Model\ResponseTravelTimeStatistics")
     */
    protected $travelTimeReachable;

    /**
     * @var OpenAPI\Server\Model\ResponseTravelTimeStatistics|null
     * @SerializedName("travel_time_all")
     * @Assert\Type("OpenAPI\Server\Model\ResponseTravelTimeStatistics")
     * @Type("OpenAPI\Server\Model\ResponseTravelTimeStatistics")
     */
    protected $travelTimeAll;

    /**
     * @var double|null
     * @SerializedName("coverage")
     * @Assert\Type("double")
     * @Type("double")
     */
    protected $coverage;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->travelTimeReachable = isset($data['travelTimeReachable']) ? $data['travelTimeReachable'] : null;
        $this->travelTimeAll = isset($data['travelTimeAll']) ? $data['travelTimeAll'] : null;
        $this->coverage = isset($data['coverage']) ? $data['coverage'] : null;
    }

    /**
     * Gets travelTimeReachable.
     *
     * @return OpenAPI\Server\Model\ResponseTravelTimeStatistics|null
     */
    public function getTravelTimeReachable()
    {
        return $this->travelTimeReachable;
    }

    /**
     * Sets travelTimeReachable.
     *
     * @param OpenAPI\Server\Model\ResponseTravelTimeStatistics|null $travelTimeReachable
     *
     * @return $this
     */
    public function setTravelTimeReachable(ResponseTravelTimeStatistics $travelTimeReachable = null)
    {
        $this->travelTimeReachable = $travelTimeReachable;

        return $this;
    }

    /**
     * Gets travelTimeAll.
     *
     * @return OpenAPI\Server\Model\ResponseTravelTimeStatistics|null
     */
    public function getTravelTimeAll()
    {
        return $this->travelTimeAll;
    }

    /**
     * Sets travelTimeAll.
     *
     * @param OpenAPI\Server\Model\ResponseTravelTimeStatistics|null $travelTimeAll
     *
     * @return $this
     */
    public function setTravelTimeAll(ResponseTravelTimeStatistics $travelTimeAll = null)
    {
        $this->travelTimeAll = $travelTimeAll;

        return $this;
    }

    /**
     * Gets coverage.
     *
     * @return double|null
     */
    public function getCoverage()
    {
        return $this->coverage;
    }

    /**
     * Sets coverage.
     *
     * @param double|null $coverage
     *
     * @return $this
     */
    public function setCoverage($coverage = null)
    {
        $this->coverage = $coverage;

        return $this;
    }
}


