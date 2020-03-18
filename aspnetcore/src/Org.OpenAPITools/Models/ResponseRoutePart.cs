/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ResponseRoutePart : IEquatable<ResponseRoutePart>
    {
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [Required]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }


        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<TypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum TypeEnum
        {
            
            /// <summary>
            /// Enum BasicEnum for basic
            /// </summary>
            [EnumMember(Value = "basic")]
            BasicEnum = 1,
            
            /// <summary>
            /// Enum StartEndEnum for start_end
            /// </summary>
            [EnumMember(Value = "start_end")]
            StartEndEnum = 2,
            
            /// <summary>
            /// Enum RoadEnum for road
            /// </summary>
            [EnumMember(Value = "road")]
            RoadEnum = 3,
            
            /// <summary>
            /// Enum PublicTransportEnum for public_transport
            /// </summary>
            [EnumMember(Value = "public_transport")]
            PublicTransportEnum = 4
        }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [Required]
        [DataMember(Name="type", EmitDefaultValue=false)]
        public TypeEnum Type { get; set; }

        /// <summary>
        /// Gets or Sets Mode
        /// </summary>
        [Required]
        [DataMember(Name="mode", EmitDefaultValue=false)]
        public ResponseTransportationMode Mode { get; set; }

        /// <summary>
        /// Gets or Sets Directions
        /// </summary>
        [Required]
        [DataMember(Name="directions", EmitDefaultValue=false)]
        public string Directions { get; set; }

        /// <summary>
        /// Gets or Sets Distance
        /// </summary>
        [Required]
        [DataMember(Name="distance", EmitDefaultValue=false)]
        public int Distance { get; set; }

        /// <summary>
        /// Gets or Sets TravelTime
        /// </summary>
        [Required]
        [DataMember(Name="travel_time", EmitDefaultValue=false)]
        public int TravelTime { get; set; }

        /// <summary>
        /// Gets or Sets Coords
        /// </summary>
        [Required]
        [DataMember(Name="coords", EmitDefaultValue=false)]
        public List<Coords> Coords { get; set; }

        /// <summary>
        /// Gets or Sets Direction
        /// </summary>
        [DataMember(Name="direction", EmitDefaultValue=false)]
        public string Direction { get; set; }

        /// <summary>
        /// Gets or Sets Road
        /// </summary>
        [DataMember(Name="road", EmitDefaultValue=false)]
        public string Road { get; set; }

        /// <summary>
        /// Gets or Sets Turn
        /// </summary>
        [DataMember(Name="turn", EmitDefaultValue=false)]
        public string Turn { get; set; }

        /// <summary>
        /// Gets or Sets Line
        /// </summary>
        [DataMember(Name="line", EmitDefaultValue=false)]
        public string Line { get; set; }

        /// <summary>
        /// Gets or Sets DepartureStation
        /// </summary>
        [DataMember(Name="departure_station", EmitDefaultValue=false)]
        public string DepartureStation { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalStation
        /// </summary>
        [DataMember(Name="arrival_station", EmitDefaultValue=false)]
        public string ArrivalStation { get; set; }

        /// <summary>
        /// Gets or Sets DepartsAt
        /// </summary>
        [DataMember(Name="departs_at", EmitDefaultValue=false)]
        public string DepartsAt { get; set; }

        /// <summary>
        /// Gets or Sets ArrivesAt
        /// </summary>
        [DataMember(Name="arrives_at", EmitDefaultValue=false)]
        public string ArrivesAt { get; set; }

        /// <summary>
        /// Gets or Sets NumStops
        /// </summary>
        [DataMember(Name="num_stops", EmitDefaultValue=false)]
        public int NumStops { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseRoutePart {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Mode: ").Append(Mode).Append("\n");
            sb.Append("  Directions: ").Append(Directions).Append("\n");
            sb.Append("  Distance: ").Append(Distance).Append("\n");
            sb.Append("  TravelTime: ").Append(TravelTime).Append("\n");
            sb.Append("  Coords: ").Append(Coords).Append("\n");
            sb.Append("  Direction: ").Append(Direction).Append("\n");
            sb.Append("  Road: ").Append(Road).Append("\n");
            sb.Append("  Turn: ").Append(Turn).Append("\n");
            sb.Append("  Line: ").Append(Line).Append("\n");
            sb.Append("  DepartureStation: ").Append(DepartureStation).Append("\n");
            sb.Append("  ArrivalStation: ").Append(ArrivalStation).Append("\n");
            sb.Append("  DepartsAt: ").Append(DepartsAt).Append("\n");
            sb.Append("  ArrivesAt: ").Append(ArrivesAt).Append("\n");
            sb.Append("  NumStops: ").Append(NumStops).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((ResponseRoutePart)obj);
        }

        /// <summary>
        /// Returns true if ResponseRoutePart instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseRoutePart to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseRoutePart other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    Type == other.Type ||
                    
                    Type.Equals(other.Type)
                ) && 
                (
                    Mode == other.Mode ||
                    
                    Mode.Equals(other.Mode)
                ) && 
                (
                    Directions == other.Directions ||
                    Directions != null &&
                    Directions.Equals(other.Directions)
                ) && 
                (
                    Distance == other.Distance ||
                    
                    Distance.Equals(other.Distance)
                ) && 
                (
                    TravelTime == other.TravelTime ||
                    
                    TravelTime.Equals(other.TravelTime)
                ) && 
                (
                    Coords == other.Coords ||
                    Coords != null &&
                    other.Coords != null &&
                    Coords.SequenceEqual(other.Coords)
                ) && 
                (
                    Direction == other.Direction ||
                    Direction != null &&
                    Direction.Equals(other.Direction)
                ) && 
                (
                    Road == other.Road ||
                    Road != null &&
                    Road.Equals(other.Road)
                ) && 
                (
                    Turn == other.Turn ||
                    Turn != null &&
                    Turn.Equals(other.Turn)
                ) && 
                (
                    Line == other.Line ||
                    Line != null &&
                    Line.Equals(other.Line)
                ) && 
                (
                    DepartureStation == other.DepartureStation ||
                    DepartureStation != null &&
                    DepartureStation.Equals(other.DepartureStation)
                ) && 
                (
                    ArrivalStation == other.ArrivalStation ||
                    ArrivalStation != null &&
                    ArrivalStation.Equals(other.ArrivalStation)
                ) && 
                (
                    DepartsAt == other.DepartsAt ||
                    DepartsAt != null &&
                    DepartsAt.Equals(other.DepartsAt)
                ) && 
                (
                    ArrivesAt == other.ArrivesAt ||
                    ArrivesAt != null &&
                    ArrivesAt.Equals(other.ArrivesAt)
                ) && 
                (
                    NumStops == other.NumStops ||
                    
                    NumStops.Equals(other.NumStops)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    
                    hashCode = hashCode * 59 + Type.GetHashCode();
                    
                    hashCode = hashCode * 59 + Mode.GetHashCode();
                    if (Directions != null)
                    hashCode = hashCode * 59 + Directions.GetHashCode();
                    
                    hashCode = hashCode * 59 + Distance.GetHashCode();
                    
                    hashCode = hashCode * 59 + TravelTime.GetHashCode();
                    if (Coords != null)
                    hashCode = hashCode * 59 + Coords.GetHashCode();
                    if (Direction != null)
                    hashCode = hashCode * 59 + Direction.GetHashCode();
                    if (Road != null)
                    hashCode = hashCode * 59 + Road.GetHashCode();
                    if (Turn != null)
                    hashCode = hashCode * 59 + Turn.GetHashCode();
                    if (Line != null)
                    hashCode = hashCode * 59 + Line.GetHashCode();
                    if (DepartureStation != null)
                    hashCode = hashCode * 59 + DepartureStation.GetHashCode();
                    if (ArrivalStation != null)
                    hashCode = hashCode * 59 + ArrivalStation.GetHashCode();
                    if (DepartsAt != null)
                    hashCode = hashCode * 59 + DepartsAt.GetHashCode();
                    if (ArrivesAt != null)
                    hashCode = hashCode * 59 + ArrivesAt.GetHashCode();
                    
                    hashCode = hashCode * 59 + NumStops.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseRoutePart left, ResponseRoutePart right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseRoutePart left, ResponseRoutePart right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
