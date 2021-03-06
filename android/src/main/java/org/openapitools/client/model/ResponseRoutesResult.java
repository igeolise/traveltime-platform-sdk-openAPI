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
import org.openapitools.client.model.ResponseRoutesLocation;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseRoutesResult {
  
  @SerializedName("search_id")
  private String searchId = null;
  @SerializedName("locations")
  private List<ResponseRoutesLocation> locations = null;
  @SerializedName("unreachable")
  private List<String> unreachable = null;

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
  public List<ResponseRoutesLocation> getLocations() {
    return locations;
  }
  public void setLocations(List<ResponseRoutesLocation> locations) {
    this.locations = locations;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getUnreachable() {
    return unreachable;
  }
  public void setUnreachable(List<String> unreachable) {
    this.unreachable = unreachable;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseRoutesResult responseRoutesResult = (ResponseRoutesResult) o;
    return (this.searchId == null ? responseRoutesResult.searchId == null : this.searchId.equals(responseRoutesResult.searchId)) &&
        (this.locations == null ? responseRoutesResult.locations == null : this.locations.equals(responseRoutesResult.locations)) &&
        (this.unreachable == null ? responseRoutesResult.unreachable == null : this.unreachable.equals(responseRoutesResult.unreachable));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.searchId == null ? 0: this.searchId.hashCode());
    result = 31 * result + (this.locations == null ? 0: this.locations.hashCode());
    result = 31 * result + (this.unreachable == null ? 0: this.unreachable.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseRoutesResult {\n");
    
    sb.append("  searchId: ").append(searchId).append("\n");
    sb.append("  locations: ").append(locations).append("\n");
    sb.append("  unreachable: ").append(unreachable).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
