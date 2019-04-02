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
    public partial class ResponseMapInfoFeaturesPublicTransport : IEquatable<ResponseMapInfoFeaturesPublicTransport>
    { 
        /// <summary>
        /// Gets or Sets DateStart
        /// </summary>
        [Required]
        [DataMember(Name="date_start")]
        public DateTime? DateStart { get; set; }

        /// <summary>
        /// Gets or Sets DateEnd
        /// </summary>
        [Required]
        [DataMember(Name="date_end")]
        public DateTime? DateEnd { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseMapInfoFeaturesPublicTransport {\n");
            sb.Append("  DateStart: ").Append(DateStart).Append("\n");
            sb.Append("  DateEnd: ").Append(DateEnd).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseMapInfoFeaturesPublicTransport)obj);
        }

        /// <summary>
        /// Returns true if ResponseMapInfoFeaturesPublicTransport instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseMapInfoFeaturesPublicTransport to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseMapInfoFeaturesPublicTransport other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DateStart == other.DateStart ||
                    DateStart != null &&
                    DateStart.Equals(other.DateStart)
                ) && 
                (
                    DateEnd == other.DateEnd ||
                    DateEnd != null &&
                    DateEnd.Equals(other.DateEnd)
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
                    if (DateStart != null)
                    hashCode = hashCode * 59 + DateStart.GetHashCode();
                    if (DateEnd != null)
                    hashCode = hashCode * 59 + DateEnd.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseMapInfoFeaturesPublicTransport left, ResponseMapInfoFeaturesPublicTransport right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseMapInfoFeaturesPublicTransport left, ResponseMapInfoFeaturesPublicTransport right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
