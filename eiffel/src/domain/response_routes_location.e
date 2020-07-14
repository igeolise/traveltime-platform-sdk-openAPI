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
class RESPONSE_ROUTES_LOCATION 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      
    properties: detachable LIST [RESPONSE_ROUTES_PROPERTIES] 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_properties (a_name: like properties)
        -- Set 'properties' with 'a_name'.
      do
        properties := a_name
      ensure
        properties_set: properties = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_ROUTES_LOCATION%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached properties as l_properties then
          across l_properties as ic loop
            Result.append ("%N properties:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


