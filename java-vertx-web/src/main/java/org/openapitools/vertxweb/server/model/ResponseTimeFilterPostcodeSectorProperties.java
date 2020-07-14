package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import org.openapitools.vertxweb.server.model.ResponseTravelTimeStatistics;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class ResponseTimeFilterPostcodeSectorProperties   {
  
  private ResponseTravelTimeStatistics travelTimeReachable;
  private ResponseTravelTimeStatistics travelTimeAll;
  private Double coverage;

  public ResponseTimeFilterPostcodeSectorProperties () {

  }

  public ResponseTimeFilterPostcodeSectorProperties (ResponseTravelTimeStatistics travelTimeReachable, ResponseTravelTimeStatistics travelTimeAll, Double coverage) {
    this.travelTimeReachable = travelTimeReachable;
    this.travelTimeAll = travelTimeAll;
    this.coverage = coverage;
  }

    
  @JsonProperty("travel_time_reachable")
  public ResponseTravelTimeStatistics getTravelTimeReachable() {
    return travelTimeReachable;
  }
  public void setTravelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
  }

    
  @JsonProperty("travel_time_all")
  public ResponseTravelTimeStatistics getTravelTimeAll() {
    return travelTimeAll;
  }
  public void setTravelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
  }

    
  @JsonProperty("coverage")
  public Double getCoverage() {
    return coverage;
  }
  public void setCoverage(Double coverage) {
    this.coverage = coverage;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodeSectorProperties responseTimeFilterPostcodeSectorProperties = (ResponseTimeFilterPostcodeSectorProperties) o;
    return Objects.equals(travelTimeReachable, responseTimeFilterPostcodeSectorProperties.travelTimeReachable) &&
        Objects.equals(travelTimeAll, responseTimeFilterPostcodeSectorProperties.travelTimeAll) &&
        Objects.equals(coverage, responseTimeFilterPostcodeSectorProperties.coverage);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTimeReachable, travelTimeAll, coverage);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeSectorProperties {\n");
    
    sb.append("    travelTimeReachable: ").append(toIndentedString(travelTimeReachable)).append("\n");
    sb.append("    travelTimeAll: ").append(toIndentedString(travelTimeAll)).append("\n");
    sb.append("    coverage: ").append(toIndentedString(coverage)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
