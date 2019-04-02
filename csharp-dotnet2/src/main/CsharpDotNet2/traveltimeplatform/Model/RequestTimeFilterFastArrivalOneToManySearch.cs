using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace traveltimeplatform.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class RequestTimeFilterFastArrivalOneToManySearch {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Gets or Sets DepartureLocationId
    /// </summary>
    [DataMember(Name="departure_location_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "departure_location_id")]
    public string DepartureLocationId { get; set; }

    /// <summary>
    /// Gets or Sets ArrivalLocationIds
    /// </summary>
    [DataMember(Name="arrival_location_ids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "arrival_location_ids")]
    public List<string> ArrivalLocationIds { get; set; }

    /// <summary>
    /// Gets or Sets Transportation
    /// </summary>
    [DataMember(Name="transportation", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "transportation")]
    public RequestTransportationFast Transportation { get; set; }

    /// <summary>
    /// Gets or Sets TravelTime
    /// </summary>
    [DataMember(Name="travel_time", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "travel_time")]
    public int? TravelTime { get; set; }

    /// <summary>
    /// Gets or Sets ArrivalTimePeriod
    /// </summary>
    [DataMember(Name="arrival_time_period", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "arrival_time_period")]
    public RequestArrivalTimePeriod ArrivalTimePeriod { get; set; }

    /// <summary>
    /// Gets or Sets Properties
    /// </summary>
    [DataMember(Name="properties", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "properties")]
    public List<RequestTimeFilterFastProperty> Properties { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class RequestTimeFilterFastArrivalOneToManySearch {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  DepartureLocationId: ").Append(DepartureLocationId).Append("\n");
      sb.Append("  ArrivalLocationIds: ").Append(ArrivalLocationIds).Append("\n");
      sb.Append("  Transportation: ").Append(Transportation).Append("\n");
      sb.Append("  TravelTime: ").Append(TravelTime).Append("\n");
      sb.Append("  ArrivalTimePeriod: ").Append(ArrivalTimePeriod).Append("\n");
      sb.Append("  Properties: ").Append(Properties).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
