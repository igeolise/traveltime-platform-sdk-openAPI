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
import org.openapitools.client.model.ResponseShape;
import org.openapitools.client.model.ResponseTimeMapProperties;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeMapResult {
  
  @SerializedName("search_id")
  private String searchId = null;
  @SerializedName("shapes")
  private List<ResponseShape> shapes = null;
  @SerializedName("properties")
  private ResponseTimeMapProperties properties = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getSearchId() {
    return searchId;
  }
  public void setSearchId(String searchId) {
    this.searchId = searchId;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<ResponseShape> getShapes() {
    return shapes;
  }
  public void setShapes(List<ResponseShape> shapes) {
    this.shapes = shapes;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public ResponseTimeMapProperties getProperties() {
    return properties;
  }
  public void setProperties(ResponseTimeMapProperties properties) {
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
    ResponseTimeMapResult responseTimeMapResult = (ResponseTimeMapResult) o;
    return (this.searchId == null ? responseTimeMapResult.searchId == null : this.searchId.equals(responseTimeMapResult.searchId)) &&
        (this.shapes == null ? responseTimeMapResult.shapes == null : this.shapes.equals(responseTimeMapResult.shapes)) &&
        (this.properties == null ? responseTimeMapResult.properties == null : this.properties.equals(responseTimeMapResult.properties));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.searchId == null ? 0: this.searchId.hashCode());
    result = 31 * result + (this.shapes == null ? 0: this.shapes.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeMapResult {\n");
    
    sb.append("  searchId: ").append(searchId).append("\n");
    sb.append("  shapes: ").append(shapes).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
