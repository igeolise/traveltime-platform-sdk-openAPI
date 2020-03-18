<?php
/**
 * ResponseShape
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
 * Class representing the ResponseShape model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseShape 
{
        /**
     * @var OpenAPI\Server\Model\Coords[]
     * @SerializedName("shell")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\Coords")
     * })
     * @Type("array<OpenAPI\Server\Model\Coords>")
     */
    protected $shell;

    /**
     * @var OpenAPI\Server\Model\Coords[]
     * @SerializedName("holes")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\Coords")
     * })
     * @Type("array<OpenAPI\Server\Model\Coords>")
     */
    protected $holes;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->shell = isset($data['shell']) ? $data['shell'] : null;
        $this->holes = isset($data['holes']) ? $data['holes'] : null;
    }

    /**
     * Gets shell.
     *
     * @return OpenAPI\Server\Model\Coords[]
     */
    public function getShell(): array
    {
        return $this->shell;
    }

    /**
     * Sets shell.
     *
     * @param OpenAPI\Server\Model\Coords[] $shell
     *
     * @return $this
     */
    public function setShell(array $shell): array
    {
        $this->shell = $shell;

        return $this;
    }

    /**
     * Gets holes.
     *
     * @return OpenAPI\Server\Model\Coords[]
     */
    public function getHoles(): array
    {
        return $this->holes;
    }

    /**
     * Sets holes.
     *
     * @param OpenAPI\Server\Model\Coords[] $holes
     *
     * @return $this
     */
    public function setHoles(array $holes): array
    {
        $this->holes = $holes;

        return $this;
    }
}


