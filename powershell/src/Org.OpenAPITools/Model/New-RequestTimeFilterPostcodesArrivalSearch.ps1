function New-RequestTimeFilterPostcodesArrivalSearch {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [traveltimeplatform.Model.RequestTransportation]
        ${transportation},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Int32]
        ${travelUnderscoretime},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [System.DateTime]
        ${arrivalUnderscoretime},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [traveltimeplatform.Model.RequestTimeFilterPostcodesProperty[]]
        ${properties},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[traveltimeplatform.Model.RequestRangeFull]]
        ${range}
    )

    Process {
        'Creating object: traveltimeplatform.Model.RequestTimeFilterPostcodesArrivalSearch' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName traveltimeplatform.Model.RequestTimeFilterPostcodesArrivalSearch -ArgumentList @(
            ${id},
            ${transportation},
            ${travelUnderscoretime},
            ${arrivalUnderscoretime},
            ${properties},
            ${range}
        )
    }
}
