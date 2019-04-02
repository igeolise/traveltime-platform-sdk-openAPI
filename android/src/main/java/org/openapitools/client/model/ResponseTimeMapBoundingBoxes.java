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
import org.openapitools.client.model.ResponseTimeMapBoundingBoxesResult;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeMapBoundingBoxes {
  
  @SerializedName("results")
  private List<ResponseTimeMapBoundingBoxesResult> results = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<ResponseTimeMapBoundingBoxesResult> getResults() {
    return results;
  }
  public void setResults(List<ResponseTimeMapBoundingBoxesResult> results) {
    this.results = results;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeMapBoundingBoxes responseTimeMapBoundingBoxes = (ResponseTimeMapBoundingBoxes) o;
    return (this.results == null ? responseTimeMapBoundingBoxes.results == null : this.results.equals(responseTimeMapBoundingBoxes.results));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.results == null ? 0: this.results.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeMapBoundingBoxes {\n");
    
    sb.append("  results: ").append(results).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
