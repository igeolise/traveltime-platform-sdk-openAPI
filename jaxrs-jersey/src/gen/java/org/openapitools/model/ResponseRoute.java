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
import org.openapitools.model.ResponseRoutePart;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseRoute
 */
@JsonPropertyOrder({
  ResponseRoute.JSON_PROPERTY_DEPARTURE_TIME,
  ResponseRoute.JSON_PROPERTY_ARRIVAL_TIME,
  ResponseRoute.JSON_PROPERTY_PARTS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T08:51:04.278Z[Etc/UTC]")
public class ResponseRoute   {
  public static final String JSON_PROPERTY_DEPARTURE_TIME = "departure_time";
  @JsonProperty(JSON_PROPERTY_DEPARTURE_TIME)
  private Date departureTime;

  public static final String JSON_PROPERTY_ARRIVAL_TIME = "arrival_time";
  @JsonProperty(JSON_PROPERTY_ARRIVAL_TIME)
  private Date arrivalTime;

  public static final String JSON_PROPERTY_PARTS = "parts";
  @JsonProperty(JSON_PROPERTY_PARTS)
  private List<ResponseRoutePart> parts = new ArrayList<ResponseRoutePart>();

  public ResponseRoute departureTime(Date departureTime) {
    this.departureTime = departureTime;
    return this;
  }

  /**
   * Get departureTime
   * @return departureTime
   **/
  @JsonProperty("departure_time")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Date getDepartureTime() {
    return departureTime;
  }

  public void setDepartureTime(Date departureTime) {
    this.departureTime = departureTime;
  }

  public ResponseRoute arrivalTime(Date arrivalTime) {
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

  public ResponseRoute parts(List<ResponseRoutePart> parts) {
    this.parts = parts;
    return this;
  }

  public ResponseRoute addPartsItem(ResponseRoutePart partsItem) {
    this.parts.add(partsItem);
    return this;
  }

  /**
   * Get parts
   * @return parts
   **/
  @JsonProperty("parts")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<ResponseRoutePart> getParts() {
    return parts;
  }

  public void setParts(List<ResponseRoutePart> parts) {
    this.parts = parts;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseRoute responseRoute = (ResponseRoute) o;
    return Objects.equals(this.departureTime, responseRoute.departureTime) &&
        Objects.equals(this.arrivalTime, responseRoute.arrivalTime) &&
        Objects.equals(this.parts, responseRoute.parts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(departureTime, arrivalTime, parts);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseRoute {\n");
    
    sb.append("    departureTime: ").append(toIndentedString(departureTime)).append("\n");
    sb.append("    arrivalTime: ").append(toIndentedString(arrivalTime)).append("\n");
    sb.append("    parts: ").append(toIndentedString(parts)).append("\n");
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

