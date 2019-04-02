<?php
/**
 * ResponseGeocodingProperties
 */
namespace app\Models;

/**
 * ResponseGeocodingProperties
 */
class ResponseGeocodingProperties {

    /** @var string $name */
    private $name;

    /** @var string $label */
    private $label;

    /** @var double $score */
    private $score;

    /** @var string $houseNumber */
    private $houseNumber;

    /** @var string $street */
    private $street;

    /** @var string $region */
    private $region;

    /** @var string $regionCode */
    private $regionCode;

    /** @var string $neighbourhood */
    private $neighbourhood;

    /** @var string $county */
    private $county;

    /** @var string $macroregion */
    private $macroregion;

    /** @var string $city */
    private $city;

    /** @var string $country */
    private $country;

    /** @var string $countryCode */
    private $countryCode;

    /** @var string $continent */
    private $continent;

    /** @var string $postcode */
    private $postcode;

    /** @var \app\Models\ResponseMapInfoFeatures $features */
    private $features;

}
