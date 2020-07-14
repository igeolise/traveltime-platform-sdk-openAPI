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

.PARAMETER ManyToOne
No description available.
.PARAMETER OneToMany
No description available.
.OUTPUTS

RequestTimeFilterFastArrivalSearches<PSCustomObject>
#>

function Initialize-RequestTimeFilterFastArrivalSearches {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${ManyToOne},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${OneToMany}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => RequestTimeFilterFastArrivalSearches' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "many_to_one" = ${ManyToOne}
            "one_to_many" = ${OneToMany}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to RequestTimeFilterFastArrivalSearches<PSCustomObject>

.DESCRIPTION

Convert from JSON to RequestTimeFilterFastArrivalSearches<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

RequestTimeFilterFastArrivalSearches<PSCustomObject>
#>
function ConvertFrom-JsonToRequestTimeFilterFastArrivalSearches {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => RequestTimeFilterFastArrivalSearches' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in RequestTimeFilterFastArrivalSearches
        $AllProperties = ("many_to_one", "one_to_many")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "many_to_one"))) { #optional property not found
            $ManyToOne = $null
        } else {
            $ManyToOne = $JsonParameters.PSobject.Properties["many_to_one"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "one_to_many"))) { #optional property not found
            $OneToMany = $null
        } else {
            $OneToMany = $JsonParameters.PSobject.Properties["one_to_many"].value
        }

        $PSO = [PSCustomObject]@{
            "many_to_one" = ${ManyToOne}
            "one_to_many" = ${OneToMany}
        }

        return $PSO
    }

}
