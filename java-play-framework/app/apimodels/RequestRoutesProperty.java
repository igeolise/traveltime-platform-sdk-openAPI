package apimodels;

import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
 * Gets or Sets RequestRoutesProperty
 */
public enum RequestRoutesProperty {
  
  TRAVEL_TIME("travel_time"),
  
  DISTANCE("distance"),
  
  FARES("fares"),
  
  ROUTE("route");

  private final String value;

  RequestRoutesProperty(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static RequestRoutesProperty fromValue(String value) {
    for (RequestRoutesProperty b : RequestRoutesProperty.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }
}

