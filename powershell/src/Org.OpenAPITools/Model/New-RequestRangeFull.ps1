function New-RequestRangeFull {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${enabled},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Int32]
        ${maxUnderscoreresults},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Int32]
        ${width}
    )

    Process {
        'Creating object: traveltimeplatform.Model.RequestRangeFull' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName traveltimeplatform.Model.RequestRangeFull -ArgumentList @(
            ${enabled},
            ${maxUnderscoreresults},
            ${width}
        )
    }
}
