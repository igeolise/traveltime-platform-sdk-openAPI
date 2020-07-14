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

.PARAMETER TicketsTotal
No description available.
.OUTPUTS

ResponseFaresFast<PSCustomObject>
#>

function Initialize-ResponseFaresFast {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${TicketsTotal}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ResponseFaresFast' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$TicketsTotal) {
            throw "invalid value for 'TicketsTotal', 'TicketsTotal' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "tickets_total" = ${TicketsTotal}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ResponseFaresFast<PSCustomObject>

.DESCRIPTION

Convert from JSON to ResponseFaresFast<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ResponseFaresFast<PSCustomObject>
#>
function ConvertFrom-JsonToResponseFaresFast {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ResponseFaresFast' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ResponseFaresFast
        $AllProperties = ("tickets_total")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property `tickets_total` missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "tickets_total"))) {
            throw "Error! JSON cannot be serialized due to the required property `tickets_total` missing."
        } else {
            $TicketsTotal = $JsonParameters.PSobject.Properties["tickets_total"].value
        }

        $PSO = [PSCustomObject]@{
            "tickets_total" = ${TicketsTotal}
        }

        return $PSO
    }

}

