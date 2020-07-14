/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ResponseTravelTimeStatistics;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseTimeFilterPostcodeDistrictProperties
 */
@JsonPropertyOrder({
  ResponseTimeFilterPostcodeDistrictProperties.JSON_PROPERTY_TRAVEL_TIME_REACHABLE,
  ResponseTimeFilterPostcodeDistrictProperties.JSON_PROPERTY_TRAVEL_TIME_ALL,
  ResponseTimeFilterPostcodeDistrictProperties.JSON_PROPERTY_COVERAGE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-07-14T11:27:32.798Z[Etc/UTC]")
public class ResponseTimeFilterPostcodeDistrictProperties   {
  public static final String JSON_PROPERTY_TRAVEL_TIME_REACHABLE = "travel_time_reachable";
  @JsonProperty(JSON_PROPERTY_TRAVEL_TIME_REACHABLE)
  private ResponseTravelTimeStatistics travelTimeReachable;

  public static final String JSON_PROPERTY_TRAVEL_TIME_ALL = "travel_time_all";
  @JsonProperty(JSON_PROPERTY_TRAVEL_TIME_ALL)
  private ResponseTravelTimeStatistics travelTimeAll;

  public static final String JSON_PROPERTY_COVERAGE = "coverage";
  @JsonProperty(JSON_PROPERTY_COVERAGE)
  private Double coverage;

  public ResponseTimeFilterPostcodeDistrictProperties travelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
    return this;
  }

  /**
   * Get travelTimeReachable
   * @return travelTimeReachable
   **/
  @JsonProperty("travel_time_reachable")
  @ApiModelProperty(value = "")
  @Valid 
  public ResponseTravelTimeStatistics getTravelTimeReachable() {
    return travelTimeReachable;
  }

  public void setTravelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
  }

  public ResponseTimeFilterPostcodeDistrictProperties travelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
    return this;
  }

  /**
   * Get travelTimeAll
   * @return travelTimeAll
   **/
  @JsonProperty("travel_time_all")
  @ApiModelProperty(value = "")
  @Valid 
  public ResponseTravelTimeStatistics getTravelTimeAll() {
    return travelTimeAll;
  }

  public void setTravelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
  }

  public ResponseTimeFilterPostcodeDistrictProperties coverage(Double coverage) {
    this.coverage = coverage;
    return this;
  }

  /**
   * Get coverage
   * @return coverage
   **/
  @JsonProperty("coverage")
  @ApiModelProperty(value = "")
  
  public Double getCoverage() {
    return coverage;
  }

  public void setCoverage(Double coverage) {
    this.coverage = coverage;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodeDistrictProperties responseTimeFilterPostcodeDistrictProperties = (ResponseTimeFilterPostcodeDistrictProperties) o;
    return Objects.equals(this.travelTimeReachable, responseTimeFilterPostcodeDistrictProperties.travelTimeReachable) &&
        Objects.equals(this.travelTimeAll, responseTimeFilterPostcodeDistrictProperties.travelTimeAll) &&
        Objects.equals(this.coverage, responseTimeFilterPostcodeDistrictProperties.coverage);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTimeReachable, travelTimeAll, coverage);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeDistrictProperties {\n");
    
    sb.append("    travelTimeReachable: ").append(toIndentedString(travelTimeReachable)).append("\n");
    sb.append("    travelTimeAll: ").append(toIndentedString(travelTimeAll)).append("\n");
    sb.append("    coverage: ").append(toIndentedString(coverage)).append("\n");
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

