/**
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

package org.openapitools.client.model;

import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestUnionOnIntersection {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("search_ids")
  private List<String> searchIds = null;

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
  public List<String> getSearchIds() {
    return searchIds;
  }
  public void setSearchIds(List<String> searchIds) {
    this.searchIds = searchIds;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestUnionOnIntersection requestUnionOnIntersection = (RequestUnionOnIntersection) o;
    return (this.id == null ? requestUnionOnIntersection.id == null : this.id.equals(requestUnionOnIntersection.id)) &&
        (this.searchIds == null ? requestUnionOnIntersection.searchIds == null : this.searchIds.equals(requestUnionOnIntersection.searchIds));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.searchIds == null ? 0: this.searchIds.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestUnionOnIntersection {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  searchIds: ").append(searchIds).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
