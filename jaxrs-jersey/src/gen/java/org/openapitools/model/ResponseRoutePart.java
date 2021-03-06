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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.Coords;
import org.openapitools.model.ResponseTransportationMode;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseRoutePart
 */
@JsonPropertyOrder({
  ResponseRoutePart.JSON_PROPERTY_ID,
  ResponseRoutePart.JSON_PROPERTY_TYPE,
  ResponseRoutePart.JSON_PROPERTY_MODE,
  ResponseRoutePart.JSON_PROPERTY_DIRECTIONS,
  ResponseRoutePart.JSON_PROPERTY_DISTANCE,
  ResponseRoutePart.JSON_PROPERTY_TRAVEL_TIME,
  ResponseRoutePart.JSON_PROPERTY_COORDS,
  ResponseRoutePart.JSON_PROPERTY_DIRECTION,
  ResponseRoutePart.JSON_PROPERTY_ROAD,
  ResponseRoutePart.JSON_PROPERTY_TURN,
  ResponseRoutePart.JSON_PROPERTY_LINE,
  ResponseRoutePart.JSON_PROPERTY_DEPARTURE_STATION,
  ResponseRoutePart.JSON_PROPERTY_ARRIVAL_STATION,
  ResponseRoutePart.JSON_PROPERTY_DEPARTS_AT,
  ResponseRoutePart.JSON_PROPERTY_ARRIVES_AT,
  ResponseRoutePart.JSON_PROPERTY_NUM_STOPS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-07-14T11:27:32.798Z[Etc/UTC]")
public class ResponseRoutePart   {
  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  /**
   * Gets or Sets type
   */
  public enum TypeEnum {
    BASIC("basic"),
    
    START_END("start_end"),
    
    ROAD("road"),
    
    PUBLIC_TRANSPORT("public_transport");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static TypeEnum fromValue(String value) {
      for (TypeEnum b : TypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  public static final String JSON_PROPERTY_TYPE = "type";
  @JsonProperty(JSON_PROPERTY_TYPE)
  private TypeEnum type;

  public static final String JSON_PROPERTY_MODE = "mode";
  @JsonProperty(JSON_PROPERTY_MODE)
  private ResponseTransportationMode mode;

  public static final String JSON_PROPERTY_DIRECTIONS = "directions";
  @JsonProperty(JSON_PROPERTY_DIRECTIONS)
  private String directions;

  public static final String JSON_PROPERTY_DISTANCE = "distance";
  @JsonProperty(JSON_PROPERTY_DISTANCE)
  private Integer distance;

  public static final String JSON_PROPERTY_TRAVEL_TIME = "travel_time";
  @JsonProperty(JSON_PROPERTY_TRAVEL_TIME)
  private Integer travelTime;

  public static final String JSON_PROPERTY_COORDS = "coords";
  @JsonProperty(JSON_PROPERTY_COORDS)
  private List<Coords> coords = new ArrayList<Coords>();

  public static final String JSON_PROPERTY_DIRECTION = "direction";
  @JsonProperty(JSON_PROPERTY_DIRECTION)
  private String direction;

  public static final String JSON_PROPERTY_ROAD = "road";
  @JsonProperty(JSON_PROPERTY_ROAD)
  private String road;

  public static final String JSON_PROPERTY_TURN = "turn";
  @JsonProperty(JSON_PROPERTY_TURN)
  private String turn;

  public static final String JSON_PROPERTY_LINE = "line";
  @JsonProperty(JSON_PROPERTY_LINE)
  private String line;

  public static final String JSON_PROPERTY_DEPARTURE_STATION = "departure_station";
  @JsonProperty(JSON_PROPERTY_DEPARTURE_STATION)
  private String departureStation;

  public static final String JSON_PROPERTY_ARRIVAL_STATION = "arrival_station";
  @JsonProperty(JSON_PROPERTY_ARRIVAL_STATION)
  private String arrivalStation;

  public static final String JSON_PROPERTY_DEPARTS_AT = "departs_at";
  @JsonProperty(JSON_PROPERTY_DEPARTS_AT)
  private String departsAt;

  public static final String JSON_PROPERTY_ARRIVES_AT = "arrives_at";
  @JsonProperty(JSON_PROPERTY_ARRIVES_AT)
  private String arrivesAt;

  public static final String JSON_PROPERTY_NUM_STOPS = "num_stops";
  @JsonProperty(JSON_PROPERTY_NUM_STOPS)
  private Integer numStops;

  public ResponseRoutePart id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
  @JsonProperty("id")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ResponseRoutePart type(TypeEnum type) {
    this.type = type;
    return this;
  }

  /**
   * Get type
   * @return type
   **/
  @JsonProperty("type")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public ResponseRoutePart mode(ResponseTransportationMode mode) {
    this.mode = mode;
    return this;
  }

  /**
   * Get mode
   * @return mode
   **/
  @JsonProperty("mode")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public ResponseTransportationMode getMode() {
    return mode;
  }

  public void setMode(ResponseTransportationMode mode) {
    this.mode = mode;
  }

  public ResponseRoutePart directions(String directions) {
    this.directions = directions;
    return this;
  }

  /**
   * Get directions
   * @return directions
   **/
  @JsonProperty("directions")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getDirections() {
    return directions;
  }

  public void setDirections(String directions) {
    this.directions = directions;
  }

  public ResponseRoutePart distance(Integer distance) {
    this.distance = distance;
    return this;
  }

  /**
   * Get distance
   * @return distance
   **/
  @JsonProperty("distance")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Integer getDistance() {
    return distance;
  }

  public void setDistance(Integer distance) {
    this.distance = distance;
  }

  public ResponseRoutePart travelTime(Integer travelTime) {
    this.travelTime = travelTime;
    return this;
  }

  /**
   * Get travelTime
   * @return travelTime
   **/
  @JsonProperty("travel_time")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Integer getTravelTime() {
    return travelTime;
  }

  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  public ResponseRoutePart coords(List<Coords> coords) {
    this.coords = coords;
    return this;
  }

  public ResponseRoutePart addCoordsItem(Coords coordsItem) {
    this.coords.add(coordsItem);
    return this;
  }

  /**
   * Get coords
   * @return coords
   **/
  @JsonProperty("coords")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<Coords> getCoords() {
    return coords;
  }

  public void setCoords(List<Coords> coords) {
    this.coords = coords;
  }

  public ResponseRoutePart direction(String direction) {
    this.direction = direction;
    return this;
  }

  /**
   * Get direction
   * @return direction
   **/
  @JsonProperty("direction")
  @ApiModelProperty(value = "")
  
  public String getDirection() {
    return direction;
  }

  public void setDirection(String direction) {
    this.direction = direction;
  }

  public ResponseRoutePart road(String road) {
    this.road = road;
    return this;
  }

  /**
   * Get road
   * @return road
   **/
  @JsonProperty("road")
  @ApiModelProperty(value = "")
  
  public String getRoad() {
    return road;
  }

  public void setRoad(String road) {
    this.road = road;
  }

  public ResponseRoutePart turn(String turn) {
    this.turn = turn;
    return this;
  }

  /**
   * Get turn
   * @return turn
   **/
  @JsonProperty("turn")
  @ApiModelProperty(value = "")
  
  public String getTurn() {
    return turn;
  }

  public void setTurn(String turn) {
    this.turn = turn;
  }

  public ResponseRoutePart line(String line) {
    this.line = line;
    return this;
  }

  /**
   * Get line
   * @return line
   **/
  @JsonProperty("line")
  @ApiModelProperty(value = "")
  
  public String getLine() {
    return line;
  }

  public void setLine(String line) {
    this.line = line;
  }

  public ResponseRoutePart departureStation(String departureStation) {
    this.departureStation = departureStation;
    return this;
  }

  /**
   * Get departureStation
   * @return departureStation
   **/
  @JsonProperty("departure_station")
  @ApiModelProperty(value = "")
  
  public String getDepartureStation() {
    return departureStation;
  }

  public void setDepartureStation(String departureStation) {
    this.departureStation = departureStation;
  }

  public ResponseRoutePart arrivalStation(String arrivalStation) {
    this.arrivalStation = arrivalStation;
    return this;
  }

  /**
   * Get arrivalStation
   * @return arrivalStation
   **/
  @JsonProperty("arrival_station")
  @ApiModelProperty(value = "")
  
  public String getArrivalStation() {
    return arrivalStation;
  }

  public void setArrivalStation(String arrivalStation) {
    this.arrivalStation = arrivalStation;
  }

  public ResponseRoutePart departsAt(String departsAt) {
    this.departsAt = departsAt;
    return this;
  }

  /**
   * Get departsAt
   * @return departsAt
   **/
  @JsonProperty("departs_at")
  @ApiModelProperty(value = "")
  
  public String getDepartsAt() {
    return departsAt;
  }

  public void setDepartsAt(String departsAt) {
    this.departsAt = departsAt;
  }

  public ResponseRoutePart arrivesAt(String arrivesAt) {
    this.arrivesAt = arrivesAt;
    return this;
  }

  /**
   * Get arrivesAt
   * @return arrivesAt
   **/
  @JsonProperty("arrives_at")
  @ApiModelProperty(value = "")
  
  public String getArrivesAt() {
    return arrivesAt;
  }

  public void setArrivesAt(String arrivesAt) {
    this.arrivesAt = arrivesAt;
  }

  public ResponseRoutePart numStops(Integer numStops) {
    this.numStops = numStops;
    return this;
  }

  /**
   * Get numStops
   * @return numStops
   **/
  @JsonProperty("num_stops")
  @ApiModelProperty(value = "")
  
  public Integer getNumStops() {
    return numStops;
  }

  public void setNumStops(Integer numStops) {
    this.numStops = numStops;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseRoutePart responseRoutePart = (ResponseRoutePart) o;
    return Objects.equals(this.id, responseRoutePart.id) &&
        Objects.equals(this.type, responseRoutePart.type) &&
        Objects.equals(this.mode, responseRoutePart.mode) &&
        Objects.equals(this.directions, responseRoutePart.directions) &&
        Objects.equals(this.distance, responseRoutePart.distance) &&
        Objects.equals(this.travelTime, responseRoutePart.travelTime) &&
        Objects.equals(this.coords, responseRoutePart.coords) &&
        Objects.equals(this.direction, responseRoutePart.direction) &&
        Objects.equals(this.road, responseRoutePart.road) &&
        Objects.equals(this.turn, responseRoutePart.turn) &&
        Objects.equals(this.line, responseRoutePart.line) &&
        Objects.equals(this.departureStation, responseRoutePart.departureStation) &&
        Objects.equals(this.arrivalStation, responseRoutePart.arrivalStation) &&
        Objects.equals(this.departsAt, responseRoutePart.departsAt) &&
        Objects.equals(this.arrivesAt, responseRoutePart.arrivesAt) &&
        Objects.equals(this.numStops, responseRoutePart.numStops);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, type, mode, directions, distance, travelTime, coords, direction, road, turn, line, departureStation, arrivalStation, departsAt, arrivesAt, numStops);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseRoutePart {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    mode: ").append(toIndentedString(mode)).append("\n");
    sb.append("    directions: ").append(toIndentedString(directions)).append("\n");
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    coords: ").append(toIndentedString(coords)).append("\n");
    sb.append("    direction: ").append(toIndentedString(direction)).append("\n");
    sb.append("    road: ").append(toIndentedString(road)).append("\n");
    sb.append("    turn: ").append(toIndentedString(turn)).append("\n");
    sb.append("    line: ").append(toIndentedString(line)).append("\n");
    sb.append("    departureStation: ").append(toIndentedString(departureStation)).append("\n");
    sb.append("    arrivalStation: ").append(toIndentedString(arrivalStation)).append("\n");
    sb.append("    departsAt: ").append(toIndentedString(departsAt)).append("\n");
    sb.append("    arrivesAt: ").append(toIndentedString(arrivesAt)).append("\n");
    sb.append("    numStops: ").append(toIndentedString(numStops)).append("\n");
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

