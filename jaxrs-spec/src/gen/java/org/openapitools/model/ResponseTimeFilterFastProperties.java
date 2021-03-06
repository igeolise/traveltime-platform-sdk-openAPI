package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ResponseFaresFast;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-07-14T11:27:39.949Z[Etc/UTC]")public class ResponseTimeFilterFastProperties   {
  
  private @Valid Integer travelTime;
  private @Valid ResponseFaresFast fares;

  /**
   **/
  public ResponseTimeFilterFastProperties travelTime(Integer travelTime) {
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
  public ResponseTimeFilterFastProperties fares(ResponseFaresFast fares) {
    this.fares = fares;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("fares")
  public ResponseFaresFast getFares() {
    return fares;
  }

  public void setFares(ResponseFaresFast fares) {
    this.fares = fares;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterFastProperties responseTimeFilterFastProperties = (ResponseTimeFilterFastProperties) o;
    return Objects.equals(this.travelTime, responseTimeFilterFastProperties.travelTime) &&
        Objects.equals(this.fares, responseTimeFilterFastProperties.fares);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTime, fares);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterFastProperties {\n");
    
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    fares: ").append(toIndentedString(fares)).append("\n");
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

