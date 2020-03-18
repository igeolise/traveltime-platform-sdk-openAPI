<?php
/**
 * ResponseTimeFilterPostcodeDistrictProperties
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
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 4.3.0-SNAPSHOT
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
 * ResponseTimeFilterPostcodeDistrictProperties Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ResponseTimeFilterPostcodeDistrictProperties implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ResponseTimeFilterPostcodeDistrictProperties';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'travel_time_reachable' => '\OpenAPI\Client\Model\ResponseTravelTimeStatistics',
        'travel_time_all' => '\OpenAPI\Client\Model\ResponseTravelTimeStatistics',
        'coverage' => 'double'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'travel_time_reachable' => null,
        'travel_time_all' => null,
        'coverage' => 'double'
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
        'travel_time_reachable' => 'travel_time_reachable',
        'travel_time_all' => 'travel_time_all',
        'coverage' => 'coverage'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'travel_time_reachable' => 'setTravelTimeReachable',
        'travel_time_all' => 'setTravelTimeAll',
        'coverage' => 'setCoverage'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'travel_time_reachable' => 'getTravelTimeReachable',
        'travel_time_all' => 'getTravelTimeAll',
        'coverage' => 'getCoverage'
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
        $this->container['travel_time_reachable'] = isset($data['travel_time_reachable']) ? $data['travel_time_reachable'] : null;
        $this->container['travel_time_all'] = isset($data['travel_time_all']) ? $data['travel_time_all'] : null;
        $this->container['coverage'] = isset($data['coverage']) ? $data['coverage'] : null;
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
     * Gets travel_time_reachable
     *
     * @return \OpenAPI\Client\Model\ResponseTravelTimeStatistics|null
     */
    public function getTravelTimeReachable()
    {
        return $this->container['travel_time_reachable'];
    }

    /**
     * Sets travel_time_reachable
     *
     * @param \OpenAPI\Client\Model\ResponseTravelTimeStatistics|null $travel_time_reachable travel_time_reachable
     *
     * @return $this
     */
    public function setTravelTimeReachable($travel_time_reachable)
    {
        $this->container['travel_time_reachable'] = $travel_time_reachable;

        return $this;
    }

    /**
     * Gets travel_time_all
     *
     * @return \OpenAPI\Client\Model\ResponseTravelTimeStatistics|null
     */
    public function getTravelTimeAll()
    {
        return $this->container['travel_time_all'];
    }

    /**
     * Sets travel_time_all
     *
     * @param \OpenAPI\Client\Model\ResponseTravelTimeStatistics|null $travel_time_all travel_time_all
     *
     * @return $this
     */
    public function setTravelTimeAll($travel_time_all)
    {
        $this->container['travel_time_all'] = $travel_time_all;

        return $this;
    }

    /**
     * Gets coverage
     *
     * @return double|null
     */
    public function getCoverage()
    {
        return $this->container['coverage'];
    }

    /**
     * Sets coverage
     *
     * @param double|null $coverage coverage
     *
     * @return $this
     */
    public function setCoverage($coverage)
    {
        $this->container['coverage'] = $coverage;

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


