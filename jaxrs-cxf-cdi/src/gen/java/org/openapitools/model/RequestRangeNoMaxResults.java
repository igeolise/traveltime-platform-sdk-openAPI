package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;

import javax.xml.bind.annotation.*;


public class RequestRangeNoMaxResults   {
  
  private Boolean enabled;

  private Integer width;


  /**
   **/
  public RequestRangeNoMaxResults enabled(Boolean enabled) {
    this.enabled = enabled;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("enabled")
  @NotNull
  public Boolean getEnabled() {
    return enabled;
  }
  public void setEnabled(Boolean enabled) {
    this.enabled = enabled;
  }


  /**
   * minimum: 1
   * maximum: 43200
   **/
  public RequestRangeNoMaxResults width(Integer width) {
    this.width = width;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("width")
  @NotNull
 @Min(1) @Max(43200)  public Integer getWidth() {
    return width;
  }
  public void setWidth(Integer width) {
    this.width = width;
  }



  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestRangeNoMaxResults requestRangeNoMaxResults = (RequestRangeNoMaxResults) o;
    return Objects.equals(enabled, requestRangeNoMaxResults.enabled) &&
        Objects.equals(width, requestRangeNoMaxResults.width);
  }

  @Override
  public int hashCode() {
    return Objects.hash(enabled, width);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestRangeNoMaxResults {\n");
    
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
    sb.append("    width: ").append(toIndentedString(width)).append("\n");
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

