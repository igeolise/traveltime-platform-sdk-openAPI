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
 * Gets or Sets ResponseTransportationMode
 */
@JsonAdapter(ResponseTransportationMode.Adapter.class)
public enum ResponseTransportationMode {
  
  CAR("car"),
  
  PARKING("parking"),
  
  BOARDING("boarding"),
  
  WALK("walk"),
  
  BIKE("bike"),
  
  TRAIN("train"),
  
  RAIL_NATIONAL("rail_national"),
  
  RAIL_OVERGROUND("rail_overground"),
  
  RAIL_UNDERGROUND("rail_underground"),
  
  RAIL_DLR("rail_dlr"),
  
  BUS("bus"),
  
  CABLE_CAR("cable_car"),
  
  PLANE("plane"),
  
  FERRY("ferry"),
  
  COACH("coach");

  private String value;

  ResponseTransportationMode(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static ResponseTransportationMode fromValue(String value) {
    for (ResponseTransportationMode b : ResponseTransportationMode.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<ResponseTransportationMode> {
    @Override
    public void write(final JsonWriter jsonWriter, final ResponseTransportationMode enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public ResponseTransportationMode read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return ResponseTransportationMode.fromValue(value);
    }
  }
}

