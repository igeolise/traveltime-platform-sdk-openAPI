<?php
/**
 * ResponseTimeFilterProperties
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 3.3.4
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * ResponseTimeFilterProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ResponseTimeFilterProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ResponseTimeFilterProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'travel_time' => 'int',
        'distance' => 'int',
        'distance_breakdown' => '\OpenAPI\Client\Model\ResponseDistanceBreakdownItem[]',
        'fares' => '\OpenAPI\Client\Model\ResponseFares',
        'route' => '\OpenAPI\Client\Model\ResponseRoute'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'travel_time' => 'int32',
        'distance' => 'int32',
        'distance_breakdown' => null,
        'fares' => null,
        'route' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'travel_time' => 'travel_time',
        'distance' => 'distance',
        'distance_breakdown' => 'distance_breakdown',
        'fares' => 'fares',
        'route' => 'route'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'travel_time' => 'setTravelTime',
        'distance' => 'setDistance',
        'distance_breakdown' => 'setDistanceBreakdown',
        'fares' => 'setFares',
        'route' => 'setRoute'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'travel_time' => 'getTravelTime',
        'distance' => 'getDistance',
        'distance_breakdown' => 'getDistanceBreakdown',
        'fares' => 'getFares',
        'route' => 'getRoute'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['travel_time'] = isset($data['travel_time']) ? $data['travel_time'] : null;
        $this->container['distance'] = isset($data['distance']) ? $data['distance'] : null;
        $this->container['distance_breakdown'] = isset($data['distance_breakdown']) ? $data['distance_breakdown'] : null;
        $this->container['fares'] = isset($data['fares']) ? $data['fares'] : null;
        $this->container['route'] = isset($data['route']) ? $data['route'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets travel_time
     *
     * @return int|null
     */
    public function getTravelTime()
    {
        return $this->container['travel_time'];
    }

    /**
     * Sets travel_time
     *
     * @param int|null $travel_time travel_time
     *
     * @return $this
     */
    public function setTravelTime($travel_time)
    {
        $this->container['travel_time'] = $travel_time;

        return $this;
    }

    /**
     * Gets distance
     *
     * @return int|null
     */
    public function getDistance()
    {
        return $this->container['distance'];
    }

    /**
     * Sets distance
     *
     * @param int|null $distance distance
     *
     * @return $this
     */
    public function setDistance($distance)
    {
        $this->container['distance'] = $distance;

        return $this;
    }

    /**
     * Gets distance_breakdown
     *
     * @return \OpenAPI\Client\Model\ResponseDistanceBreakdownItem[]|null
     */
    public function getDistanceBreakdown()
    {
        return $this->container['distance_breakdown'];
    }

    /**
     * Sets distance_breakdown
     *
     * @param \OpenAPI\Client\Model\ResponseDistanceBreakdownItem[]|null $distance_breakdown distance_breakdown
     *
     * @return $this
     */
    public function setDistanceBreakdown($distance_breakdown)
    {
        $this->container['distance_breakdown'] = $distance_breakdown;

        return $this;
    }

    /**
     * Gets fares
     *
     * @return \OpenAPI\Client\Model\ResponseFares|null
     */
    public function getFares()
    {
        return $this->container['fares'];
    }

    /**
     * Sets fares
     *
     * @param \OpenAPI\Client\Model\ResponseFares|null $fares fares
     *
     * @return $this
     */
    public function setFares($fares)
    {
        $this->container['fares'] = $fares;

        return $this;
    }

    /**
     * Gets route
     *
     * @return \OpenAPI\Client\Model\ResponseRoute|null
     */
    public function getRoute()
    {
        return $this->container['route'];
    }

    /**
     * Sets route
     *
     * @param \OpenAPI\Client\Model\ResponseRoute|null $route route
     *
     * @return $this
     */
    public function setRoute($route)
    {
        $this->container['route'] = $route;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


