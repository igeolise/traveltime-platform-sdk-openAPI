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
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseSupportedLocation
 */
@JsonPropertyOrder({
  ResponseSupportedLocation.JSON_PROPERTY_ID,
  ResponseSupportedLocation.JSON_PROPERTY_MAP_NAME
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-07-14T11:27:32.798Z[Etc/UTC]")
public class ResponseSupportedLocation   {
  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public static final String JSON_PROPERTY_MAP_NAME = "map_name";
  @JsonProperty(JSON_PROPERTY_MAP_NAME)
  private String mapName;

  public ResponseSupportedLocation id(String id) {
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

  public ResponseSupportedLocation mapName(String mapName) {
    this.mapName = mapName;
    return this;
  }

  /**
   * Get mapName
   * @return mapName
   **/
  @JsonProperty("map_name")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getMapName() {
    return mapName;
  }

  public void setMapName(String mapName) {
    this.mapName = mapName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseSupportedLocation responseSupportedLocation = (ResponseSupportedLocation) o;
    return Objects.equals(this.id, responseSupportedLocation.id) &&
        Objects.equals(this.mapName, responseSupportedLocation.mapName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, mapName);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseSupportedLocation {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    mapName: ").append(toIndentedString(mapName)).append("\n");
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

