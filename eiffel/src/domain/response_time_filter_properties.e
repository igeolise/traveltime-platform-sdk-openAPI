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
class RESPONSE_TIME_FILTER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    travel_time: INTEGER_32 
      
    distance: INTEGER_32 
      
    distance_breakdown: detachable LIST [RESPONSE_DISTANCE_BREAKDOWN_ITEM] 
      
    fares: detachable RESPONSE_FARES 
      
    route: detachable RESPONSE_ROUTE 
      

feature -- Change Element  
 
    set_travel_time (a_name: like travel_time)
        -- Set 'travel_time' with 'a_name'.
      do
        travel_time := a_name
      ensure
        travel_time_set: travel_time = a_name		
      end

    set_distance (a_name: like distance)
        -- Set 'distance' with 'a_name'.
      do
        distance := a_name
      ensure
        distance_set: distance = a_name		
      end

    set_distance_breakdown (a_name: like distance_breakdown)
        -- Set 'distance_breakdown' with 'a_name'.
      do
        distance_breakdown := a_name
      ensure
        distance_breakdown_set: distance_breakdown = a_name		
      end

    set_fares (a_name: like fares)
        -- Set 'fares' with 'a_name'.
      do
        fares := a_name
      ensure
        fares_set: fares = a_name		
      end

    set_route (a_name: like route)
        -- Set 'route' with 'a_name'.
      do
        route := a_name
      ensure
        route_set: route = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_TIME_FILTER_PROPERTIES%N")
        if attached travel_time as l_travel_time then
          Result.append ("%Ntravel_time:")
          Result.append (l_travel_time.out)
          Result.append ("%N")    
        end  
        if attached distance as l_distance then
          Result.append ("%Ndistance:")
          Result.append (l_distance.out)
          Result.append ("%N")    
        end  
        if attached distance_breakdown as l_distance_breakdown then
          across l_distance_breakdown as ic loop
            Result.append ("%N distance_breakdown:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached fares as l_fares then
          Result.append ("%Nfares:")
          Result.append (l_fares.out)
          Result.append ("%N")    
        end  
        if attached route as l_route then
          Result.append ("%Nroute:")
          Result.append (l_route.out)
          Result.append ("%N")    
        end  
      end
end


