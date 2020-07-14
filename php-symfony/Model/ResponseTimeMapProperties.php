<?php
/**
 * ResponseTimeMapProperties
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
 * Class representing the ResponseTimeMapProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeMapProperties 
{
        /**
     * @var bool|null
     * @SerializedName("is_only_walking")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected $isOnlyWalking;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->isOnlyWalking = isset($data['isOnlyWalking']) ? $data['isOnlyWalking'] : null;
    }

    /**
     * Gets isOnlyWalking.
     *
     * @return bool|null
     */
    public function isIsOnlyWalking()
    {
        return $this->isOnlyWalking;
    }

    /**
     * Sets isOnlyWalking.
     *
     * @param bool|null $isOnlyWalking
     *
     * @return $this
     */
    public function setIsOnlyWalking($isOnlyWalking = null)
    {
        $this->isOnlyWalking = $isOnlyWalking;

        return $this;
    }
}


