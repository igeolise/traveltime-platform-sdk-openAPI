package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ResponseFares;
import org.openapitools.model.ResponseRoute;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-07-14T11:27:39.949Z[Etc/UTC]")public class ResponseRoutesProperties   {
  
  private @Valid Integer travelTime;
  private @Valid Integer distance;
  private @Valid ResponseFares fares;
  private @Valid ResponseRoute route;

  /**
   **/
  public ResponseRoutesProperties travelTime(Integer travelTime) {
    this.travelTime = travelTime;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("travel_time")
  public Integer getTravelTime() {
    return travelTime;
  }

  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }/**
   **/
  public ResponseRoutesProperties distance(Integer distance) {
    this.distance = distance;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("distance")
  public Integer getDistance() {
    return distance;
  }

  public void setDistance(Integer distance) {
    this.distance = distance;
  }/**
   **/
  public ResponseRoutesProperties fares(ResponseFares fares) {
    this.fares = fares;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("fares")
  public ResponseFares getFares() {
    return fares;
  }

  public void setFares(ResponseFares fares) {
    this.fares = fares;
  }/**
   **/
  public ResponseRoutesProperties route(ResponseRoute route) {
    this.route = route;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("route")
  public ResponseRoute getRoute() {
    return route;
  }

  public void setRoute(ResponseRoute route) {
    this.route = route;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseRoutesProperties responseRoutesProperties = (ResponseRoutesProperties) o;
    return Objects.equals(this.travelTime, responseRoutesProperties.travelTime) &&
        Objects.equals(this.distance, responseRoutesProperties.distance) &&
        Objects.equals(this.fares, responseRoutesProperties.fares) &&
        Objects.equals(this.route, responseRoutesProperties.route);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTime, distance, fares, route);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseRoutesProperties {\n");
    
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("    fares: ").append(toIndentedString(fares)).append("\n");
    sb.append("    route: ").append(toIndentedString(route)).append("\n");
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

