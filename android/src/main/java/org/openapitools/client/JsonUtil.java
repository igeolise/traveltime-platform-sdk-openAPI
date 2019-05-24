/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import java.util.Date;
import org.openapitools.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
    gsonBuilder.registerTypeAdapter(Date.class, new JsonDeserializer<Date>() {
      public Date deserialize(JsonElement json, Type typeOfT, JsonDeserializationContext context) throws JsonParseException {
        return new Date(json.getAsJsonPrimitive().getAsLong());
      }
    });
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("Coords".equalsIgnoreCase(className)) {
      return new TypeToken<List<Coords>>(){}.getType();
    }
    
    if ("RequestArrivalTimePeriod".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestArrivalTimePeriod>>(){}.getType();
    }
    
    if ("RequestLocation".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestLocation>>(){}.getType();
    }
    
    if ("RequestRangeFull".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRangeFull>>(){}.getType();
    }
    
    if ("RequestRangeNoMaxResults".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRangeNoMaxResults>>(){}.getType();
    }
    
    if ("RequestRoutes".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRoutes>>(){}.getType();
    }
    
    if ("RequestRoutesArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRoutesArrivalSearch>>(){}.getType();
    }
    
    if ("RequestRoutesDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRoutesDepartureSearch>>(){}.getType();
    }
    
    if ("RequestRoutesProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestRoutesProperty>>(){}.getType();
    }
    
    if ("RequestSupportedLocations".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestSupportedLocations>>(){}.getType();
    }
    
    if ("RequestTimeFilter".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilter>>(){}.getType();
    }
    
    if ("RequestTimeFilterArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterArrivalSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterDepartureSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterFast".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterFast>>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalManyToOneSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterFastArrivalManyToOneSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalOneToManySearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterFastArrivalOneToManySearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalSearches".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterFastArrivalSearches>>(){}.getType();
    }
    
    if ("RequestTimeFilterFastProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterFastProperty>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistricts".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeDistricts>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeDistrictsArrivalSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeDistrictsDepartureSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeDistrictsProperty>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectors".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeSectors>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeSectorsArrivalSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeSectorsDepartureSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodeSectorsProperty>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodes".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodes>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodesArrivalSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodesDepartureSearch>>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterPostcodesProperty>>(){}.getType();
    }
    
    if ("RequestTimeFilterProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeFilterProperty>>(){}.getType();
    }
    
    if ("RequestTimeMap".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeMap>>(){}.getType();
    }
    
    if ("RequestTimeMapArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeMapArrivalSearch>>(){}.getType();
    }
    
    if ("RequestTimeMapDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeMapDepartureSearch>>(){}.getType();
    }
    
    if ("RequestTimeMapProperty".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTimeMapProperty>>(){}.getType();
    }
    
    if ("RequestTransportation".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTransportation>>(){}.getType();
    }
    
    if ("RequestTransportationFast".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestTransportationFast>>(){}.getType();
    }
    
    if ("RequestUnionOnIntersection".equalsIgnoreCase(className)) {
      return new TypeToken<List<RequestUnionOnIntersection>>(){}.getType();
    }
    
    if ("ResponseBoundingBox".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseBoundingBox>>(){}.getType();
    }
    
    if ("ResponseBox".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseBox>>(){}.getType();
    }
    
    if ("ResponseDistanceBreakdownItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseDistanceBreakdownItem>>(){}.getType();
    }
    
    if ("ResponseError".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseError>>(){}.getType();
    }
    
    if ("ResponseFareTicket".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseFareTicket>>(){}.getType();
    }
    
    if ("ResponseFares".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseFares>>(){}.getType();
    }
    
    if ("ResponseFaresBreakdownItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseFaresBreakdownItem>>(){}.getType();
    }
    
    if ("ResponseFaresFast".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseFaresFast>>(){}.getType();
    }
    
    if ("ResponseGeocoding".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseGeocoding>>(){}.getType();
    }
    
    if ("ResponseGeocodingGeoJsonFeature".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseGeocodingGeoJsonFeature>>(){}.getType();
    }
    
    if ("ResponseGeocodingGeometry".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseGeocodingGeometry>>(){}.getType();
    }
    
    if ("ResponseGeocodingProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseGeocodingProperties>>(){}.getType();
    }
    
    if ("ResponseMapInfo".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseMapInfo>>(){}.getType();
    }
    
    if ("ResponseMapInfoFeatures".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseMapInfoFeatures>>(){}.getType();
    }
    
    if ("ResponseMapInfoFeaturesPublicTransport".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseMapInfoFeaturesPublicTransport>>(){}.getType();
    }
    
    if ("ResponseMapInfoMap".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseMapInfoMap>>(){}.getType();
    }
    
    if ("ResponseRoute".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoute>>(){}.getType();
    }
    
    if ("ResponseRoutePart".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoutePart>>(){}.getType();
    }
    
    if ("ResponseRoutes".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoutes>>(){}.getType();
    }
    
    if ("ResponseRoutesLocation".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoutesLocation>>(){}.getType();
    }
    
    if ("ResponseRoutesProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoutesProperties>>(){}.getType();
    }
    
    if ("ResponseRoutesResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseRoutesResult>>(){}.getType();
    }
    
    if ("ResponseShape".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseShape>>(){}.getType();
    }
    
    if ("ResponseSupportedLocation".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseSupportedLocation>>(){}.getType();
    }
    
    if ("ResponseSupportedLocations".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseSupportedLocations>>(){}.getType();
    }
    
    if ("ResponseTimeFilter".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilter>>(){}.getType();
    }
    
    if ("ResponseTimeFilterFast".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterFast>>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastLocation".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterFastLocation>>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterFastProperties>>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterFastResult>>(){}.getType();
    }
    
    if ("ResponseTimeFilterLocation".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterLocation>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcode".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcode>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrict".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeDistrict>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrictProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeDistrictProperties>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistricts".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeDistricts>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrictsResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeDistrictsResult>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSector".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeSector>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectorProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeSectorProperties>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectors".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeSectors>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectorsResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodeSectorsResult>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodes".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodes>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodesProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodesProperties>>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodesResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterPostcodesResult>>(){}.getType();
    }
    
    if ("ResponseTimeFilterProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterProperties>>(){}.getType();
    }
    
    if ("ResponseTimeFilterResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeFilterResult>>(){}.getType();
    }
    
    if ("ResponseTimeMap".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMap>>(){}.getType();
    }
    
    if ("ResponseTimeMapBoundingBoxes".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapBoundingBoxes>>(){}.getType();
    }
    
    if ("ResponseTimeMapBoundingBoxesResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapBoundingBoxesResult>>(){}.getType();
    }
    
    if ("ResponseTimeMapProperties".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapProperties>>(){}.getType();
    }
    
    if ("ResponseTimeMapResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapResult>>(){}.getType();
    }
    
    if ("ResponseTimeMapWkt".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapWkt>>(){}.getType();
    }
    
    if ("ResponseTimeMapWktResult".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTimeMapWktResult>>(){}.getType();
    }
    
    if ("ResponseTransportationMode".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTransportationMode>>(){}.getType();
    }
    
    if ("ResponseTravelTimeStatistics".equalsIgnoreCase(className)) {
      return new TypeToken<List<ResponseTravelTimeStatistics>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("Coords".equalsIgnoreCase(className)) {
      return new TypeToken<Coords>(){}.getType();
    }
    
    if ("RequestArrivalTimePeriod".equalsIgnoreCase(className)) {
      return new TypeToken<RequestArrivalTimePeriod>(){}.getType();
    }
    
    if ("RequestLocation".equalsIgnoreCase(className)) {
      return new TypeToken<RequestLocation>(){}.getType();
    }
    
    if ("RequestRangeFull".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRangeFull>(){}.getType();
    }
    
    if ("RequestRangeNoMaxResults".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRangeNoMaxResults>(){}.getType();
    }
    
    if ("RequestRoutes".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRoutes>(){}.getType();
    }
    
    if ("RequestRoutesArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRoutesArrivalSearch>(){}.getType();
    }
    
    if ("RequestRoutesDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRoutesDepartureSearch>(){}.getType();
    }
    
    if ("RequestRoutesProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestRoutesProperty>(){}.getType();
    }
    
    if ("RequestSupportedLocations".equalsIgnoreCase(className)) {
      return new TypeToken<RequestSupportedLocations>(){}.getType();
    }
    
    if ("RequestTimeFilter".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilter>(){}.getType();
    }
    
    if ("RequestTimeFilterArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterArrivalSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterDepartureSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterFast".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterFast>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalManyToOneSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterFastArrivalManyToOneSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalOneToManySearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterFastArrivalOneToManySearch>(){}.getType();
    }
    
    if ("RequestTimeFilterFastArrivalSearches".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterFastArrivalSearches>(){}.getType();
    }
    
    if ("RequestTimeFilterFastProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterFastProperty>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistricts".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeDistricts>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeDistrictsArrivalSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeDistrictsDepartureSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeDistrictsProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeDistrictsProperty>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectors".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeSectors>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeSectorsArrivalSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeSectorsDepartureSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodeSectorsProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodeSectorsProperty>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodes".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodes>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodesArrivalSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodesDepartureSearch>(){}.getType();
    }
    
    if ("RequestTimeFilterPostcodesProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterPostcodesProperty>(){}.getType();
    }
    
    if ("RequestTimeFilterProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeFilterProperty>(){}.getType();
    }
    
    if ("RequestTimeMap".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeMap>(){}.getType();
    }
    
    if ("RequestTimeMapArrivalSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeMapArrivalSearch>(){}.getType();
    }
    
    if ("RequestTimeMapDepartureSearch".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeMapDepartureSearch>(){}.getType();
    }
    
    if ("RequestTimeMapProperty".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTimeMapProperty>(){}.getType();
    }
    
    if ("RequestTransportation".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTransportation>(){}.getType();
    }
    
    if ("RequestTransportationFast".equalsIgnoreCase(className)) {
      return new TypeToken<RequestTransportationFast>(){}.getType();
    }
    
    if ("RequestUnionOnIntersection".equalsIgnoreCase(className)) {
      return new TypeToken<RequestUnionOnIntersection>(){}.getType();
    }
    
    if ("ResponseBoundingBox".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseBoundingBox>(){}.getType();
    }
    
    if ("ResponseBox".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseBox>(){}.getType();
    }
    
    if ("ResponseDistanceBreakdownItem".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseDistanceBreakdownItem>(){}.getType();
    }
    
    if ("ResponseError".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseError>(){}.getType();
    }
    
    if ("ResponseFareTicket".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseFareTicket>(){}.getType();
    }
    
    if ("ResponseFares".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseFares>(){}.getType();
    }
    
    if ("ResponseFaresBreakdownItem".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseFaresBreakdownItem>(){}.getType();
    }
    
    if ("ResponseFaresFast".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseFaresFast>(){}.getType();
    }
    
    if ("ResponseGeocoding".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseGeocoding>(){}.getType();
    }
    
    if ("ResponseGeocodingGeoJsonFeature".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseGeocodingGeoJsonFeature>(){}.getType();
    }
    
    if ("ResponseGeocodingGeometry".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseGeocodingGeometry>(){}.getType();
    }
    
    if ("ResponseGeocodingProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseGeocodingProperties>(){}.getType();
    }
    
    if ("ResponseMapInfo".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseMapInfo>(){}.getType();
    }
    
    if ("ResponseMapInfoFeatures".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseMapInfoFeatures>(){}.getType();
    }
    
    if ("ResponseMapInfoFeaturesPublicTransport".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseMapInfoFeaturesPublicTransport>(){}.getType();
    }
    
    if ("ResponseMapInfoMap".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseMapInfoMap>(){}.getType();
    }
    
    if ("ResponseRoute".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoute>(){}.getType();
    }
    
    if ("ResponseRoutePart".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoutePart>(){}.getType();
    }
    
    if ("ResponseRoutes".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoutes>(){}.getType();
    }
    
    if ("ResponseRoutesLocation".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoutesLocation>(){}.getType();
    }
    
    if ("ResponseRoutesProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoutesProperties>(){}.getType();
    }
    
    if ("ResponseRoutesResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseRoutesResult>(){}.getType();
    }
    
    if ("ResponseShape".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseShape>(){}.getType();
    }
    
    if ("ResponseSupportedLocation".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseSupportedLocation>(){}.getType();
    }
    
    if ("ResponseSupportedLocations".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseSupportedLocations>(){}.getType();
    }
    
    if ("ResponseTimeFilter".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilter>(){}.getType();
    }
    
    if ("ResponseTimeFilterFast".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterFast>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastLocation".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterFastLocation>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterFastProperties>(){}.getType();
    }
    
    if ("ResponseTimeFilterFastResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterFastResult>(){}.getType();
    }
    
    if ("ResponseTimeFilterLocation".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterLocation>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcode".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcode>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrict".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeDistrict>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrictProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeDistrictProperties>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistricts".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeDistricts>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeDistrictsResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeDistrictsResult>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSector".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeSector>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectorProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeSectorProperties>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectors".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeSectors>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodeSectorsResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodeSectorsResult>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodes".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodes>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodesProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodesProperties>(){}.getType();
    }
    
    if ("ResponseTimeFilterPostcodesResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterPostcodesResult>(){}.getType();
    }
    
    if ("ResponseTimeFilterProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterProperties>(){}.getType();
    }
    
    if ("ResponseTimeFilterResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeFilterResult>(){}.getType();
    }
    
    if ("ResponseTimeMap".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMap>(){}.getType();
    }
    
    if ("ResponseTimeMapBoundingBoxes".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapBoundingBoxes>(){}.getType();
    }
    
    if ("ResponseTimeMapBoundingBoxesResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapBoundingBoxesResult>(){}.getType();
    }
    
    if ("ResponseTimeMapProperties".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapProperties>(){}.getType();
    }
    
    if ("ResponseTimeMapResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapResult>(){}.getType();
    }
    
    if ("ResponseTimeMapWkt".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapWkt>(){}.getType();
    }
    
    if ("ResponseTimeMapWktResult".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTimeMapWktResult>(){}.getType();
    }
    
    if ("ResponseTransportationMode".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTransportationMode>(){}.getType();
    }
    
    if ("ResponseTravelTimeStatistics".equalsIgnoreCase(className)) {
      return new TypeToken<ResponseTravelTimeStatistics>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
