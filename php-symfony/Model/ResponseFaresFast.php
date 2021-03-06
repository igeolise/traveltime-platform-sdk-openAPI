<?php
/**
 * ResponseFaresFast
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
 * Class representing the ResponseFaresFast model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseFaresFast 
{
        /**
     * @var OpenAPI\Server\Model\ResponseFareTicket[]
     * @SerializedName("tickets_total")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ResponseFareTicket")
     * })
     * @Type("array<OpenAPI\Server\Model\ResponseFareTicket>")
     */
    protected $ticketsTotal;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->ticketsTotal = isset($data['ticketsTotal']) ? $data['ticketsTotal'] : null;
    }

    /**
     * Gets ticketsTotal.
     *
     * @return OpenAPI\Server\Model\ResponseFareTicket[]
     */
    public function getTicketsTotal(): array
    {
        return $this->ticketsTotal;
    }

    /**
     * Sets ticketsTotal.
     *
     * @param OpenAPI\Server\Model\ResponseFareTicket[] $ticketsTotal
     *
     * @return $this
     */
    public function setTicketsTotal(array $ticketsTotal)
    {
        $this->ticketsTotal = $ticketsTotal;

        return $this;
    }
}


