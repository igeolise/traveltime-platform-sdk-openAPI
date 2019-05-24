/* 
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
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
    /// ResponseRoutes
    /// </summary>
    [DataContract]
    public partial class ResponseRoutes :  IEquatable<ResponseRoutes>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseRoutes" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseRoutes() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseRoutes" /> class.
        /// </summary>
        /// <param name="results">results (required).</param>
        public ResponseRoutes(List<ResponseRoutesResult> results = default(List<ResponseRoutesResult>))
        {
            // to ensure "results" is required (not null)
            if (results == null)
            {
                throw new InvalidDataException("results is a required property for ResponseRoutes and cannot be null");
            }
            else
            {
                this.Results = results;
            }

        }
        
        /// <summary>
        /// Gets or Sets Results
        /// </summary>
        [DataMember(Name="results", EmitDefaultValue=false)]
        public List<ResponseRoutesResult> Results { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseRoutes {\n");
            sb.Append("  Results: ").Append(Results).Append("\n");
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
            return this.Equals(input as ResponseRoutes);
        }

        /// <summary>
        /// Returns true if ResponseRoutes instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseRoutes to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseRoutes input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Results == input.Results ||
                    this.Results != null &&
                    input.Results != null &&
                    this.Results.SequenceEqual(input.Results)
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
                if (this.Results != null)
                    hashCode = hashCode * 59 + this.Results.GetHashCode();
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
