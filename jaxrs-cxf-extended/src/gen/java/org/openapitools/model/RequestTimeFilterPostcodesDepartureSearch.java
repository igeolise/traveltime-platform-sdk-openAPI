package org.openapitools.model;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import org.openapitools.model.RequestRangeFull;
import org.openapitools.model.RequestTimeFilterPostcodesProperty;
import org.openapitools.model.RequestTransportation;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;

public class RequestTimeFilterPostcodesDepartureSearch  {
  
  @ApiModelProperty(required = true, value = "")
  private String id;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private RequestTransportation transportation = null;

  @ApiModelProperty(required = true, value = "")
  private Integer travelTime;

  @ApiModelProperty(required = true, value = "")
  @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd'T'hh:mm:ss.SSSX")
  private Date departureTime;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private List<RequestTimeFilterPostcodesProperty> properties = new ArrayList<RequestTimeFilterPostcodesProperty>();

  @ApiModelProperty(value = "")
  @Valid
  private RequestRangeFull range = null;
 /**
  * Get id
  * @return id
  */
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  /**
   * Sets the <code>id</code> property.
   */
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Sets the <code>id</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch id(String id) {
    this.id = id;
    return this;
  }

 /**
  * Get transportation
  * @return transportation
  */
  @JsonProperty("transportation")
  @NotNull
  public RequestTransportation getTransportation() {
    return transportation;
  }

  /**
   * Sets the <code>transportation</code> property.
   */
  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }

  /**
   * Sets the <code>transportation</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch transportation(RequestTransportation transportation) {
    this.transportation = transportation;
    return this;
  }

 /**
  * Get travelTime
  * minimum: 60
  * maximum: 14400
  * @return travelTime
  */
  @JsonProperty("travel_time")
  @NotNull
 @Min(60) @Max(14400)  public Integer getTravelTime() {
    return travelTime;
  }

  /**
   * Sets the <code>travelTime</code> property.
   */
  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  /**
   * Sets the <code>travelTime</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch travelTime(Integer travelTime) {
    this.travelTime = travelTime;
    return this;
  }

 /**
  * Get departureTime
  * @return departureTime
  */
  @JsonProperty("departure_time")
  @NotNull
  public Date getDepartureTime() {
    return departureTime;
  }

  /**
   * Sets the <code>departureTime</code> property.
   */
  public void setDepartureTime(Date departureTime) {
    this.departureTime = departureTime;
  }

  /**
   * Sets the <code>departureTime</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch departureTime(Date departureTime) {
    this.departureTime = departureTime;
    return this;
  }

 /**
  * Get properties
  * @return properties
  */
  @JsonProperty("properties")
  @NotNull
  public List<RequestTimeFilterPostcodesProperty> getProperties() {
    return properties;
  }

  /**
   * Sets the <code>properties</code> property.
   */
  public void setProperties(List<RequestTimeFilterPostcodesProperty> properties) {
    this.properties = properties;
  }

  /**
   * Sets the <code>properties</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch properties(List<RequestTimeFilterPostcodesProperty> properties) {
    this.properties = properties;
    return this;
  }

  /**
   * Adds a new item to the <code>properties</code> list.
   */
  public RequestTimeFilterPostcodesDepartureSearch addPropertiesItem(RequestTimeFilterPostcodesProperty propertiesItem) {
    this.properties.add(propertiesItem);
    return this;
  }

 /**
  * Get range
  * @return range
  */
  @JsonProperty("range")
  public RequestRangeFull getRange() {
    return range;
  }

  /**
   * Sets the <code>range</code> property.
   */
  public void setRange(RequestRangeFull range) {
    this.range = range;
  }

  /**
   * Sets the <code>range</code> property.
   */
  public RequestTimeFilterPostcodesDepartureSearch range(RequestRangeFull range) {
    this.range = range;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterPostcodesDepartureSearch {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    transportation: ").append(toIndentedString(transportation)).append("\n");
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    departureTime: ").append(toIndentedString(departureTime)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
    sb.append("    range: ").append(toIndentedString(range)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

