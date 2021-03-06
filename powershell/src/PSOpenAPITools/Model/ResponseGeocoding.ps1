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

.PARAMETER Type
No description available.
.PARAMETER Features
No description available.
.OUTPUTS

ResponseGeocoding<PSCustomObject>
#>

function Initialize-ResponseGeocoding {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Type},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Features}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ResponseGeocoding' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$Type) {
            throw "invalid value for 'Type', 'Type' cannot be null."
        }

        if (!$Features) {
            throw "invalid value for 'Features', 'Features' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "type" = ${Type}
            "features" = ${Features}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ResponseGeocoding<PSCustomObject>

.DESCRIPTION

Convert from JSON to ResponseGeocoding<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ResponseGeocoding<PSCustomObject>
#>
function ConvertFrom-JsonToResponseGeocoding {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ResponseGeocoding' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ResponseGeocoding
        $AllProperties = ("type", "features")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property `type` missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "type"))) {
            throw "Error! JSON cannot be serialized due to the required property `type` missing."
        } else {
            $Type = $JsonParameters.PSobject.Properties["type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "features"))) {
            throw "Error! JSON cannot be serialized due to the required property `features` missing."
        } else {
            $Features = $JsonParameters.PSobject.Properties["features"].value
        }

        $PSO = [PSCustomObject]@{
            "type" = ${Type}
            "features" = ${Features}
        }

        return $PSO
    }

}

