note
 description:"[
		TravelTime Platform API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: 1.0.0
 	    Contact: support@igeolise.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class REQUEST_TIME_FILTER_FAST 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    locations: detachable LIST [REQUEST_LOCATION] 
      
    arrival_searches: detachable REQUEST_TIME_FILTER_FAST_ARRIVAL_SEARCHES 
      

feature -- Change Element  
 
    set_locations (a_name: like locations)
        -- Set 'locations' with 'a_name'.
      do
        locations := a_name
      ensure
        locations_set: locations = a_name		
      end

    set_arrival_searches (a_name: like arrival_searches)
        -- Set 'arrival_searches' with 'a_name'.
      do
        arrival_searches := a_name
      ensure
        arrival_searches_set: arrival_searches = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass REQUEST_TIME_FILTER_FAST%N")
        if attached locations as l_locations then
          across l_locations as ic loop
            Result.append ("%N locations:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached arrival_searches as l_arrival_searches then
          Result.append ("%Narrival_searches:")
          Result.append (l_arrival_searches.out)
          Result.append ("%N")    
        end  
      end
end


