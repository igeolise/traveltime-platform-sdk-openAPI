package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Date;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-07-14T11:27:39.949Z[Etc/UTC]")public class ResponseMapInfoFeaturesPublicTransport   {
  
  private @Valid Date dateStart;
  private @Valid Date dateEnd;

  /**
   **/
  public ResponseMapInfoFeaturesPublicTransport dateStart(Date dateStart) {
    this.dateStart = dateStart;
    return this;
  }

  

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("date_start")
  @NotNull
  public Date getDateStart() {
    return dateStart;
  }

  public void setDateStart(Date dateStart) {
    this.dateStart = dateStart;
  }/**
   **/
  public ResponseMapInfoFeaturesPublicTransport dateEnd(Date dateEnd) {
    this.dateEnd = dateEnd;
    return this;
  }

  

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("date_end")
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

