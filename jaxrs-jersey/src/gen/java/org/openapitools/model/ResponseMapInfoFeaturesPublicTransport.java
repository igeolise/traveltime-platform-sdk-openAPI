/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseMapInfoFeaturesPublicTransport
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2019-05-24T09:07:05.199Z[Etc/UTC]")
public class ResponseMapInfoFeaturesPublicTransport   {
  @JsonProperty("date_start")
  private Date dateStart;

  @JsonProperty("date_end")
  private Date dateEnd;

  public ResponseMapInfoFeaturesPublicTransport dateStart(Date dateStart) {
    this.dateStart = dateStart;
    return this;
  }

  /**
   * Get dateStart
   * @return dateStart
   **/
  @JsonProperty("date_start")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Date getDateStart() {
    return dateStart;
  }

  public void setDateStart(Date dateStart) {
    this.dateStart = dateStart;
  }

  public ResponseMapInfoFeaturesPublicTransport dateEnd(Date dateEnd) {
    this.dateEnd = dateEnd;
    return this;
  }

  /**
   * Get dateEnd
   * @return dateEnd
   **/
  @JsonProperty("date_end")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Date getDateEnd() {
    return dateEnd;
  }

  public void setDateEnd(Date dateEnd) {
    this.dateEnd = dateEnd;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseMapInfoFeaturesPublicTransport responseMapInfoFeaturesPublicTransport = (ResponseMapInfoFeaturesPublicTransport) o;
    return Objects.equals(this.dateStart, responseMapInfoFeaturesPublicTransport.dateStart) &&
        Objects.equals(this.dateEnd, responseMapInfoFeaturesPublicTransport.dateEnd);
  }

  @Override
  public int hashCode() {
    return Objects.hash(dateStart, dateEnd);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseMapInfoFeaturesPublicTransport {\n");
    
    sb.append("    dateStart: ").append(toIndentedString(dateStart)).append("\n");
    sb.append("    dateEnd: ").append(toIndentedString(dateEnd)).append("\n");
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

