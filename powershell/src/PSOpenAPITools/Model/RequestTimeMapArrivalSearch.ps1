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
.PARAMETER Coords
No description available.
.PARAMETER Transportation
No description available.
.PARAMETER TravelTime
No description available.
.PARAMETER ArrivalTime
No description available.
.PARAMETER Properties
No description available.
.PARAMETER Range
No description available.
.OUTPUTS

RequestTimeMapArrivalSearch<PSCustomObject>
#>

function Initialize-RequestTimeMapArrivalSearch {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Coords},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Transportation},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [Int32]
        ${TravelTime},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.DateTime]
        ${ArrivalTime},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Properties},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Range}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => RequestTimeMapArrivalSearch' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$Id) {
            throw "invalid value for 'Id', 'Id' cannot be null."
        }

        if (!$Coords) {
            throw "invalid value for 'Coords', 'Coords' cannot be null."
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

        if (!$ArrivalTime) {
            throw "invalid value for 'ArrivalTime', 'ArrivalTime' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "id" = ${Id}
            "coords" = ${Coords}
            "transportation" = ${Transportation}
            "travel_time" = ${TravelTime}
            "arrival_time" = ${ArrivalTime}
            "properties" = ${Properties}
            "range" = ${Range}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to RequestTimeMapArrivalSearch<PSCustomObject>

.DESCRIPTION

Convert from JSON to RequestTimeMapArrivalSearch<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

RequestTimeMapArrivalSearch<PSCustomObject>
#>
function ConvertFrom-JsonToRequestTimeMapArrivalSearch {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => RequestTimeMapArrivalSearch' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in RequestTimeMapArrivalSearch
        $AllProperties = ("id", "coords", "transportation", "travel_time", "arrival_time", "properties", "range")
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "coords"))) {
            throw "Error! JSON cannot be serialized due to the required property `coords` missing."
        } else {
            $Coords = $JsonParameters.PSobject.Properties["coords"].value
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "arrival_time"))) {
            throw "Error! JSON cannot be serialized due to the required property `arrival_time` missing."
        } else {
            $ArrivalTime = $JsonParameters.PSobject.Properties["arrival_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "properties"))) { #optional property not found
            $Properties = $null
        } else {
            $Properties = $JsonParameters.PSobject.Properties["properties"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "range"))) { #optional property not found
            $Range = $null
        } else {
            $Range = $JsonParameters.PSobject.Properties["range"].value
        }

        $PSO = [PSCustomObject]@{
            "id" = ${Id}
            "coords" = ${Coords}
            "transportation" = ${Transportation}
            "travel_time" = ${TravelTime}
            "arrival_time" = ${ArrivalTime}
            "properties" = ${Properties}
            "range" = ${Range}
        }

        return $PSO
    }

}

