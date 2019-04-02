/* 
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
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
using OpenAPIDateConverter = traveltimeplatform.Client.OpenAPIDateConverter;

namespace traveltimeplatform.Model
{
    /// <summary>
    /// ResponseTimeFilterFastLocation
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterFastLocation :  IEquatable<ResponseTimeFilterFastLocation>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterFastLocation" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseTimeFilterFastLocation() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterFastLocation" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="properties">properties (required).</param>
        public ResponseTimeFilterFastLocation(string id = default(string), List<ResponseTimeFilterFastProperties> properties = default(List<ResponseTimeFilterFastProperties>))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for ResponseTimeFilterFastLocation and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            // to ensure "properties" is required (not null)
            if (properties == null)
            {
                throw new InvalidDataException("properties is a required property for ResponseTimeFilterFastLocation and cannot be null");
            }
            else
            {
                this.Properties = properties;
            }
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public List<ResponseTimeFilterFastProperties> Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterFastLocation {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
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
            return this.Equals(input as ResponseTimeFilterFastLocation);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterFastLocation instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTimeFilterFastLocation to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterFastLocation input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Properties == input.Properties ||
                    this.Properties != null &&
                    this.Properties.SequenceEqual(input.Properties)
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
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Properties != null)
                    hashCode = hashCode * 59 + this.Properties.GetHashCode();
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
