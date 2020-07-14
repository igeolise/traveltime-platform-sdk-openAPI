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
    /// ResponseSupportedLocation
    /// </summary>
    [DataContract]
    public partial class ResponseSupportedLocation :  IEquatable<ResponseSupportedLocation>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseSupportedLocation" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseSupportedLocation() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseSupportedLocation" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="mapName">mapName (required).</param>
        public ResponseSupportedLocation(string id = default(string), string mapName = default(string))
        {
            // to ensure "id" is required (not null)
            this.Id = id ?? throw new ArgumentNullException("id is a required property for ResponseSupportedLocation and cannot be null");
            // to ensure "mapName" is required (not null)
            this.MapName = mapName ?? throw new ArgumentNullException("mapName is a required property for ResponseSupportedLocation and cannot be null");
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets MapName
        /// </summary>
        [DataMember(Name="map_name", EmitDefaultValue=false)]
        public string MapName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseSupportedLocation {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MapName: ").Append(MapName).Append("\n");
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
            return this.Equals(input as ResponseSupportedLocation);
        }

        /// <summary>
        /// Returns true if ResponseSupportedLocation instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseSupportedLocation to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseSupportedLocation input)
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
                    this.MapName == input.MapName ||
                    (this.MapName != null &&
                    this.MapName.Equals(input.MapName))
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
                if (this.MapName != null)
                    hashCode = hashCode * 59 + this.MapName.GetHashCode();
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
