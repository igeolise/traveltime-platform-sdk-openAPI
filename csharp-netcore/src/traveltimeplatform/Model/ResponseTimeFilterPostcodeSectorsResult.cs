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
    /// ResponseTimeFilterPostcodeSectorsResult
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterPostcodeSectorsResult :  IEquatable<ResponseTimeFilterPostcodeSectorsResult>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodeSectorsResult" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseTimeFilterPostcodeSectorsResult() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodeSectorsResult" /> class.
        /// </summary>
        /// <param name="searchId">searchId (required).</param>
        /// <param name="sectors">sectors (required).</param>
        public ResponseTimeFilterPostcodeSectorsResult(string searchId = default(string), List<ResponseTimeFilterPostcodeSector> sectors = default(List<ResponseTimeFilterPostcodeSector>))
        {
            // to ensure "searchId" is required (not null)
            if (searchId == null)
            {
                throw new InvalidDataException("searchId is a required property for ResponseTimeFilterPostcodeSectorsResult and cannot be null");
            }
            else
            {
                this.SearchId = searchId;
            }

            // to ensure "sectors" is required (not null)
            if (sectors == null)
            {
                throw new InvalidDataException("sectors is a required property for ResponseTimeFilterPostcodeSectorsResult and cannot be null");
            }
            else
            {
                this.Sectors = sectors;
            }

        }
        
        /// <summary>
        /// Gets or Sets SearchId
        /// </summary>
        [DataMember(Name="search_id", EmitDefaultValue=false)]
        public string SearchId { get; set; }

        /// <summary>
        /// Gets or Sets Sectors
        /// </summary>
        [DataMember(Name="sectors", EmitDefaultValue=false)]
        public List<ResponseTimeFilterPostcodeSector> Sectors { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodeSectorsResult {\n");
            sb.Append("  SearchId: ").Append(SearchId).Append("\n");
            sb.Append("  Sectors: ").Append(Sectors).Append("\n");
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
            return this.Equals(input as ResponseTimeFilterPostcodeSectorsResult);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodeSectorsResult instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTimeFilterPostcodeSectorsResult to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodeSectorsResult input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SearchId == input.SearchId ||
                    (this.SearchId != null &&
                    this.SearchId.Equals(input.SearchId))
                ) && 
                (
                    this.Sectors == input.Sectors ||
                    this.Sectors != null &&
                    input.Sectors != null &&
                    this.Sectors.SequenceEqual(input.Sectors)
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
                if (this.SearchId != null)
                    hashCode = hashCode * 59 + this.SearchId.GetHashCode();
                if (this.Sectors != null)
                    hashCode = hashCode * 59 + this.Sectors.GetHashCode();
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
