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

.PARAMETER DateStart
No description available.
.PARAMETER DateEnd
No description available.
.OUTPUTS

ResponseMapInfoFeaturesPublicTransport<PSCustomObject>
#>

function Initialize-ResponseMapInfoFeaturesPublicTransport {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.DateTime]
        ${DateStart},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.DateTime]
        ${DateEnd}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ResponseMapInfoFeaturesPublicTransport' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$DateStart) {
            throw "invalid value for 'DateStart', 'DateStart' cannot be null."
        }

        if (!$DateEnd) {
            throw "invalid value for 'DateEnd', 'DateEnd' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "date_start" = ${DateStart}
            "date_end" = ${DateEnd}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ResponseMapInfoFeaturesPublicTransport<PSCustomObject>

.DESCRIPTION

Convert from JSON to ResponseMapInfoFeaturesPublicTransport<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ResponseMapInfoFeaturesPublicTransport<PSCustomObject>
#>
function ConvertFrom-JsonToResponseMapInfoFeaturesPublicTransport {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ResponseMapInfoFeaturesPublicTransport' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ResponseMapInfoFeaturesPublicTransport
        $AllProperties = ("date_start", "date_end")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property `date_start` missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "date_start"))) {
            throw "Error! JSON cannot be serialized due to the required property `date_start` missing."
        } else {
            $DateStart = $JsonParameters.PSobject.Properties["date_start"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "date_end"))) {
            throw "Error! JSON cannot be serialized due to the required property `date_end` missing."
        } else {
            $DateEnd = $JsonParameters.PSobject.Properties["date_end"].value
        }

        $PSO = [PSCustomObject]@{
            "date_start" = ${DateStart}
            "date_end" = ${DateEnd}
        }

        return $PSO
    }

}

