using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class RequestRoutes {
    /// <summary>
    /// Gets or Sets Locations
    /// </summary>
    [DataMember(Name="locations", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locations")]
    public List<RequestLocation> Locations { get; set; }

    /// <summary>
    /// Gets or Sets DepartureSearches
    /// </summary>
    [DataMember(Name="departure_searches", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "departure_searches")]
    public List<RequestRoutesDepartureSearch> DepartureSearches { get; set; }

    /// <summary>
    /// Gets or Sets ArrivalSearches
    /// </summary>
    [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "arrival_searches")]
    public List<RequestRoutesArrivalSearch> ArrivalSearches { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class RequestRoutes {\n");
      sb.Append("  Locations: ").Append(Locations).Append("\n");
      sb.Append("  DepartureSearches: ").Append(DepartureSearches).Append("\n");
      sb.Append("  ArrivalSearches: ").Append(ArrivalSearches).Append("\n");
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
