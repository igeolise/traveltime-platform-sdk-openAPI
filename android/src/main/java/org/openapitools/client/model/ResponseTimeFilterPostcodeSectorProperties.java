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

import org.openapitools.client.model.ResponseTravelTimeStatistics;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeFilterPostcodeSectorProperties {
  
  @SerializedName("travel_time_reachable")
  private ResponseTravelTimeStatistics travelTimeReachable = null;
  @SerializedName("travel_time_all")
  private ResponseTravelTimeStatistics travelTimeAll = null;
  @SerializedName("coverage")
  private Double coverage = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ResponseTravelTimeStatistics getTravelTimeReachable() {
    return travelTimeReachable;
  }
  public void setTravelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ResponseTravelTimeStatistics getTravelTimeAll() {
    return travelTimeAll;
  }
  public void setTravelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getCoverage() {
    return coverage;
  }
  public void setCoverage(Double coverage) {
    this.coverage = coverage;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodeSectorProperties responseTimeFilterPostcodeSectorProperties = (ResponseTimeFilterPostcodeSectorProperties) o;
    return (this.travelTimeReachable == null ? responseTimeFilterPostcodeSectorProperties.travelTimeReachable == null : this.travelTimeReachable.equals(responseTimeFilterPostcodeSectorProperties.travelTimeReachable)) &&
        (this.travelTimeAll == null ? responseTimeFilterPostcodeSectorProperties.travelTimeAll == null : this.travelTimeAll.equals(responseTimeFilterPostcodeSectorProperties.travelTimeAll)) &&
        (this.coverage == null ? responseTimeFilterPostcodeSectorProperties.coverage == null : this.coverage.equals(responseTimeFilterPostcodeSectorProperties.coverage));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.travelTimeReachable == null ? 0: this.travelTimeReachable.hashCode());
    result = 31 * result + (this.travelTimeAll == null ? 0: this.travelTimeAll.hashCode());
    result = 31 * result + (this.coverage == null ? 0: this.coverage.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeSectorProperties {\n");
    
    sb.append("  travelTimeReachable: ").append(travelTimeReachable).append("\n");
    sb.append("  travelTimeAll: ").append(travelTimeAll).append("\n");
    sb.append("  coverage: ").append(coverage).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
