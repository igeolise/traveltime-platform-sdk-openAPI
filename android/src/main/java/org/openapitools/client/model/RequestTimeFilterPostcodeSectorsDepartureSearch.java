/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import java.util.*;
import java.util.Date;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsProperty;
import org.openapitools.client.model.RequestTransportation;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestTimeFilterPostcodeSectorsDepartureSearch {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("transportation")
  private RequestTransportation transportation = null;
  @SerializedName("travel_time")
  private Integer travelTime = null;
  @SerializedName("departure_time")
  private Date departureTime = null;
  @SerializedName("reachable_postcodes_threshold")
  private Double reachablePostcodesThreshold = null;
  @SerializedName("properties")
  private List<RequestTimeFilterPostcodeSectorsProperty> properties = null;
  @SerializedName("range")
  private RequestRangeFull range = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public RequestTransportation getTransportation() {
    return transportation;
  }
  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }

  /**
   * minimum: 60
   * maximum: 14400
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getTravelTime() {
    return travelTime;
  }
  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getDepartureTime() {
    return departureTime;
  }
  public void setDepartureTime(Date departureTime) {
    this.departureTime = departureTime;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Double getReachablePostcodesThreshold() {
    return reachablePostcodesThreshold;
  }
  public void setReachablePostcodesThreshold(Double reachablePostcodesThreshold) {
    this.reachablePostcodesThreshold = reachablePostcodesThreshold;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<RequestTimeFilterPostcodeSectorsProperty> getProperties() {
    return properties;
  }
  public void setProperties(List<RequestTimeFilterPostcodeSectorsProperty> properties) {
    this.properties = properties;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public RequestRangeFull getRange() {
    return range;
  }
  public void setRange(RequestRangeFull range) {
    this.range = range;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeFilterPostcodeSectorsDepartureSearch requestTimeFilterPostcodeSectorsDepartureSearch = (RequestTimeFilterPostcodeSectorsDepartureSearch) o;
    return (this.id == null ? requestTimeFilterPostcodeSectorsDepartureSearch.id == null : this.id.equals(requestTimeFilterPostcodeSectorsDepartureSearch.id)) &&
        (this.transportation == null ? requestTimeFilterPostcodeSectorsDepartureSearch.transportation == null : this.transportation.equals(requestTimeFilterPostcodeSectorsDepartureSearch.transportation)) &&
        (this.travelTime == null ? requestTimeFilterPostcodeSectorsDepartureSearch.travelTime == null : this.travelTime.equals(requestTimeFilterPostcodeSectorsDepartureSearch.travelTime)) &&
        (this.departureTime == null ? requestTimeFilterPostcodeSectorsDepartureSearch.departureTime == null : this.departureTime.equals(requestTimeFilterPostcodeSectorsDepartureSearch.departureTime)) &&
        (this.reachablePostcodesThreshold == null ? requestTimeFilterPostcodeSectorsDepartureSearch.reachablePostcodesThreshold == null : this.reachablePostcodesThreshold.equals(requestTimeFilterPostcodeSectorsDepartureSearch.reachablePostcodesThreshold)) &&
        (this.properties == null ? requestTimeFilterPostcodeSectorsDepartureSearch.properties == null : this.properties.equals(requestTimeFilterPostcodeSectorsDepartureSearch.properties)) &&
        (this.range == null ? requestTimeFilterPostcodeSectorsDepartureSearch.range == null : this.range.equals(requestTimeFilterPostcodeSectorsDepartureSearch.range));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.transportation == null ? 0: this.transportation.hashCode());
    result = 31 * result + (this.travelTime == null ? 0: this.travelTime.hashCode());
    result = 31 * result + (this.departureTime == null ? 0: this.departureTime.hashCode());
    result = 31 * result + (this.reachablePostcodesThreshold == null ? 0: this.reachablePostcodesThreshold.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    result = 31 * result + (this.range == null ? 0: this.range.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterPostcodeSectorsDepartureSearch {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  transportation: ").append(transportation).append("\n");
    sb.append("  travelTime: ").append(travelTime).append("\n");
    sb.append("  departureTime: ").append(departureTime).append("\n");
    sb.append("  reachablePostcodesThreshold: ").append(reachablePostcodesThreshold).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("  range: ").append(range).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
