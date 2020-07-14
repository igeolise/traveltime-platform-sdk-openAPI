package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.vertxweb.server.model.ResponseTimeFilterFastLocation;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class ResponseTimeFilterFastResult   {
  
  private String searchId;
  private List<ResponseTimeFilterFastLocation> locations = new ArrayList<>();
  private List<String> unreachable = new ArrayList<>();

  public ResponseTimeFilterFastResult () {

  }

  public ResponseTimeFilterFastResult (String searchId, List<ResponseTimeFilterFastLocation> locations, List<String> unreachable) {
    this.searchId = searchId;
    this.locations = locations;
    this.unreachable = unreachable;
  }

    
  @JsonProperty("search_id")
  public String getSearchId() {
    return searchId;
  }
  public void setSearchId(String searchId) {
    this.searchId = searchId;
  }

    
  @JsonProperty("locations")
  public List<ResponseTimeFilterFastLocation> getLocations() {
    return locations;
  }
  public void setLocations(List<ResponseTimeFilterFastLocation> locations) {
    this.locations = locations;
  }

    
  @JsonProperty("unreachable")
  public List<String> getUnreachable() {
    return unreachable;
  }
  public void setUnreachable(List<String> unreachable) {
    this.unreachable = unreachable;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterFastResult responseTimeFilterFastResult = (ResponseTimeFilterFastResult) o;
    return Objects.equals(searchId, responseTimeFilterFastResult.searchId) &&
        Objects.equals(locations, responseTimeFilterFastResult.locations) &&
        Objects.equals(unreachable, responseTimeFilterFastResult.unreachable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(searchId, locations, unreachable);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterFastResult {\n");
    
    sb.append("    searchId: ").append(toIndentedString(searchId)).append("\n");
    sb.append("    locations: ").append(toIndentedString(locations)).append("\n");
    sb.append("    unreachable: ").append(toIndentedString(unreachable)).append("\n");
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
