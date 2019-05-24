/*
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
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
 * Gets or Sets RequestTimeMapProperty
 */
@JsonAdapter(RequestTimeMapProperty.Adapter.class)
public enum RequestTimeMapProperty {
  
  IS_ONLY_WALKING("is_only_walking");

  private String value;

  RequestTimeMapProperty(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static RequestTimeMapProperty fromValue(String value) {
    for (RequestTimeMapProperty b : RequestTimeMapProperty.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<RequestTimeMapProperty> {
    @Override
    public void write(final JsonWriter jsonWriter, final RequestTimeMapProperty enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public RequestTimeMapProperty read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return RequestTimeMapProperty.fromValue(value);
    }
  }
}

