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
    /// RequestRangeFull
    /// </summary>
    [DataContract]
    public partial class RequestRangeFull :  IEquatable<RequestRangeFull>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestRangeFull" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestRangeFull() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestRangeFull" /> class.
        /// </summary>
        /// <param name="enabled">enabled (required).</param>
        /// <param name="maxResults">maxResults (required).</param>
        /// <param name="width">width (required).</param>
        public RequestRangeFull(bool enabled = default(bool), int maxResults = default(int), int width = default(int))
        {
            this.Enabled = enabled;
            this.MaxResults = maxResults;
            this.Width = width;
        }
        
        /// <summary>
        /// Gets or Sets Enabled
        /// </summary>
        [DataMember(Name="enabled", EmitDefaultValue=false)]
        public bool Enabled { get; set; }

        /// <summary>
        /// Gets or Sets MaxResults
        /// </summary>
        [DataMember(Name="max_results", EmitDefaultValue=false)]
        public int MaxResults { get; set; }

        /// <summary>
        /// Gets or Sets Width
        /// </summary>
        [DataMember(Name="width", EmitDefaultValue=false)]
        public int Width { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestRangeFull {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  MaxResults: ").Append(MaxResults).Append("\n");
            sb.Append("  Width: ").Append(Width).Append("\n");
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
            return this.Equals(input as RequestRangeFull);
        }

        /// <summary>
        /// Returns true if RequestRangeFull instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestRangeFull to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestRangeFull input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Enabled == input.Enabled ||
                    this.Enabled.Equals(input.Enabled)
                ) && 
                (
                    this.MaxResults == input.MaxResults ||
                    this.MaxResults.Equals(input.MaxResults)
                ) && 
                (
                    this.Width == input.Width ||
                    this.Width.Equals(input.Width)
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
                hashCode = hashCode * 59 + this.Enabled.GetHashCode();
                hashCode = hashCode * 59 + this.MaxResults.GetHashCode();
                hashCode = hashCode * 59 + this.Width.GetHashCode();
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
            // MaxResults (int) maximum
            if(this.MaxResults > (int)5)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for MaxResults, must be a value less than or equal to 5.", new [] { "MaxResults" });
            }

            // MaxResults (int) minimum
            if(this.MaxResults < (int)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for MaxResults, must be a value greater than or equal to 1.", new [] { "MaxResults" });
            }

            // Width (int) maximum
            if(this.Width > (int)43200)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Width, must be a value less than or equal to 43200.", new [] { "Width" });
            }

            // Width (int) minimum
            if(this.Width < (int)1)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Width, must be a value greater than or equal to 1.", new [] { "Width" });
            }

            yield break;
        }
    }

}
