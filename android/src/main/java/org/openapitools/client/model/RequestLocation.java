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

import org.openapitools.client.model.Coords;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestLocation {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("coords")
  private Coords coords = null;

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
  public Coords getCoords() {
    return coords;
  }
  public void setCoords(Coords coords) {
    this.coords = coords;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestLocation requestLocation = (RequestLocation) o;
    return (this.id == null ? requestLocation.id == null : this.id.equals(requestLocation.id)) &&
        (this.coords == null ? requestLocation.coords == null : this.coords.equals(requestLocation.coords));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.coords == null ? 0: this.coords.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestLocation {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  coords: ").append(coords).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
