<?php
/**
 * ResponseError
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
 * The version of the OpenAPI document: 1.0.0
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
 * Class representing the ResponseError model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseError 
{
        /**
     * @var int|null
     * @SerializedName("http_status")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $httpStatus;

    /**
     * @var int|null
     * @SerializedName("error_code")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $errorCode;

    /**
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $description;

    /**
     * @var string|null
     * @SerializedName("documentation_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $documentationLink;

    /**
     * @var string[]|null
     * @SerializedName("additional_info")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected $additionalInfo;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->httpStatus = isset($data['httpStatus']) ? $data['httpStatus'] : null;
        $this->errorCode = isset($data['errorCode']) ? $data['errorCode'] : null;
        $this->description = isset($data['description']) ? $data['description'] : null;
        $this->documentationLink = isset($data['documentationLink']) ? $data['documentationLink'] : null;
        $this->additionalInfo = isset($data['additionalInfo']) ? $data['additionalInfo'] : null;
    }

    /**
     * Gets httpStatus.
     *
     * @return int|null
     */
    public function getHttpStatus()
    {
        return $this->httpStatus;
    }

    /**
     * Sets httpStatus.
     *
     * @param int|null $httpStatus
     *
     * @return $this
     */
    public function setHttpStatus($httpStatus = null)
    {
        $this->httpStatus = $httpStatus;

        return $this;
    }

    /**
     * Gets errorCode.
     *
     * @return int|null
     */
    public function getErrorCode()
    {
        return $this->errorCode;
    }

    /**
     * Sets errorCode.
     *
     * @param int|null $errorCode
     *
     * @return $this
     */
    public function setErrorCode($errorCode = null)
    {
        $this->errorCode = $errorCode;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription()
    {
        return $this->description;
    }

    /**
     * Sets description.
     *
     * @param string|null $description
     *
     * @return $this
     */
    public function setDescription($description = null)
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets documentationLink.
     *
     * @return string|null
     */
    public function getDocumentationLink()
    {
        return $this->documentationLink;
    }

    /**
     * Sets documentationLink.
     *
     * @param string|null $documentationLink
     *
     * @return $this
     */
    public function setDocumentationLink($documentationLink = null)
    {
        $this->documentationLink = $documentationLink;

        return $this;
    }

    /**
     * Gets additionalInfo.
     *
     * @return string[]|null
     */
    public function getAdditionalInfo()
    {
        return $this->additionalInfo;
    }

    /**
     * Sets additionalInfo.
     *
     * @param string[]|null $additionalInfo
     *
     * @return $this
     */
    public function setAdditionalInfo(array $additionalInfo = null)
    {
        $this->additionalInfo = $additionalInfo;

        return $this;
    }
}


