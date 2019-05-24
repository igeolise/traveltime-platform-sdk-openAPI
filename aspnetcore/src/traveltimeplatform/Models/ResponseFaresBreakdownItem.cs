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
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace traveltimeplatform.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ResponseFaresBreakdownItem : IEquatable<ResponseFaresBreakdownItem>
    { 
        /// <summary>
        /// Gets or Sets Modes
        /// </summary>
        [Required]
        [DataMember(Name="modes", EmitDefaultValue=false)]
        public List<ResponseTransportationMode> Modes { get; set; }

        /// <summary>
        /// Gets or Sets RoutePartIds
        /// </summary>
        [Required]
        [DataMember(Name="route_part_ids", EmitDefaultValue=false)]
        public List<int?> RoutePartIds { get; set; }

        /// <summary>
        /// Gets or Sets Tickets
        /// </summary>
        [Required]
        [DataMember(Name="tickets", EmitDefaultValue=false)]
        public List<ResponseFareTicket> Tickets { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseFaresBreakdownItem {\n");
            sb.Append("  Modes: ").Append(Modes).Append("\n");
            sb.Append("  RoutePartIds: ").Append(RoutePartIds).Append("\n");
            sb.Append("  Tickets: ").Append(Tickets).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseFaresBreakdownItem)obj);
        }

        /// <summary>
        /// Returns true if ResponseFaresBreakdownItem instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseFaresBreakdownItem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseFaresBreakdownItem other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Modes == other.Modes ||
                    Modes != null &&
                    other.Modes != null &&
                    Modes.SequenceEqual(other.Modes)
                ) && 
                (
                    RoutePartIds == other.RoutePartIds ||
                    RoutePartIds != null &&
                    other.RoutePartIds != null &&
                    RoutePartIds.SequenceEqual(other.RoutePartIds)
                ) && 
                (
                    Tickets == other.Tickets ||
                    Tickets != null &&
                    other.Tickets != null &&
                    Tickets.SequenceEqual(other.Tickets)
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
                    if (Modes != null)
                    hashCode = hashCode * 59 + Modes.GetHashCode();
                    if (RoutePartIds != null)
                    hashCode = hashCode * 59 + RoutePartIds.GetHashCode();
                    if (Tickets != null)
                    hashCode = hashCode * 59 + Tickets.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseFaresBreakdownItem left, ResponseFaresBreakdownItem right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseFaresBreakdownItem left, ResponseFaresBreakdownItem right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
