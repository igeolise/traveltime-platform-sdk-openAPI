package org.openapitools.model;

import org.openapitools.model.ResponseTimeFilterPostcodeDistrictProperties;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ResponseTimeFilterPostcodeDistrict  {
  
  @ApiModelProperty(required = true, value = "")
  private String code = null;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private ResponseTimeFilterPostcodeDistrictProperties properties;
 /**
   * Get code
   * @return code
  **/
  @JsonProperty("code")
  @NotNull
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public ResponseTimeFilterPostcodeDistrict code(String code) {
    this.code = code;
    return this;
  }

 /**
   * Get properties
   * @return properties
  **/
  @JsonProperty("properties")
  @NotNull
  public ResponseTimeFilterPostcodeDistrictProperties getProperties() {
    return properties;
  }

  public void setProperties(ResponseTimeFilterPostcodeDistrictProperties properties) {
    this.properties = properties;
  }

  public ResponseTimeFilterPostcodeDistrict properties(ResponseTimeFilterPostcodeDistrictProperties properties) {
    this.properties = properties;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

