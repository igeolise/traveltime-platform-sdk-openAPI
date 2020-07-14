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
class RESPONSE_GEOCODING_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable STRING_32 
      
    label: detachable STRING_32 
      
    score: REAL_64 
      
    house_number: detachable STRING_32 
      
    street: detachable STRING_32 
      
    region: detachable STRING_32 
      
    region_code: detachable STRING_32 
      
    neighbourhood: detachable STRING_32 
      
    county: detachable STRING_32 
      
    macroregion: detachable STRING_32 
      
    city: detachable STRING_32 
      
    country: detachable STRING_32 
      
    country_code: detachable STRING_32 
      
    continent: detachable STRING_32 
      
    postcode: detachable STRING_32 
      
    features: detachable RESPONSE_MAP_INFO_FEATURES 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_label (a_name: like label)
        -- Set 'label' with 'a_name'.
      do
        label := a_name
      ensure
        label_set: label = a_name		
      end

    set_score (a_name: like score)
        -- Set 'score' with 'a_name'.
      do
        score := a_name
      ensure
        score_set: score = a_name		
      end

    set_house_number (a_name: like house_number)
        -- Set 'house_number' with 'a_name'.
      do
        house_number := a_name
      ensure
        house_number_set: house_number = a_name		
      end

    set_street (a_name: like street)
        -- Set 'street' with 'a_name'.
      do
        street := a_name
      ensure
        street_set: street = a_name		
      end

    set_region (a_name: like region)
        -- Set 'region' with 'a_name'.
      do
        region := a_name
      ensure
        region_set: region = a_name		
      end

    set_region_code (a_name: like region_code)
        -- Set 'region_code' with 'a_name'.
      do
        region_code := a_name
      ensure
        region_code_set: region_code = a_name		
      end

    set_neighbourhood (a_name: like neighbourhood)
        -- Set 'neighbourhood' with 'a_name'.
      do
        neighbourhood := a_name
      ensure
        neighbourhood_set: neighbourhood = a_name		
      end

    set_county (a_name: like county)
        -- Set 'county' with 'a_name'.
      do
        county := a_name
      ensure
        county_set: county = a_name		
      end

    set_macroregion (a_name: like macroregion)
        -- Set 'macroregion' with 'a_name'.
      do
        macroregion := a_name
      ensure
        macroregion_set: macroregion = a_name		
      end

    set_city (a_name: like city)
        -- Set 'city' with 'a_name'.
      do
        city := a_name
      ensure
        city_set: city = a_name		
      end

    set_country (a_name: like country)
        -- Set 'country' with 'a_name'.
      do
        country := a_name
      ensure
        country_set: country = a_name		
      end

    set_country_code (a_name: like country_code)
        -- Set 'country_code' with 'a_name'.
      do
        country_code := a_name
      ensure
        country_code_set: country_code = a_name		
      end

    set_continent (a_name: like continent)
        -- Set 'continent' with 'a_name'.
      do
        continent := a_name
      ensure
        continent_set: continent = a_name		
      end

    set_postcode (a_name: like postcode)
        -- Set 'postcode' with 'a_name'.
      do
        postcode := a_name
      ensure
        postcode_set: postcode = a_name		
      end

    set_features (a_name: like features)
        -- Set 'features' with 'a_name'.
      do
        features := a_name
      ensure
        features_set: features = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_GEOCODING_PROPERTIES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached label as l_label then
          Result.append ("%Nlabel:")
          Result.append (l_label.out)
          Result.append ("%N")    
        end  
        if attached score as l_score then
          Result.append ("%Nscore:")
          Result.append (l_score.out)
          Result.append ("%N")    
        end  
        if attached house_number as l_house_number then
          Result.append ("%Nhouse_number:")
          Result.append (l_house_number.out)
          Result.append ("%N")    
        end  
        if attached street as l_street then
          Result.append ("%Nstreet:")
          Result.append (l_street.out)
          Result.append ("%N")    
        end  
        if attached region as l_region then
          Result.append ("%Nregion:")
          Result.append (l_region.out)
          Result.append ("%N")    
        end  
        if attached region_code as l_region_code then
          Result.append ("%Nregion_code:")
          Result.append (l_region_code.out)
          Result.append ("%N")    
        end  
        if attached neighbourhood as l_neighbourhood then
          Result.append ("%Nneighbourhood:")
          Result.append (l_neighbourhood.out)
          Result.append ("%N")    
        end  
        if attached county as l_county then
          Result.append ("%Ncounty:")
          Result.append (l_county.out)
          Result.append ("%N")    
        end  
        if attached macroregion as l_macroregion then
          Result.append ("%Nmacroregion:")
          Result.append (l_macroregion.out)
          Result.append ("%N")    
        end  
        if attached city as l_city then
          Result.append ("%Ncity:")
          Result.append (l_city.out)
          Result.append ("%N")    
        end  
        if attached country as l_country then
          Result.append ("%Ncountry:")
          Result.append (l_country.out)
          Result.append ("%N")    
        end  
        if attached country_code as l_country_code then
          Result.append ("%Ncountry_code:")
          Result.append (l_country_code.out)
          Result.append ("%N")    
        end  
        if attached continent as l_continent then
          Result.append ("%Ncontinent:")
          Result.append (l_continent.out)
          Result.append ("%N")    
        end  
        if attached postcode as l_postcode then
          Result.append ("%Npostcode:")
          Result.append (l_postcode.out)
          Result.append ("%N")    
        end  
        if attached features as l_features then
          Result.append ("%Nfeatures:")
          Result.append (l_features.out)
          Result.append ("%N")    
        end  
      end
end


