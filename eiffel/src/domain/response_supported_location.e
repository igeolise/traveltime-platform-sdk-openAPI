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
class RESPONSE_SUPPORTED_LOCATION 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      
    map_name: detachable STRING_32 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_map_name (a_name: like map_name)
        -- Set 'map_name' with 'a_name'.
      do
        map_name := a_name
      ensure
        map_name_set: map_name = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_SUPPORTED_LOCATION%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached map_name as l_map_name then
          Result.append ("%Nmap_name:")
          Result.append (l_map_name.out)
          Result.append ("%N")    
        end  
      end
end


