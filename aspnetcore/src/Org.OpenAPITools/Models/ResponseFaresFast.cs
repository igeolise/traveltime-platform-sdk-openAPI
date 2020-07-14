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
    public partial class ResponseFaresFast : IEquatable<ResponseFaresFast>
    {
        /// <summary>
        /// Gets or Sets TicketsTotal
        /// </summary>
        [Required]
        [DataMember(Name="tickets_total", EmitDefaultValue=false)]
        public List<ResponseFareTicket> TicketsTotal { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseFaresFast {\n");
            sb.Append("  TicketsTotal: ").Append(TicketsTotal).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseFaresFast)obj);
        }

        /// <summary>
        /// Returns true if ResponseFaresFast instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseFaresFast to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseFaresFast other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    TicketsTotal == other.TicketsTotal ||
                    TicketsTotal != null &&
                    other.TicketsTotal != null &&
                    TicketsTotal.SequenceEqual(other.TicketsTotal)
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
                    if (TicketsTotal != null)
                    hashCode = hashCode * 59 + TicketsTotal.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseFaresFast left, ResponseFaresFast right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseFaresFast left, ResponseFaresFast right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
