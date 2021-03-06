/* 
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ResponseDistanceBreakdownItem
    /// </summary>
    [DataContract]
    public partial class ResponseDistanceBreakdownItem :  IEquatable<ResponseDistanceBreakdownItem>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets Mode
        /// </summary>
        [DataMember(Name="mode", EmitDefaultValue=false)]
        public ResponseTransportationMode Mode { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseDistanceBreakdownItem" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseDistanceBreakdownItem() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseDistanceBreakdownItem" /> class.
        /// </summary>
        /// <param name="mode">mode (required).</param>
        /// <param name="distance">distance (required).</param>
        public ResponseDistanceBreakdownItem(ResponseTransportationMode mode = default(ResponseTransportationMode), int distance = default(int))
        {
            this.Mode = mode;
            this.Distance = distance;
        }
        
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
            sb.Append("class ResponseDistanceBreakdownItem {\n");
            sb.Append("  Mode: ").Append(Mode).Append("\n");
            sb.Append("  Distance: ").Append(Distance).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ResponseDistanceBreakdownItem);
        }

        /// <summary>
        /// Returns true if ResponseDistanceBreakdownItem instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseDistanceBreakdownItem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseDistanceBreakdownItem input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Mode == input.Mode ||
                    this.Mode.Equals(input.Mode)
                ) && 
                (
                    this.Distance == input.Distance ||
                    this.Distance.Equals(input.Distance)
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
                int hashCode = 41;
                hashCode = hashCode * 59 + this.Mode.GetHashCode();
                hashCode = hashCode * 59 + this.Distance.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
