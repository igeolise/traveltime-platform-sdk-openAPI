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
    /// ResponseMapInfo
    /// </summary>
    [DataContract]
    public partial class ResponseMapInfo :  IEquatable<ResponseMapInfo>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseMapInfo" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseMapInfo() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseMapInfo" /> class.
        /// </summary>
        /// <param name="maps">maps (required).</param>
        public ResponseMapInfo(List<ResponseMapInfoMap> maps = default(List<ResponseMapInfoMap>))
        {
            // to ensure "maps" is required (not null)
            if (maps == null)
            {
                throw new InvalidDataException("maps is a required property for ResponseMapInfo and cannot be null");
            }
            else
            {
                this.Maps = maps;
            }
        }
        
        /// <summary>
        /// Gets or Sets Maps
        /// </summary>
        [DataMember(Name="maps", EmitDefaultValue=false)]
        public List<ResponseMapInfoMap> Maps { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseMapInfo {\n");
            sb.Append("  Maps: ").Append(Maps).Append("\n");
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
            return this.Equals(input as ResponseMapInfo);
        }

        /// <summary>
        /// Returns true if ResponseMapInfo instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseMapInfo to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseMapInfo input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Maps == input.Maps ||
                    this.Maps != null &&
                    this.Maps.SequenceEqual(input.Maps)
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
                if (this.Maps != null)
                    hashCode = hashCode * 59 + this.Maps.GetHashCode();
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
