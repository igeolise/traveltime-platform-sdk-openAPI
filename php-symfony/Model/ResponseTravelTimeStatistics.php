<?php
/**
 * ResponseTravelTimeStatistics
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
 * Class representing the ResponseTravelTimeStatistics model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTravelTimeStatistics 
{
        /**
     * @var int
     * @SerializedName("min")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $min;

    /**
     * @var int
     * @SerializedName("max")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $max;

    /**
     * @var int
     * @SerializedName("mean")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $mean;

    /**
     * @var int
     * @SerializedName("median")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $median;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->min = isset($data['min']) ? $data['min'] : null;
        $this->max = isset($data['max']) ? $data['max'] : null;
        $this->mean = isset($data['mean']) ? $data['mean'] : null;
        $this->median = isset($data['median']) ? $data['median'] : null;
    }

    /**
     * Gets min.
     *
     * @return int
     */
    public function getMin()
    {
        return $this->min;
    }

    /**
     * Sets min.
     *
     * @param int $min
     *
     * @return $this
     */
    public function setMin($min)
    {
        $this->min = $min;

        return $this;
    }

    /**
     * Gets max.
     *
     * @return int
     */
    public function getMax()
    {
        return $this->max;
    }

    /**
     * Sets max.
     *
     * @param int $max
     *
     * @return $this
     */
    public function setMax($max)
    {
        $this->max = $max;

        return $this;
    }

    /**
     * Gets mean.
     *
     * @return int
     */
    public function getMean()
    {
        return $this->mean;
    }

    /**
     * Sets mean.
     *
     * @param int $mean
     *
     * @return $this
     */
    public function setMean($mean)
    {
        $this->mean = $mean;

        return $this;
    }

    /**
     * Gets median.
     *
     * @return int
     */
    public function getMedian()
    {
        return $this->median;
    }

    /**
     * Sets median.
     *
     * @param int $median
     *
     * @return $this
     */
    public function setMedian($median)
    {
        $this->median = $median;

        return $this;
    }
}


