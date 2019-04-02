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
    /// ResponseMapInfoFeaturesPublicTransport
    /// </summary>
    [DataContract]
    public partial class ResponseMapInfoFeaturesPublicTransport :  IEquatable<ResponseMapInfoFeaturesPublicTransport>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseMapInfoFeaturesPublicTransport" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseMapInfoFeaturesPublicTransport() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseMapInfoFeaturesPublicTransport" /> class.
        /// </summary>
        /// <param name="dateStart">dateStart (required).</param>
        /// <param name="dateEnd">dateEnd (required).</param>
        public ResponseMapInfoFeaturesPublicTransport(DateTime? dateStart = default(DateTime?), DateTime? dateEnd = default(DateTime?))
        {
            // to ensure "dateStart" is required (not null)
            if (dateStart == null)
            {
                throw new InvalidDataException("dateStart is a required property for ResponseMapInfoFeaturesPublicTransport and cannot be null");
            }
            else
            {
                this.DateStart = dateStart;
            }
            // to ensure "dateEnd" is required (not null)
            if (dateEnd == null)
            {
                throw new InvalidDataException("dateEnd is a required property for ResponseMapInfoFeaturesPublicTransport and cannot be null");
            }
            else
            {
                this.DateEnd = dateEnd;
            }
        }
        
        /// <summary>
        /// Gets or Sets DateStart
        /// </summary>
        [DataMember(Name="date_start", EmitDefaultValue=false)]
        public DateTime? DateStart { get; set; }

        /// <summary>
        /// Gets or Sets DateEnd
        /// </summary>
        [DataMember(Name="date_end", EmitDefaultValue=false)]
        public DateTime? DateEnd { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseMapInfoFeaturesPublicTransport {\n");
            sb.Append("  DateStart: ").Append(DateStart).Append("\n");
            sb.Append("  DateEnd: ").Append(DateEnd).Append("\n");
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
            return this.Equals(input as ResponseMapInfoFeaturesPublicTransport);
        }

        /// <summary>
        /// Returns true if ResponseMapInfoFeaturesPublicTransport instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseMapInfoFeaturesPublicTransport to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseMapInfoFeaturesPublicTransport input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DateStart == input.DateStart ||
                    (this.DateStart != null &&
                    this.DateStart.Equals(input.DateStart))
                ) && 
                (
                    this.DateEnd == input.DateEnd ||
                    (this.DateEnd != null &&
                    this.DateEnd.Equals(input.DateEnd))
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
                if (this.DateStart != null)
                    hashCode = hashCode * 59 + this.DateStart.GetHashCode();
                if (this.DateEnd != null)
                    hashCode = hashCode * 59 + this.DateEnd.GetHashCode();
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
