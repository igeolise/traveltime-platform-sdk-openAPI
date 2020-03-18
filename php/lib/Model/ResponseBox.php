<?php
/**
 * ResponseBox
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
 * ResponseBox Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ResponseBox implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ResponseBox';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'min_lat' => 'double',
        'max_lat' => 'double',
        'min_lng' => 'double',
        'max_lng' => 'double'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'min_lat' => 'double',
        'max_lat' => 'double',
        'min_lng' => 'double',
        'max_lng' => 'double'
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
        'min_lat' => 'min_lat',
        'max_lat' => 'max_lat',
        'min_lng' => 'min_lng',
        'max_lng' => 'max_lng'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'min_lat' => 'setMinLat',
        'max_lat' => 'setMaxLat',
        'min_lng' => 'setMinLng',
        'max_lng' => 'setMaxLng'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'min_lat' => 'getMinLat',
        'max_lat' => 'getMaxLat',
        'min_lng' => 'getMinLng',
        'max_lng' => 'getMaxLng'
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
        $this->container['min_lat'] = isset($data['min_lat']) ? $data['min_lat'] : null;
        $this->container['max_lat'] = isset($data['max_lat']) ? $data['max_lat'] : null;
        $this->container['min_lng'] = isset($data['min_lng']) ? $data['min_lng'] : null;
        $this->container['max_lng'] = isset($data['max_lng']) ? $data['max_lng'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['min_lat'] === null) {
            $invalidProperties[] = "'min_lat' can't be null";
        }
        if ($this->container['max_lat'] === null) {
            $invalidProperties[] = "'max_lat' can't be null";
        }
        if ($this->container['min_lng'] === null) {
            $invalidProperties[] = "'min_lng' can't be null";
        }
        if ($this->container['max_lng'] === null) {
            $invalidProperties[] = "'max_lng' can't be null";
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
     * Gets min_lat
     *
     * @return double
     */
    public function getMinLat()
    {
        return $this->container['min_lat'];
    }

    /**
     * Sets min_lat
     *
     * @param double $min_lat min_lat
     *
     * @return $this
     */
    public function setMinLat($min_lat)
    {
        $this->container['min_lat'] = $min_lat;

        return $this;
    }

    /**
     * Gets max_lat
     *
     * @return double
     */
    public function getMaxLat()
    {
        return $this->container['max_lat'];
    }

    /**
     * Sets max_lat
     *
     * @param double $max_lat max_lat
     *
     * @return $this
     */
    public function setMaxLat($max_lat)
    {
        $this->container['max_lat'] = $max_lat;

        return $this;
    }

    /**
     * Gets min_lng
     *
     * @return double
     */
    public function getMinLng()
    {
        return $this->container['min_lng'];
    }

    /**
     * Sets min_lng
     *
     * @param double $min_lng min_lng
     *
     * @return $this
     */
    public function setMinLng($min_lng)
    {
        $this->container['min_lng'] = $min_lng;

        return $this;
    }

    /**
     * Gets max_lng
     *
     * @return double
     */
    public function getMaxLng()
    {
        return $this->container['max_lng'];
    }

    /**
     * Sets max_lng
     *
     * @param double $max_lng max_lng
     *
     * @return $this
     */
    public function setMaxLng($max_lng)
    {
        $this->container['max_lng'] = $max_lng;

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


