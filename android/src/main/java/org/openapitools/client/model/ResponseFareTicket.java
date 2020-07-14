/**
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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseFareTicket {
  
  public enum TypeEnum {
     single,  week,  month,  year, 
  };
  @SerializedName("type")
  private TypeEnum type = null;
  @SerializedName("price")
  private Double price = null;
  @SerializedName("currency")
  private String currency = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public TypeEnum getType() {
    return type;
  }
  public void setType(TypeEnum type) {
    this.type = type;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Double getPrice() {
    return price;
  }
  public void setPrice(Double price) {
    this.price = price;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseFareTicket responseFareTicket = (ResponseFareTicket) o;
    return (this.type == null ? responseFareTicket.type == null : this.type.equals(responseFareTicket.type)) &&
        (this.price == null ? responseFareTicket.price == null : this.price.equals(responseFareTicket.price)) &&
        (this.currency == null ? responseFareTicket.currency == null : this.currency.equals(responseFareTicket.currency));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.price == null ? 0: this.price.hashCode());
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseFareTicket {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  price: ").append(price).append("\n");
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
