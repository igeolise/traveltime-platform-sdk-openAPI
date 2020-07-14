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
class REQUEST_UNION_ON_INTERSECTION 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      
    search_ids: detachable LIST [STRING_32] 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_search_ids (a_name: like search_ids)
        -- Set 'search_ids' with 'a_name'.
      do
        search_ids := a_name
      ensure
        search_ids_set: search_ids = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass REQUEST_UNION_ON_INTERSECTION%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached search_ids as l_search_ids then
          across l_search_ids as ic loop
            Result.append ("%N search_ids:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


