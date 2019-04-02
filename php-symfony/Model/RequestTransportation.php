<?php
/**
 * RequestTransportation
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
 * Class representing the RequestTransportation model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class RequestTransportation 
{
        /**
     * @var string
     * @SerializedName("type")
     * @Assert\NotNull()
     * @Assert\Choice({ "cycling", "driving", "driving+train", "public_transport", "walking", "coach", "bus", "train", "ferry", "driving+ferry", "cycling+ferry" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $type;

    /**
     * @var int|null
     * @SerializedName("pt_change_delay")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $ptChangeDelay;

    /**
     * @var int|null
     * @SerializedName("walking_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $walkingTime;

    /**
     * @var int|null
     * @SerializedName("driving_time_to_station")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $drivingTimeToStation;

    /**
     * @var int|null
     * @SerializedName("parking_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $parkingTime;

    /**
     * @var int|null
     * @SerializedName("boarding_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $boardingTime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->type = isset($data['type']) ? $data['type'] : null;
        $this->ptChangeDelay = isset($data['ptChangeDelay']) ? $data['ptChangeDelay'] : null;
        $this->walkingTime = isset($data['walkingTime']) ? $data['walkingTime'] : null;
        $this->drivingTimeToStation = isset($data['drivingTimeToStation']) ? $data['drivingTimeToStation'] : null;
        $this->parkingTime = isset($data['parkingTime']) ? $data['parkingTime'] : null;
        $this->boardingTime = isset($data['boardingTime']) ? $data['boardingTime'] : null;
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
     * Gets ptChangeDelay.
     *
     * @return int|null
     */
    public function getPtChangeDelay()
    {
        return $this->ptChangeDelay;
    }

    /**
     * Sets ptChangeDelay.
     *
     * @param int|null $ptChangeDelay
     *
     * @return $this
     */
    public function setPtChangeDelay($ptChangeDelay = null)
    {
        $this->ptChangeDelay = $ptChangeDelay;

        return $this;
    }

    /**
     * Gets walkingTime.
     *
     * @return int|null
     */
    public function getWalkingTime()
    {
        return $this->walkingTime;
    }

    /**
     * Sets walkingTime.
     *
     * @param int|null $walkingTime
     *
     * @return $this
     */
    public function setWalkingTime($walkingTime = null)
    {
        $this->walkingTime = $walkingTime;

        return $this;
    }

    /**
     * Gets drivingTimeToStation.
     *
     * @return int|null
     */
    public function getDrivingTimeToStation()
    {
        return $this->drivingTimeToStation;
    }

    /**
     * Sets drivingTimeToStation.
     *
     * @param int|null $drivingTimeToStation
     *
     * @return $this
     */
    public function setDrivingTimeToStation($drivingTimeToStation = null)
    {
        $this->drivingTimeToStation = $drivingTimeToStation;

        return $this;
    }

    /**
     * Gets parkingTime.
     *
     * @return int|null
     */
    public function getParkingTime()
    {
        return $this->parkingTime;
    }

    /**
     * Sets parkingTime.
     *
     * @param int|null $parkingTime
     *
     * @return $this
     */
    public function setParkingTime($parkingTime = null)
    {
        $this->parkingTime = $parkingTime;

        return $this;
    }

    /**
     * Gets boardingTime.
     *
     * @return int|null
     */
    public function getBoardingTime()
    {
        return $this->boardingTime;
    }

    /**
     * Sets boardingTime.
     *
     * @param int|null $boardingTime
     *
     * @return $this
     */
    public function setBoardingTime($boardingTime = null)
    {
        $this->boardingTime = $boardingTime;

        return $this;
    }
}


