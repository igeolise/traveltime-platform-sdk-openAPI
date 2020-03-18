/*
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


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestRoutesProperty;
import org.openapitools.client.model.RequestTransportation;
import org.threeten.bp.OffsetDateTime;

/**
 * RequestRoutesArrivalSearch
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-03-18T08:49:07.511Z[Etc/UTC]")
public class RequestRoutesArrivalSearch {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_DEPARTURE_LOCATION_IDS = "departure_location_ids";
  @SerializedName(SERIALIZED_NAME_DEPARTURE_LOCATION_IDS)
  private List<String> departureLocationIds = new ArrayList<String>();

  public static final String SERIALIZED_NAME_ARRIVAL_LOCATION_ID = "arrival_location_id";
  @SerializedName(SERIALIZED_NAME_ARRIVAL_LOCATION_ID)
  private String arrivalLocationId;

  public static final String SERIALIZED_NAME_TRANSPORTATION = "transportation";
  @SerializedName(SERIALIZED_NAME_TRANSPORTATION)
  private RequestTransportation transportation;

  public static final String SERIALIZED_NAME_ARRIVAL_TIME = "arrival_time";
  @SerializedName(SERIALIZED_NAME_ARRIVAL_TIME)
  private OffsetDateTime arrivalTime;

  public static final String SERIALIZED_NAME_PROPERTIES = "properties";
  @SerializedName(SERIALIZED_NAME_PROPERTIES)
  private List<RequestRoutesProperty> properties = new ArrayList<RequestRoutesProperty>();

  public static final String SERIALIZED_NAME_RANGE = "range";
  @SerializedName(SERIALIZED_NAME_RANGE)
  private RequestRangeFull range;


  public RequestRoutesArrivalSearch id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public RequestRoutesArrivalSearch departureLocationIds(List<String> departureLocationIds) {
    
    this.departureLocationIds = departureLocationIds;
    return this;
  }

  public RequestRoutesArrivalSearch addDepartureLocationIdsItem(String departureLocationIdsItem) {
    this.departureLocationIds.add(departureLocationIdsItem);
    return this;
  }

   /**
   * Get departureLocationIds
   * @return departureLocationIds
  **/
  @ApiModelProperty(required = true, value = "")

  public List<String> getDepartureLocationIds() {
    return departureLocationIds;
  }


  public void setDepartureLocationIds(List<String> departureLocationIds) {
    this.departureLocationIds = departureLocationIds;
  }


  public RequestRoutesArrivalSearch arrivalLocationId(String arrivalLocationId) {
    
    this.arrivalLocationId = arrivalLocationId;
    return this;
  }

   /**
   * Get arrivalLocationId
   * @return arrivalLocationId
  **/
  @ApiModelProperty(required = true, value = "")

  public String getArrivalLocationId() {
    return arrivalLocationId;
  }


  public void setArrivalLocationId(String arrivalLocationId) {
    this.arrivalLocationId = arrivalLocationId;
  }


  public RequestRoutesArrivalSearch transportation(RequestTransportation transportation) {
    
    this.transportation = transportation;
    return this;
  }

   /**
   * Get transportation
   * @return transportation
  **/
  @ApiModelProperty(required = true, value = "")

  public RequestTransportation getTransportation() {
    return transportation;
  }


  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }


  public RequestRoutesArrivalSearch arrivalTime(OffsetDateTime arrivalTime) {
    
    this.arrivalTime = arrivalTime;
    return this;
  }

   /**
   * Get arrivalTime
   * @return arrivalTime
  **/
  @ApiModelProperty(required = true, value = "")

  public OffsetDateTime getArrivalTime() {
    return arrivalTime;
  }


  public void setArrivalTime(OffsetDateTime arrivalTime) {
    this.arrivalTime = arrivalTime;
  }


  public RequestRoutesArrivalSearch properties(List<RequestRoutesProperty> properties) {
    
    this.properties = properties;
    return this;
  }

  public RequestRoutesArrivalSearch addPropertiesItem(RequestRoutesProperty propertiesItem) {
    this.properties.add(propertiesItem);
    return this;
  }

   /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(required = true, value = "")

  public List<RequestRoutesProperty> getProperties() {
    return properties;
  }


  public void setProperties(List<RequestRoutesProperty> properties) {
    this.properties = properties;
  }


  public RequestRoutesArrivalSearch range(RequestRangeFull range) {
    
    this.range = range;
    return this;
  }

   /**
   * Get range
   * @return range
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public RequestRangeFull getRange() {
    return range;
  }


  public void setRange(RequestRangeFull range) {
    this.range = range;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestRoutesArrivalSearch requestRoutesArrivalSearch = (RequestRoutesArrivalSearch) o;
    return Objects.equals(this.id, requestRoutesArrivalSearch.id) &&
        Objects.equals(this.departureLocationIds, requestRoutesArrivalSearch.departureLocationIds) &&
        Objects.equals(this.arrivalLocationId, requestRoutesArrivalSearch.arrivalLocationId) &&
        Objects.equals(this.transportation, requestRoutesArrivalSearch.transportation) &&
        Objects.equals(this.arrivalTime, requestRoutesArrivalSearch.arrivalTime) &&
        Objects.equals(this.properties, requestRoutesArrivalSearch.properties) &&
        Objects.equals(this.range, requestRoutesArrivalSearch.range);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, departureLocationIds, arrivalLocationId, transportation, arrivalTime, properties, range);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestRoutesArrivalSearch {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    departureLocationIds: ").append(toIndentedString(departureLocationIds)).append("\n");
    sb.append("    arrivalLocationId: ").append(toIndentedString(arrivalLocationId)).append("\n");
    sb.append("    transportation: ").append(toIndentedString(transportation)).append("\n");
    sb.append("    arrivalTime: ").append(toIndentedString(arrivalTime)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
    sb.append("    range: ").append(toIndentedString(range)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

