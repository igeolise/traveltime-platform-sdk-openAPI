<?php
/**
 * RequestTimeFilterPostcodesArrivalSearch
 *
 * PHP version 7.2
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.0.0-SNAPSHOT
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
 * RequestTimeFilterPostcodesArrivalSearch Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class RequestTimeFilterPostcodesArrivalSearch implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'RequestTimeFilterPostcodesArrivalSearch';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'id' => 'string',
        'transportation' => '\OpenAPI\Client\Model\RequestTransportation',
        'travel_time' => 'int',
        'arrival_time' => '\DateTime',
        'properties' => '\OpenAPI\Client\Model\RequestTimeFilterPostcodesProperty[]',
        'range' => '\OpenAPI\Client\Model\RequestRangeFull'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'id' => null,
        'transportation' => null,
        'travel_time' => null,
        'arrival_time' => 'date-time',
        'properties' => null,
        'range' => null
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
        'id' => 'id',
        'transportation' => 'transportation',
        'travel_time' => 'travel_time',
        'arrival_time' => 'arrival_time',
        'properties' => 'properties',
        'range' => 'range'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'id' => 'setId',
        'transportation' => 'setTransportation',
        'travel_time' => 'setTravelTime',
        'arrival_time' => 'setArrivalTime',
        'properties' => 'setProperties',
        'range' => 'setRange'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'id' => 'getId',
        'transportation' => 'getTransportation',
        'travel_time' => 'getTravelTime',
        'arrival_time' => 'getArrivalTime',
        'properties' => 'getProperties',
        'range' => 'getRange'
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
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['transportation'] = isset($data['transportation']) ? $data['transportation'] : null;
        $this->container['travel_time'] = isset($data['travel_time']) ? $data['travel_time'] : null;
        $this->container['arrival_time'] = isset($data['arrival_time']) ? $data['arrival_time'] : null;
        $this->container['properties'] = isset($data['properties']) ? $data['properties'] : null;
        $this->container['range'] = isset($data['range']) ? $data['range'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['id'] === null) {
            $invalidProperties[] = "'id' can't be null";
        }
        if ($this->container['transportation'] === null) {
            $invalidProperties[] = "'transportation' can't be null";
        }
        if ($this->container['travel_time'] === null) {
            $invalidProperties[] = "'travel_time' can't be null";
        }
        if (($this->container['travel_time'] > 14400)) {
            $invalidProperties[] = "invalid value for 'travel_time', must be smaller than or equal to 14400.";
        }

        if (($this->container['travel_time'] < 60)) {
            $invalidProperties[] = "invalid value for 'travel_time', must be bigger than or equal to 60.";
        }

        if ($this->container['arrival_time'] === null) {
            $invalidProperties[] = "'arrival_time' can't be null";
        }
        if ($this->container['properties'] === null) {
            $invalidProperties[] = "'properties' can't be null";
        }
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
     * Gets id
     *
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param string $id id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets transportation
     *
     * @return \OpenAPI\Client\Model\RequestTransportation
     */
    public function getTransportation()
    {
        return $this->container['transportation'];
    }

    /**
     * Sets transportation
     *
     * @param \OpenAPI\Client\Model\RequestTransportation $transportation transportation
     *
     * @return $this
     */
    public function setTransportation($transportation)
    {
        $this->container['transportation'] = $transportation;

        return $this;
    }

    /**
     * Gets travel_time
     *
     * @return int
     */
    public function getTravelTime()
    {
        return $this->container['travel_time'];
    }

    /**
     * Sets travel_time
     *
     * @param int $travel_time travel_time
     *
     * @return $this
     */
    public function setTravelTime($travel_time)
    {

        if (($travel_time > 14400)) {
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterPostcodesArrivalSearch., must be smaller than or equal to 14400.');
        }
        if (($travel_time < 60)) {
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterPostcodesArrivalSearch., must be bigger than or equal to 60.');
        }

        $this->container['travel_time'] = $travel_time;

        return $this;
    }

    /**
     * Gets arrival_time
     *
     * @return \DateTime
     */
    public function getArrivalTime()
    {
        return $this->container['arrival_time'];
    }

    /**
     * Sets arrival_time
     *
     * @param \DateTime $arrival_time arrival_time
     *
     * @return $this
     */
    public function setArrivalTime($arrival_time)
    {
        $this->container['arrival_time'] = $arrival_time;

        return $this;
    }

    /**
     * Gets properties
     *
     * @return \OpenAPI\Client\Model\RequestTimeFilterPostcodesProperty[]
     */
    public function getProperties()
    {
        return $this->container['properties'];
    }

    /**
     * Sets properties
     *
     * @param \OpenAPI\Client\Model\RequestTimeFilterPostcodesProperty[] $properties properties
     *
     * @return $this
     */
    public function setProperties($properties)
    {
        $this->container['properties'] = $properties;

        return $this;
    }

    /**
     * Gets range
     *
     * @return \OpenAPI\Client\Model\RequestRangeFull|null
     */
    public function getRange()
    {
        return $this->container['range'];
    }

    /**
     * Sets range
     *
     * @param \OpenAPI\Client\Model\RequestRangeFull|null $range range
     *
     * @return $this
     */
    public function setRange($range)
    {
        $this->container['range'] = $range;

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

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


