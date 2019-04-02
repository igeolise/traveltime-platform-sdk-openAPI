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
import org.openapitools.client.model.RequestTimeFilterPostcodesArrivalSearch;
import org.openapitools.client.model.RequestTimeFilterPostcodesDepartureSearch;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestTimeFilterPostcodes {
  
  @SerializedName("departure_searches")
  private List<RequestTimeFilterPostcodesDepartureSearch> departureSearches = null;
  @SerializedName("arrival_searches")
  private List<RequestTimeFilterPostcodesArrivalSearch> arrivalSearches = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public List<RequestTimeFilterPostcodesDepartureSearch> getDepartureSearches() {
    return departureSearches;
  }
  public void setDepartureSearches(List<RequestTimeFilterPostcodesDepartureSearch> departureSearches) {
    this.departureSearches = departureSearches;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<RequestTimeFilterPostcodesArrivalSearch> getArrivalSearches() {
    return arrivalSearches;
  }
  public void setArrivalSearches(List<RequestTimeFilterPostcodesArrivalSearch> arrivalSearches) {
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
    RequestTimeFilterPostcodes requestTimeFilterPostcodes = (RequestTimeFilterPostcodes) o;
    return (this.departureSearches == null ? requestTimeFilterPostcodes.departureSearches == null : this.departureSearches.equals(requestTimeFilterPostcodes.departureSearches)) &&
        (this.arrivalSearches == null ? requestTimeFilterPostcodes.arrivalSearches == null : this.arrivalSearches.equals(requestTimeFilterPostcodes.arrivalSearches));
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
    sb.append("class RequestTimeFilterPostcodes {\n");
    
    sb.append("  departureSearches: ").append(departureSearches).append("\n");
    sb.append("  arrivalSearches: ").append(arrivalSearches).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
