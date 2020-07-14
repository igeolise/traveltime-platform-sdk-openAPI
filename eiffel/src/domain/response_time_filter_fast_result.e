note
 description:"[
		TravelTime API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: 1.2.1
 	    Contact: support@igeolise.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class RESPONSE_TIME_FILTER_FAST_RESULT 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    search_id: detachable STRING_32 
      
    locations: detachable LIST [RESPONSE_TIME_FILTER_FAST_LOCATION] 
      
    unreachable: detachable LIST [STRING_32] 
      

feature -- Change Element  
 
    set_search_id (a_name: like search_id)
        -- Set 'search_id' with 'a_name'.
      do
        search_id := a_name
      ensure
        search_id_set: search_id = a_name		
      end

    set_locations (a_name: like locations)
        -- Set 'locations' with 'a_name'.
      do
        locations := a_name
      ensure
        locations_set: locations = a_name		
      end

    set_unreachable (a_name: like unreachable)
        -- Set 'unreachable' with 'a_name'.
      do
        unreachable := a_name
      ensure
        unreachable_set: unreachable = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_TIME_FILTER_FAST_RESULT%N")
        if attached search_id as l_search_id then
          Result.append ("%Nsearch_id:")
          Result.append (l_search_id.out)
          Result.append ("%N")    
        end  
        if attached locations as l_locations then
          across l_locations as ic loop
            Result.append ("%N locations:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached unreachable as l_unreachable then
          across l_unreachable as ic loop
            Result.append ("%N unreachable:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


