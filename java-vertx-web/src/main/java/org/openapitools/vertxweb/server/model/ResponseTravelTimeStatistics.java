package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class ResponseTravelTimeStatistics   {
  
  private Integer min;
  private Integer max;
  private Integer mean;
  private Integer median;

  public ResponseTravelTimeStatistics () {

  }

  public ResponseTravelTimeStatistics (Integer min, Integer max, Integer mean, Integer median) {
    this.min = min;
    this.max = max;
    this.mean = mean;
    this.median = median;
  }

    
  @JsonProperty("min")
  public Integer getMin() {
    return min;
  }
  public void setMin(Integer min) {
    this.min = min;
  }

    
  @JsonProperty("max")
  public Integer getMax() {
    return max;
  }
  public void setMax(Integer max) {
    this.max = max;
  }

    
  @JsonProperty("mean")
  public Integer getMean() {
    return mean;
  }
  public void setMean(Integer mean) {
    this.mean = mean;
  }

    
  @JsonProperty("median")
  public Integer getMedian() {
    return median;
  }
  public void setMedian(Integer median) {
    this.median = median;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTravelTimeStatistics responseTravelTimeStatistics = (ResponseTravelTimeStatistics) o;
    return Objects.equals(min, responseTravelTimeStatistics.min) &&
        Objects.equals(max, responseTravelTimeStatistics.max) &&
        Objects.equals(mean, responseTravelTimeStatistics.mean) &&
        Objects.equals(median, responseTravelTimeStatistics.median);
  }

  @Override
  public int hashCode() {
    return Objects.hash(min, max, mean, median);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTravelTimeStatistics {\n");
    
    sb.append("    min: ").append(toIndentedString(min)).append("\n");
    sb.append("    max: ").append(toIndentedString(max)).append("\n");
    sb.append("    mean: ").append(toIndentedString(mean)).append("\n");
    sb.append("    median: ").append(toIndentedString(median)).append("\n");
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
