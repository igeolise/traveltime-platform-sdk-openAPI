function New-RequestTimeMapArrivalSearch {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [traveltimeplatform.Model.Coords]
        ${coords},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [traveltimeplatform.Model.RequestTransportation]
        ${transportation},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Int32]
        ${travelUnderscoretime},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [System.DateTime]
        ${arrivalUnderscoretime},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[traveltimeplatform.Model.RequestTimeMapProperty[]]]
        ${properties},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[traveltimeplatform.Model.RequestRangeNoMaxResults]]
        ${range}
    )

    Process {
        'Creating object: traveltimeplatform.Model.RequestTimeMapArrivalSearch' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName traveltimeplatform.Model.RequestTimeMapArrivalSearch -ArgumentList @(
            ${id},
            ${coords},
            ${transportation},
            ${travelUnderscoretime},
            ${arrivalUnderscoretime},
            ${properties},
            ${range}
        )
    }
}
