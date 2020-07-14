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
import org.openapitools.client.model.RequestTimeFilterPostcodeDistrictsProperty;
import org.openapitools.client.model.RequestTransportation;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestTimeFilterPostcodeDistrictsDepartureSearch {
  
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
  private List<RequestTimeFilterPostcodeDistrictsProperty> properties = null;
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
  public List<RequestTimeFilterPostcodeDistrictsProperty> getProperties() {
    return properties;
  }
  public void setProperties(List<RequestTimeFilterPostcodeDistrictsProperty> properties) {
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
    RequestTimeFilterPostcodeDistrictsDepartureSearch requestTimeFilterPostcodeDistrictsDepartureSearch = (RequestTimeFilterPostcodeDistrictsDepartureSearch) o;
    return (this.id == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.id == null : this.id.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.id)) &&
        (this.transportation == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.transportation == null : this.transportation.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.transportation)) &&
        (this.travelTime == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.travelTime == null : this.travelTime.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.travelTime)) &&
        (this.departureTime == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.departureTime == null : this.departureTime.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.departureTime)) &&
        (this.reachablePostcodesThreshold == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.reachablePostcodesThreshold == null : this.reachablePostcodesThreshold.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.reachablePostcodesThreshold)) &&
        (this.properties == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.properties == null : this.properties.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.properties)) &&
        (this.range == null ? requestTimeFilterPostcodeDistrictsDepartureSearch.range == null : this.range.equals(requestTimeFilterPostcodeDistrictsDepartureSearch.range));
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
    sb.append("class RequestTimeFilterPostcodeDistrictsDepartureSearch {\n");
    
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
