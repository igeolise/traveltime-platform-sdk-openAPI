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
import org.openapitools.client.model.ResponseBoundingBox;
import org.openapitools.client.model.ResponseTimeMapProperties;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeMapBoundingBoxesResult {
  
  @SerializedName("search_id")
  private String searchId = null;
  @SerializedName("bounding_boxes")
  private List<ResponseBoundingBox> boundingBoxes = null;
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
  public List<ResponseBoundingBox> getBoundingBoxes() {
    return boundingBoxes;
  }
  public void setBoundingBoxes(List<ResponseBoundingBox> boundingBoxes) {
    this.boundingBoxes = boundingBoxes;
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
    ResponseTimeMapBoundingBoxesResult responseTimeMapBoundingBoxesResult = (ResponseTimeMapBoundingBoxesResult) o;
    return (this.searchId == null ? responseTimeMapBoundingBoxesResult.searchId == null : this.searchId.equals(responseTimeMapBoundingBoxesResult.searchId)) &&
        (this.boundingBoxes == null ? responseTimeMapBoundingBoxesResult.boundingBoxes == null : this.boundingBoxes.equals(responseTimeMapBoundingBoxesResult.boundingBoxes)) &&
        (this.properties == null ? responseTimeMapBoundingBoxesResult.properties == null : this.properties.equals(responseTimeMapBoundingBoxesResult.properties));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.searchId == null ? 0: this.searchId.hashCode());
    result = 31 * result + (this.boundingBoxes == null ? 0: this.boundingBoxes.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeMapBoundingBoxesResult {\n");
    
    sb.append("  searchId: ").append(searchId).append("\n");
    sb.append("  boundingBoxes: ").append(boundingBoxes).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
