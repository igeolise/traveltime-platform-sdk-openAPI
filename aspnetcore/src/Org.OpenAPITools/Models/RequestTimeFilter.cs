/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
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
    public partial class RequestTimeFilter : IEquatable<RequestTimeFilter>
    {
        /// <summary>
        /// Gets or Sets Locations
        /// </summary>
        [Required]
        [DataMember(Name="locations", EmitDefaultValue=false)]
        public List<RequestLocation> Locations { get; set; }

        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilter {\n");
            sb.Append("  Locations: ").Append(Locations).Append("\n");
            sb.Append("  DepartureSearches: ").Append(DepartureSearches).Append("\n");
            sb.Append("  ArrivalSearches: ").Append(ArrivalSearches).Append("\n");
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
            return obj.GetType() == GetType() && Equals((RequestTimeFilter)obj);
        }

        /// <summary>
        /// Returns true if RequestTimeFilter instances are equal
        /// </summary>
        /// <param name="other">Instance of RequestTimeFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilter other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Locations == other.Locations ||
                    Locations != null &&
                    other.Locations != null &&
                    Locations.SequenceEqual(other.Locations)
                ) && 
                (
                    DepartureSearches == other.DepartureSearches ||
                    DepartureSearches != null &&
                    other.DepartureSearches != null &&
                    DepartureSearches.SequenceEqual(other.DepartureSearches)
                ) && 
                (
                    ArrivalSearches == other.ArrivalSearches ||
                    ArrivalSearches != null &&
                    other.ArrivalSearches != null &&
                    ArrivalSearches.SequenceEqual(other.ArrivalSearches)
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
                    if (Locations != null)
                    hashCode = hashCode * 59 + Locations.GetHashCode();
                    if (DepartureSearches != null)
                    hashCode = hashCode * 59 + DepartureSearches.GetHashCode();
                    if (ArrivalSearches != null)
                    hashCode = hashCode * 59 + ArrivalSearches.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(RequestTimeFilter left, RequestTimeFilter right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(RequestTimeFilter left, RequestTimeFilter right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
