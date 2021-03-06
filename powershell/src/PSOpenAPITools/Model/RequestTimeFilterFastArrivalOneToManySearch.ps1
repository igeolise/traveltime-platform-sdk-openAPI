#
# TravelTime API
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
# Version: 1.2.1
# Contact: support@igeolise.com
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

No summary available.

.DESCRIPTION

No description available.

.PARAMETER Id
No description available.
.PARAMETER DepartureLocationId
No description available.
.PARAMETER ArrivalLocationIds
No description available.
.PARAMETER Transportation
No description available.
.PARAMETER TravelTime
No description available.
.PARAMETER ArrivalTimePeriod
No description available.
.PARAMETER Properties
No description available.
.OUTPUTS

RequestTimeFilterFastArrivalOneToManySearch<PSCustomObject>
#>

function Initialize-RequestTimeFilterFastArrivalOneToManySearch {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${DepartureLocationId},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${ArrivalLocationIds},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Transportation},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [Int32]
        ${TravelTime},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${ArrivalTimePeriod},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Properties}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => RequestTimeFilterFastArrivalOneToManySearch' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$Id) {
            throw "invalid value for 'Id', 'Id' cannot be null."
        }

        if (!$DepartureLocationId) {
            throw "invalid value for 'DepartureLocationId', 'DepartureLocationId' cannot be null."
        }

        if (!$ArrivalLocationIds) {
            throw "invalid value for 'ArrivalLocationIds', 'ArrivalLocationIds' cannot be null."
        }

        if (!$Transportation) {
            throw "invalid value for 'Transportation', 'Transportation' cannot be null."
        }

        if (!$TravelTime) {
            throw "invalid value for 'TravelTime', 'TravelTime' cannot be null."
        }

        if ($TravelTime -gt 14400) {
          throw "invalid value for 'TravelTime', must be smaller than or equal to 14400."
        }

        if ($TravelTime -lt 60) {
          throw "invalid value for 'TravelTime', must be greater than or equal to 60."
        }

        if (!$ArrivalTimePeriod) {
            throw "invalid value for 'ArrivalTimePeriod', 'ArrivalTimePeriod' cannot be null."
        }

        if (!$Properties) {
            throw "invalid value for 'Properties', 'Properties' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "id" = ${Id}
            "departure_location_id" = ${DepartureLocationId}
            "arrival_location_ids" = ${ArrivalLocationIds}
            "transportation" = ${Transportation}
            "travel_time" = ${TravelTime}
            "arrival_time_period" = ${ArrivalTimePeriod}
            "properties" = ${Properties}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to RequestTimeFilterFastArrivalOneToManySearch<PSCustomObject>

.DESCRIPTION

Convert from JSON to RequestTimeFilterFastArrivalOneToManySearch<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

RequestTimeFilterFastArrivalOneToManySearch<PSCustomObject>
#>
function ConvertFrom-JsonToRequestTimeFilterFastArrivalOneToManySearch {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => RequestTimeFilterFastArrivalOneToManySearch' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in RequestTimeFilterFastArrivalOneToManySearch
        $AllProperties = ("id", "departure_location_id", "arrival_location_ids", "transportation", "travel_time", "arrival_time_period", "properties")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property `id` missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) {
            throw "Error! JSON cannot be serialized due to the required property `id` missing."
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "departure_location_id"))) {
            throw "Error! JSON cannot be serialized due to the required property `departure_location_id` missing."
        } else {
            $DepartureLocationId = $JsonParameters.PSobject.Properties["departure_location_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "arrival_location_ids"))) {
            throw "Error! JSON cannot be serialized due to the required property `arrival_location_ids` missing."
        } else {
            $ArrivalLocationIds = $JsonParameters.PSobject.Properties["arrival_location_ids"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "transportation"))) {
            throw "Error! JSON cannot be serialized due to the required property `transportation` missing."
        } else {
            $Transportation = $JsonParameters.PSobject.Properties["transportation"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "travel_time"))) {
            throw "Error! JSON cannot be serialized due to the required property `travel_time` missing."
        } else {
            $TravelTime = $JsonParameters.PSobject.Properties["travel_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "arrival_time_period"))) {
            throw "Error! JSON cannot be serialized due to the required property `arrival_time_period` missing."
        } else {
            $ArrivalTimePeriod = $JsonParameters.PSobject.Properties["arrival_time_period"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "properties"))) {
            throw "Error! JSON cannot be serialized due to the required property `properties` missing."
        } else {
            $Properties = $JsonParameters.PSobject.Properties["properties"].value
        }

        $PSO = [PSCustomObject]@{
            "id" = ${Id}
            "departure_location_id" = ${DepartureLocationId}
            "arrival_location_ids" = ${ArrivalLocationIds}
            "transportation" = ${Transportation}
            "travel_time" = ${TravelTime}
            "arrival_time_period" = ${ArrivalTimePeriod}
            "properties" = ${Properties}
        }

        return $PSO
    }

}

