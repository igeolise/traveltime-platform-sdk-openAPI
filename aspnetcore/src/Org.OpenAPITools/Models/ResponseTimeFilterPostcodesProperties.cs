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
    public partial class ResponseTimeFilterPostcodesProperties : IEquatable<ResponseTimeFilterPostcodesProperties>
    {
        /// <summary>
        /// Gets or Sets TravelTime
        /// </summary>
        [DataMember(Name="travel_time", EmitDefaultValue=false)]
        public int TravelTime { get; set; }

        /// <summary>
        /// Gets or Sets Distance
        /// </summary>
        [DataMember(Name="distance", EmitDefaultValue=false)]
        public int Distance { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodesProperties {\n");
            sb.Append("  TravelTime: ").Append(TravelTime).Append("\n");
            sb.Append("  Distance: ").Append(Distance).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseTimeFilterPostcodesProperties)obj);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodesProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseTimeFilterPostcodesProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodesProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    TravelTime == other.TravelTime ||
                    
                    TravelTime.Equals(other.TravelTime)
                ) && 
                (
                    Distance == other.Distance ||
                    
                    Distance.Equals(other.Distance)
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
                    
                    hashCode = hashCode * 59 + TravelTime.GetHashCode();
                    
                    hashCode = hashCode * 59 + Distance.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseTimeFilterPostcodesProperties left, ResponseTimeFilterPostcodesProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseTimeFilterPostcodesProperties left, ResponseTimeFilterPostcodesProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}