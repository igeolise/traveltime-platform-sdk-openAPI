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
    public partial class ResponseBox : IEquatable<ResponseBox>
    {
        /// <summary>
        /// Gets or Sets MinLat
        /// </summary>
        [Required]
        [DataMember(Name="min_lat", EmitDefaultValue=false)]
        public double MinLat { get; set; }

        /// <summary>
        /// Gets or Sets MaxLat
        /// </summary>
        [Required]
        [DataMember(Name="max_lat", EmitDefaultValue=false)]
        public double MaxLat { get; set; }

        /// <summary>
        /// Gets or Sets MinLng
        /// </summary>
        [Required]
        [DataMember(Name="min_lng", EmitDefaultValue=false)]
        public double MinLng { get; set; }

        /// <summary>
        /// Gets or Sets MaxLng
        /// </summary>
        [Required]
        [DataMember(Name="max_lng", EmitDefaultValue=false)]
        public double MaxLng { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseBox {\n");
            sb.Append("  MinLat: ").Append(MinLat).Append("\n");
            sb.Append("  MaxLat: ").Append(MaxLat).Append("\n");
            sb.Append("  MinLng: ").Append(MinLng).Append("\n");
            sb.Append("  MaxLng: ").Append(MaxLng).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseBox)obj);
        }

        /// <summary>
        /// Returns true if ResponseBox instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseBox to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseBox other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    MinLat == other.MinLat ||
                    
                    MinLat.Equals(other.MinLat)
                ) && 
                (
                    MaxLat == other.MaxLat ||
                    
                    MaxLat.Equals(other.MaxLat)
                ) && 
                (
                    MinLng == other.MinLng ||
                    
                    MinLng.Equals(other.MinLng)
                ) && 
                (
                    MaxLng == other.MaxLng ||
                    
                    MaxLng.Equals(other.MaxLng)
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
                    
                    hashCode = hashCode * 59 + MinLat.GetHashCode();
                    
                    hashCode = hashCode * 59 + MaxLat.GetHashCode();
                    
                    hashCode = hashCode * 59 + MinLng.GetHashCode();
                    
                    hashCode = hashCode * 59 + MaxLng.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseBox left, ResponseBox right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseBox left, ResponseBox right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
