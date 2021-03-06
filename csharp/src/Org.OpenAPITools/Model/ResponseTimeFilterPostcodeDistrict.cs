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
    /// ResponseTimeFilterPostcodeDistrict
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterPostcodeDistrict :  IEquatable<ResponseTimeFilterPostcodeDistrict>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodeDistrict" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseTimeFilterPostcodeDistrict() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodeDistrict" /> class.
        /// </summary>
        /// <param name="code">code (required).</param>
        /// <param name="properties">properties (required).</param>
        public ResponseTimeFilterPostcodeDistrict(String code = default(String), ResponseTimeFilterPostcodeDistrictProperties properties = default(ResponseTimeFilterPostcodeDistrictProperties))
        {
            // to ensure "code" is required (not null)
            if (code == null)
            {
                throw new InvalidDataException("code is a required property for ResponseTimeFilterPostcodeDistrict and cannot be null");
            }
            else
            {
                this.Code = code;
            }
            
            // to ensure "properties" is required (not null)
            if (properties == null)
            {
                throw new InvalidDataException("properties is a required property for ResponseTimeFilterPostcodeDistrict and cannot be null");
            }
            else
            {
                this.Properties = properties;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets Code
        /// </summary>
        [DataMember(Name="code", EmitDefaultValue=true)]
        public String Code { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=true)]
        public ResponseTimeFilterPostcodeDistrictProperties Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodeDistrict {\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
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
            return this.Equals(input as ResponseTimeFilterPostcodeDistrict);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodeDistrict instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTimeFilterPostcodeDistrict to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodeDistrict input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Code == input.Code ||
                    (this.Code != null &&
                    this.Code.Equals(input.Code))
                ) && 
                (
                    this.Properties == input.Properties ||
                    (this.Properties != null &&
                    this.Properties.Equals(input.Properties))
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
                if (this.Code != null)
                    hashCode = hashCode * 59 + this.Code.GetHashCode();
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
