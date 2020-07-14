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
    public partial class ResponseShape : IEquatable<ResponseShape>
    {
        /// <summary>
        /// Gets or Sets Shell
        /// </summary>
        [Required]
        [DataMember(Name="shell", EmitDefaultValue=false)]
        public List<Coords> Shell { get; set; }

        /// <summary>
        /// Gets or Sets Holes
        /// </summary>
        [Required]
        [DataMember(Name="holes", EmitDefaultValue=false)]
        public List<List<Coords>> Holes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseShape {\n");
            sb.Append("  Shell: ").Append(Shell).Append("\n");
            sb.Append("  Holes: ").Append(Holes).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseShape)obj);
        }

        /// <summary>
        /// Returns true if ResponseShape instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseShape to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseShape other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Shell == other.Shell ||
                    Shell != null &&
                    other.Shell != null &&
                    Shell.SequenceEqual(other.Shell)
                ) && 
                (
                    Holes == other.Holes ||
                    Holes != null &&
                    other.Holes != null &&
                    Holes.SequenceEqual(other.Holes)
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
                    if (Shell != null)
                    hashCode = hashCode * 59 + Shell.GetHashCode();
                    if (Holes != null)
                    hashCode = hashCode * 59 + Holes.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseShape left, ResponseShape right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseShape left, ResponseShape right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
