# OpenapiClient::RequestTimeFilter

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**locations** | [**Array&lt;RequestLocation&gt;**](RequestLocation.md) |  | 
**departure_searches** | [**Array&lt;RequestTimeFilterDepartureSearch&gt;**](RequestTimeFilterDepartureSearch.md) |  | [optional] 
**arrival_searches** | [**Array&lt;RequestTimeFilterArrivalSearch&gt;**](RequestTimeFilterArrivalSearch.md) |  | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::RequestTimeFilter.new(locations: null,
                                 departure_searches: null,
                                 arrival_searches: null)
```


