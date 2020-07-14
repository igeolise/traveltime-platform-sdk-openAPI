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

.OUTPUTS

RequestRoutesProperty<PSCustomObject>
#>

function Initialize-RequestRoutesProperty {
    [CmdletBinding()]
    Param (
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => RequestRoutesProperty' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to RequestRoutesProperty<PSCustomObject>

.DESCRIPTION

Convert from JSON to RequestRoutesProperty<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

RequestRoutesProperty<PSCustomObject>
#>
function ConvertFrom-JsonToRequestRoutesProperty {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => RequestRoutesProperty' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in RequestRoutesProperty
        $AllProperties = ()
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        $PSO = [PSCustomObject]@{
        }

        return $PSO
    }

}

