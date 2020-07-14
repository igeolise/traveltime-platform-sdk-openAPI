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
    /// ResponseError
    /// </summary>
    [DataContract]
    public partial class ResponseError :  IEquatable<ResponseError>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseError" /> class.
        /// </summary>
        /// <param name="httpStatus">httpStatus.</param>
        /// <param name="errorCode">errorCode.</param>
        /// <param name="description">description.</param>
        /// <param name="documentationLink">documentationLink.</param>
        /// <param name="additionalInfo">additionalInfo.</param>
        public ResponseError(int httpStatus = default(int), int errorCode = default(int), string description = default(string), string documentationLink = default(string), Dictionary<string, List<string>> additionalInfo = default(Dictionary<string, List<string>>))
        {
            this.HttpStatus = httpStatus;
            this.ErrorCode = errorCode;
            this.Description = description;
            this.DocumentationLink = documentationLink;
            this.AdditionalInfo = additionalInfo;
        }
        
        /// <summary>
        /// Gets or Sets HttpStatus
        /// </summary>
        [DataMember(Name="http_status", EmitDefaultValue=false)]
        public int HttpStatus { get; set; }

        /// <summary>
        /// Gets or Sets ErrorCode
        /// </summary>
        [DataMember(Name="error_code", EmitDefaultValue=false)]
        public int ErrorCode { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets DocumentationLink
        /// </summary>
        [DataMember(Name="documentation_link", EmitDefaultValue=false)]
        public string DocumentationLink { get; set; }

        /// <summary>
        /// Gets or Sets AdditionalInfo
        /// </summary>
        [DataMember(Name="additional_info", EmitDefaultValue=false)]
        public Dictionary<string, List<string>> AdditionalInfo { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseError {\n");
            sb.Append("  HttpStatus: ").Append(HttpStatus).Append("\n");
            sb.Append("  ErrorCode: ").Append(ErrorCode).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DocumentationLink: ").Append(DocumentationLink).Append("\n");
            sb.Append("  AdditionalInfo: ").Append(AdditionalInfo).Append("\n");
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
            return this.Equals(input as ResponseError);
        }

        /// <summary>
        /// Returns true if ResponseError instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseError to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseError input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.HttpStatus == input.HttpStatus ||
                    this.HttpStatus.Equals(input.HttpStatus)
                ) && 
                (
                    this.ErrorCode == input.ErrorCode ||
                    this.ErrorCode.Equals(input.ErrorCode)
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.DocumentationLink == input.DocumentationLink ||
                    (this.DocumentationLink != null &&
                    this.DocumentationLink.Equals(input.DocumentationLink))
                ) && 
                (
                    this.AdditionalInfo == input.AdditionalInfo ||
                    this.AdditionalInfo != null &&
                    input.AdditionalInfo != null &&
                    this.AdditionalInfo.SequenceEqual(input.AdditionalInfo)
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
                hashCode = hashCode * 59 + this.HttpStatus.GetHashCode();
                hashCode = hashCode * 59 + this.ErrorCode.GetHashCode();
                if (this.Description != null)
                    hashCode = hashCode * 59 + this.Description.GetHashCode();
                if (this.DocumentationLink != null)
                    hashCode = hashCode * 59 + this.DocumentationLink.GetHashCode();
                if (this.AdditionalInfo != null)
                    hashCode = hashCode * 59 + this.AdditionalInfo.GetHashCode();
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
