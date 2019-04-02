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
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsArrivalSearch;
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsDepartureSearch;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestTimeFilterPostcodeSectors {
  
  @SerializedName("departure_searches")
  private List<RequestTimeFilterPostcodeSectorsDepartureSearch> departureSearches = null;
  @SerializedName("arrival_searches")
  private List<RequestTimeFilterPostcodeSectorsArrivalSearch> arrivalSearches = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public List<RequestTimeFilterPostcodeSectorsDepartureSearch> getDepartureSearches() {
    return departureSearches;
  }
  public void setDepartureSearches(List<RequestTimeFilterPostcodeSectorsDepartureSearch> departureSearches) {
    this.departureSearches = departureSearches;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<RequestTimeFilterPostcodeSectorsArrivalSearch> getArrivalSearches() {
    return arrivalSearches;
  }
  public void setArrivalSearches(List<RequestTimeFilterPostcodeSectorsArrivalSearch> arrivalSearches) {
    this.arrivalSearches = arrivalSearches;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors = (RequestTimeFilterPostcodeSectors) o;
    return (this.departureSearches == null ? requestTimeFilterPostcodeSectors.departureSearches == null : this.departureSearches.equals(requestTimeFilterPostcodeSectors.departureSearches)) &&
        (this.arrivalSearches == null ? requestTimeFilterPostcodeSectors.arrivalSearches == null : this.arrivalSearches.equals(requestTimeFilterPostcodeSectors.arrivalSearches));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.departureSearches == null ? 0: this.departureSearches.hashCode());
    result = 31 * result + (this.arrivalSearches == null ? 0: this.arrivalSearches.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterPostcodeSectors {\n");
    
    sb.append("  departureSearches: ").append(departureSearches).append("\n");
    sb.append("  arrivalSearches: ").append(arrivalSearches).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
