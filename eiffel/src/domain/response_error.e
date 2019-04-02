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
class RESPONSE_ERROR 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    http_status: INTEGER_32 
      
    error_code: INTEGER_32 
      
    description: detachable STRING_32 
      
    documentation_link: detachable STRING_32 
      
    additional_info: detachable STRING_TABLE[LIST [STRING_32]] 
      

feature -- Change Element  
 
    set_http_status (a_name: like http_status)
        -- Set 'http_status' with 'a_name'.
      do
        http_status := a_name
      ensure
        http_status_set: http_status = a_name		
      end

    set_error_code (a_name: like error_code)
        -- Set 'error_code' with 'a_name'.
      do
        error_code := a_name
      ensure
        error_code_set: error_code = a_name		
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name		
      end

    set_documentation_link (a_name: like documentation_link)
        -- Set 'documentation_link' with 'a_name'.
      do
        documentation_link := a_name
      ensure
        documentation_link_set: documentation_link = a_name		
      end

    set_additional_info (a_name: like additional_info)
        -- Set 'additional_info' with 'a_name'.
      do
        additional_info := a_name
      ensure
        additional_info_set: additional_info = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_ERROR%N")
        if attached http_status as l_http_status then
          Result.append ("%Nhttp_status:")
          Result.append (l_http_status.out)
          Result.append ("%N")    
        end  
        if attached error_code as l_error_code then
          Result.append ("%Nerror_code:")
          Result.append (l_error_code.out)
          Result.append ("%N")    
        end  
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")    
        end  
        if attached documentation_link as l_documentation_link then
          Result.append ("%Ndocumentation_link:")
          Result.append (l_documentation_link.out)
          Result.append ("%N")    
        end  
        if attached additional_info as l_additional_info then
          Result.append ("%Nadditional_info:")
          across l_additional_info as ic loop
            Result.append ("%N")
            Result.append ("key:")
            Result.append (ic.key.out)
            Result.append (" - ")
            Result.append ("val:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end        
      end
end


