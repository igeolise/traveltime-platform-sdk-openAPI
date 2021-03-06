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

.PARAMETER Lat
No description available.
.PARAMETER Lng
No description available.
.OUTPUTS

Coords<PSCustomObject>
#>

function Initialize-Coords {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [Double]
        ${Lat},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [Double]
        ${Lng}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => Coords' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$Lat) {
            throw "invalid value for 'Lat', 'Lat' cannot be null."
        }

        if (!$Lng) {
            throw "invalid value for 'Lng', 'Lng' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "lat" = ${Lat}
            "lng" = ${Lng}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to Coords<PSCustomObject>

.DESCRIPTION

Convert from JSON to Coords<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

Coords<PSCustomObject>
#>
function ConvertFrom-JsonToCoords {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => Coords' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in Coords
        $AllProperties = ("lat", "lng")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property `lat` missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "lat"))) {
            throw "Error! JSON cannot be serialized due to the required property `lat` missing."
        } else {
            $Lat = $JsonParameters.PSobject.Properties["lat"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "lng"))) {
            throw "Error! JSON cannot be serialized due to the required property `lng` missing."
        } else {
            $Lng = $JsonParameters.PSobject.Properties["lng"].value
        }

        $PSO = [PSCustomObject]@{
            "lat" = ${Lat}
            "lng" = ${Lng}
        }

        return $PSO
    }

}

