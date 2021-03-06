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
import org.openapitools.client.model.ResponseFaresFast;

/**
 * ResponseTimeFilterFastProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-07-14T11:27:03.509Z[Etc/UTC]")
public class ResponseTimeFilterFastProperties {
  public static final String SERIALIZED_NAME_TRAVEL_TIME = "travel_time";
  @SerializedName(SERIALIZED_NAME_TRAVEL_TIME)
  private Integer travelTime;

  public static final String SERIALIZED_NAME_FARES = "fares";
  @SerializedName(SERIALIZED_NAME_FARES)
  private ResponseFaresFast fares;


  public ResponseTimeFilterFastProperties travelTime(Integer travelTime) {
    
    this.travelTime = travelTime;
    return this;
  }

   /**
   * Get travelTime
   * @return travelTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getTravelTime() {
    return travelTime;
  }


  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }


  public ResponseTimeFilterFastProperties fares(ResponseFaresFast fares) {
    
    this.fares = fares;
    return this;
  }

   /**
   * Get fares
   * @return fares
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

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

