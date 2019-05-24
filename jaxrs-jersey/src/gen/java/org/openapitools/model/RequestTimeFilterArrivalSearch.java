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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import org.openapitools.model.RequestRangeFull;
import org.openapitools.model.RequestTimeFilterProperty;
import org.openapitools.model.RequestTransportation;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * RequestTimeFilterArrivalSearch
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-05-24T09:07:05.199Z[Etc/UTC]")
public class RequestTimeFilterArrivalSearch   {
  @JsonProperty("id")
  private String id;

  @JsonProperty("departure_location_ids")
  private List<String> departureLocationIds = new ArrayList<String>();

  @JsonProperty("arrival_location_id")
  private String arrivalLocationId;

  @JsonProperty("transportation")
  private RequestTransportation transportation = null;

  @JsonProperty("travel_time")
  private Integer travelTime;

  @JsonProperty("arrival_time")
  private Date arrivalTime;

  @JsonProperty("properties")
  private List<RequestTimeFilterProperty> properties = new ArrayList<RequestTimeFilterProperty>();

  @JsonProperty("range")
  private RequestRangeFull range = null;

  public RequestTimeFilterArrivalSearch id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  @JsonProperty("id")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public RequestTimeFilterArrivalSearch departureLocationIds(List<String> departureLocationIds) {
    this.departureLocationIds = departureLocationIds;
    return this;
  }

  public RequestTimeFilterArrivalSearch addDepartureLocationIdsItem(String departureLocationIdsItem) {
    this.departureLocationIds.add(departureLocationIdsItem);
    return this;
  }

  /**
   * Get departureLocationIds
   * @return departureLocationIds
   **/
  @JsonProperty("departure_location_ids")
  @ApiModelProperty(required = true, value = "")
  @NotNull  @Size(min=1,max=2000)
  public List<String> getDepartureLocationIds() {
    return departureLocationIds;
  }

  public void setDepartureLocationIds(List<String> departureLocationIds) {
    this.departureLocationIds = departureLocationIds;
  }

  public RequestTimeFilterArrivalSearch arrivalLocationId(String arrivalLocationId) {
    this.arrivalLocationId = arrivalLocationId;
    return this;
  }

  /**
   * Get arrivalLocationId
   * @return arrivalLocationId
   **/
  @JsonProperty("arrival_location_id")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getArrivalLocationId() {
    return arrivalLocationId;
  }

  public void setArrivalLocationId(String arrivalLocationId) {
    this.arrivalLocationId = arrivalLocationId;
  }

  public RequestTimeFilterArrivalSearch transportation(RequestTransportation transportation) {
    this.transportation = transportation;
    return this;
  }

  /**
   * Get transportation
   * @return transportation
   **/
  @JsonProperty("transportation")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public RequestTransportation getTransportation() {
    return transportation;
  }

  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }

  public RequestTimeFilterArrivalSearch travelTime(Integer travelTime) {
    this.travelTime = travelTime;
    return this;
  }

  /**
   * Get travelTime
   * minimum: 60
   * maximum: 14400
   * @return travelTime
   **/
  @JsonProperty("travel_time")
  @ApiModelProperty(required = true, value = "")
  @NotNull  @Min(60) @Max(14400)
  public Integer getTravelTime() {
    return travelTime;
  }

  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  public RequestTimeFilterArrivalSearch arrivalTime(Date arrivalTime) {
    this.arrivalTime = arrivalTime;
    return this;
  }

  /**
   * Get arrivalTime
   * @return arrivalTime
   **/
  @JsonProperty("arrival_time")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Date getArrivalTime() {
    return arrivalTime;
  }

  public void setArrivalTime(Date arrivalTime) {
    this.arrivalTime = arrivalTime;
  }

  public RequestTimeFilterArrivalSearch properties(List<RequestTimeFilterProperty> properties) {
    this.properties = properties;
    return this;
  }

  public RequestTimeFilterArrivalSearch addPropertiesItem(RequestTimeFilterProperty propertiesItem) {
    this.properties.add(propertiesItem);
    return this;
  }

  /**
   * Get properties
   * @return properties
   **/
  @JsonProperty("properties")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<RequestTimeFilterProperty> getProperties() {
    return properties;
  }

  public void setProperties(List<RequestTimeFilterProperty> properties) {
    this.properties = properties;
  }

  public RequestTimeFilterArrivalSearch range(RequestRangeFull range) {
    this.range = range;
    return this;
  }

  /**
   * Get range
   * @return range
   **/
  @JsonProperty("range")
  @ApiModelProperty(value = "")
  @Valid 
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
    RequestTimeFilterArrivalSearch requestTimeFilterArrivalSearch = (RequestTimeFilterArrivalSearch) o;
    return Objects.equals(this.id, requestTimeFilterArrivalSearch.id) &&
        Objects.equals(this.departureLocationIds, requestTimeFilterArrivalSearch.departureLocationIds) &&
        Objects.equals(this.arrivalLocationId, requestTimeFilterArrivalSearch.arrivalLocationId) &&
        Objects.equals(this.transportation, requestTimeFilterArrivalSearch.transportation) &&
        Objects.equals(this.travelTime, requestTimeFilterArrivalSearch.travelTime) &&
        Objects.equals(this.arrivalTime, requestTimeFilterArrivalSearch.arrivalTime) &&
        Objects.equals(this.properties, requestTimeFilterArrivalSearch.properties) &&
        Objects.equals(this.range, requestTimeFilterArrivalSearch.range);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, departureLocationIds, arrivalLocationId, transportation, travelTime, arrivalTime, properties, range);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterArrivalSearch {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    departureLocationIds: ").append(toIndentedString(departureLocationIds)).append("\n");
    sb.append("    arrivalLocationId: ").append(toIndentedString(arrivalLocationId)).append("\n");
    sb.append("    transportation: ").append(toIndentedString(transportation)).append("\n");
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
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

