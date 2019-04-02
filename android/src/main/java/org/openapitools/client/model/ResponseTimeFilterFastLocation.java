/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.ResponseTimeFilterFastProperties;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeFilterFastLocation {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("properties")
  private List<ResponseTimeFilterFastProperties> properties = null;

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
  public List<ResponseTimeFilterFastProperties> getProperties() {
    return properties;
  }
  public void setProperties(List<ResponseTimeFilterFastProperties> properties) {
    this.properties = properties;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterFastLocation responseTimeFilterFastLocation = (ResponseTimeFilterFastLocation) o;
    return (this.id == null ? responseTimeFilterFastLocation.id == null : this.id.equals(responseTimeFilterFastLocation.id)) &&
        (this.properties == null ? responseTimeFilterFastLocation.properties == null : this.properties.equals(responseTimeFilterFastLocation.properties));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterFastLocation {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
