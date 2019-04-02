note
 description:"[
		TravelTime Platform API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		OpenAPI spec version: 1.0.0
 	    Contact: support@igeolise.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS_RESULT 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    search_id: detachable STRING_32 
      
    districts: detachable LIST [RESPONSE_TIME_FILTER_POSTCODE_DISTRICT] 
      

feature -- Change Element  
 
    set_search_id (a_name: like search_id)
        -- Set 'search_id' with 'a_name'.
      do
        search_id := a_name
      ensure
        search_id_set: search_id = a_name		
      end

    set_districts (a_name: like districts)
        -- Set 'districts' with 'a_name'.
      do
        districts := a_name
      ensure
        districts_set: districts = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_TIME_FILTER_POSTCODE_DISTRICTS_RESULT%N")
        if attached search_id as l_search_id then
          Result.append ("%Nsearch_id:")
          Result.append (l_search_id.out)
          Result.append ("%N")    
        end  
        if attached districts as l_districts then
          across l_districts as ic loop
            Result.append ("%N districts:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


