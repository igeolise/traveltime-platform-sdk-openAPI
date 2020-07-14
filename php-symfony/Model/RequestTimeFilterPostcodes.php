<?php
/**
 * RequestTimeFilterPostcodes
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
 * Class representing the RequestTimeFilterPostcodes model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class RequestTimeFilterPostcodes 
{
        /**
     * @var OpenAPI\Server\Model\RequestTimeFilterPostcodesDepartureSearch[]|null
     * @SerializedName("departure_searches")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\RequestTimeFilterPostcodesDepartureSearch")
     * })
     * @Type("array<OpenAPI\Server\Model\RequestTimeFilterPostcodesDepartureSearch>")
     */
    protected $departureSearches;

    /**
     * @var OpenAPI\Server\Model\RequestTimeFilterPostcodesArrivalSearch[]|null
     * @SerializedName("arrival_searches")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\RequestTimeFilterPostcodesArrivalSearch")
     * })
     * @Type("array<OpenAPI\Server\Model\RequestTimeFilterPostcodesArrivalSearch>")
     */
    protected $arrivalSearches;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->departureSearches = isset($data['departureSearches']) ? $data['departureSearches'] : null;
        $this->arrivalSearches = isset($data['arrivalSearches']) ? $data['arrivalSearches'] : null;
    }

    /**
     * Gets departureSearches.
     *
     * @return OpenAPI\Server\Model\RequestTimeFilterPostcodesDepartureSearch[]|null
     */
    public function getDepartureSearches(): ?array
    {
        return $this->departureSearches;
    }

    /**
     * Sets departureSearches.
     *
     * @param OpenAPI\Server\Model\RequestTimeFilterPostcodesDepartureSearch[]|null $departureSearches
     *
     * @return $this
     */
    public function setDepartureSearches(array $departureSearches = null)
    {
        $this->departureSearches = $departureSearches;

        return $this;
    }

    /**
     * Gets arrivalSearches.
     *
     * @return OpenAPI\Server\Model\RequestTimeFilterPostcodesArrivalSearch[]|null
     */
    public function getArrivalSearches(): ?array
    {
        return $this->arrivalSearches;
    }

    /**
     * Sets arrivalSearches.
     *
     * @param OpenAPI\Server\Model\RequestTimeFilterPostcodesArrivalSearch[]|null $arrivalSearches
     *
     * @return $this
     */
    public function setArrivalSearches(array $arrivalSearches = null)
    {
        $this->arrivalSearches = $arrivalSearches;

        return $this;
    }
}


