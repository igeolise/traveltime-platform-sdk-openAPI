/*
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.annotations.SerializedName;

import java.io.IOException;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;

/**
 * Gets or Sets RequestTimeFilterPostcodeDistrictsProperty
 */
@JsonAdapter(RequestTimeFilterPostcodeDistrictsProperty.Adapter.class)
public enum RequestTimeFilterPostcodeDistrictsProperty {
  
  TRAVEL_TIME_REACHABLE("travel_time_reachable"),
  
  TRAVEL_TIME_ALL("travel_time_all"),
  
  COVERAGE("coverage");

  private String value;

  RequestTimeFilterPostcodeDistrictsProperty(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static RequestTimeFilterPostcodeDistrictsProperty fromValue(String value) {
    for (RequestTimeFilterPostcodeDistrictsProperty b : RequestTimeFilterPostcodeDistrictsProperty.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<RequestTimeFilterPostcodeDistrictsProperty> {
    @Override
    public void write(final JsonWriter jsonWriter, final RequestTimeFilterPostcodeDistrictsProperty enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public RequestTimeFilterPostcodeDistrictsProperty read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return RequestTimeFilterPostcodeDistrictsProperty.fromValue(value);
    }
  }
}

