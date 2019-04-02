package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ResponseTimeFilterPostcodeSectorProperties;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ResponseTimeFilterPostcodeSector
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-04-02T12:39:25.365Z[Etc/UTC]")

public class ResponseTimeFilterPostcodeSector   {
  @JsonProperty("code")
  private String code = null;

  @JsonProperty("properties")
  private ResponseTimeFilterPostcodeSectorProperties properties = null;

  public ResponseTimeFilterPostcodeSector code(String code) {
    this.code = code;
    return this;
  }

  /**
   * Get code
   * @return code
  */
  @ApiModelProperty(required = true, value = "")
  @NotNull


  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public ResponseTimeFilterPostcodeSector properties(ResponseTimeFilterPostcodeSectorProperties properties) {
    this.properties = properties;
    return this;
  }

  /**
   * Get properties
   * @return properties
  */
  @ApiModelProperty(required = true, value = "")
  @NotNull

  @Valid

  public ResponseTimeFilterPostcodeSectorProperties getProperties() {
    return properties;
  }

  public void setProperties(ResponseTimeFilterPostcodeSectorProperties properties) {
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
    ResponseTimeFilterPostcodeSector responseTimeFilterPostcodeSector = (ResponseTimeFilterPostcodeSector) o;
    return Objects.equals(this.code, responseTimeFilterPostcodeSector.code) &&
        Objects.equals(this.properties, responseTimeFilterPostcodeSector.properties);
  }

  @Override
  public int hashCode() {
    return Objects.hash(code, properties);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeSector {\n");
    
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

