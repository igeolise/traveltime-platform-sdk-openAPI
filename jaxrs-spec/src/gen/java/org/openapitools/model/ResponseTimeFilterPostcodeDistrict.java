package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ResponseTimeFilterPostcodeDistrictProperties;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-07-14T11:27:39.949Z[Etc/UTC]")public class ResponseTimeFilterPostcodeDistrict   {
  
  private @Valid String code = null;
  private @Valid ResponseTimeFilterPostcodeDistrictProperties properties;

  /**
   **/
  public ResponseTimeFilterPostcodeDistrict code(String code) {
    this.code = code;
    return this;
  }

  

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("code")
  @NotNull
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }/**
   **/
  public ResponseTimeFilterPostcodeDistrict properties(ResponseTimeFilterPostcodeDistrictProperties properties) {
    this.properties = properties;
    return this;
  }

  

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("properties")
  @NotNull
  public ResponseTimeFilterPostcodeDistrictProperties getProperties() {
    return properties;
  }

  public void setProperties(ResponseTimeFilterPostcodeDistrictProperties properties) {
    this.properties = properties;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodeDistrict responseTimeFilterPostcodeDistrict = (ResponseTimeFilterPostcodeDistrict) o;
    return Objects.equals(this.code, responseTimeFilterPostcodeDistrict.code) &&
        Objects.equals(this.properties, responseTimeFilterPostcodeDistrict.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(code, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeDistrict {\n");
    
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
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

