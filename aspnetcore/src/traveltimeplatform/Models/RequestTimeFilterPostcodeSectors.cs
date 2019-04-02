/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace traveltimeplatform.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterPostcodeSectors : IEquatable<RequestTimeFilterPostcodeSectors>
    { 
        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches")]
        public List<RequestTimeFilterPostcodeSectorsDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches")]
        public List<RequestTimeFilterPostcodeSectorsArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterPostcodeSectors {\n");
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
            return obj.GetType() == GetType() && Equals((RequestTimeFilterPostcodeSectors)obj);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterPostcodeSectors instances are equal
        /// </summary>
        /// <param name="other">Instance of RequestTimeFilterPostcodeSectors to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterPostcodeSectors other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DepartureSearches == other.DepartureSearches ||
                    DepartureSearches != null &&
                    DepartureSearches.SequenceEqual(other.DepartureSearches)
                ) && 
                (
                    ArrivalSearches == other.ArrivalSearches ||
                    ArrivalSearches != null &&
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
                    if (DepartureSearches != null)
                    hashCode = hashCode * 59 + DepartureSearches.GetHashCode();
                    if (ArrivalSearches != null)
                    hashCode = hashCode * 59 + ArrivalSearches.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(RequestTimeFilterPostcodeSectors left, RequestTimeFilterPostcodeSectors right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(RequestTimeFilterPostcodeSectors left, RequestTimeFilterPostcodeSectors right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
