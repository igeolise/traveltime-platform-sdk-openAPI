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
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// RequestTimeFilterPostcodes
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterPostcodes :  IEquatable<RequestTimeFilterPostcodes>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterPostcodes" /> class.
        /// </summary>
        /// <param name="departureSearches">departureSearches.</param>
        /// <param name="arrivalSearches">arrivalSearches.</param>
        public RequestTimeFilterPostcodes(List<RequestTimeFilterPostcodesDepartureSearch> departureSearches = default(List<RequestTimeFilterPostcodesDepartureSearch>), List<RequestTimeFilterPostcodesArrivalSearch> arrivalSearches = default(List<RequestTimeFilterPostcodesArrivalSearch>))
        {
            this.DepartureSearches = departureSearches;
            this.ArrivalSearches = arrivalSearches;
        }
        
        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterPostcodesDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterPostcodesArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterPostcodes {\n");
            sb.Append("  DepartureSearches: ").Append(DepartureSearches).Append("\n");
            sb.Append("  ArrivalSearches: ").Append(ArrivalSearches).Append("\n");
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
            return this.Equals(input as RequestTimeFilterPostcodes);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterPostcodes instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilterPostcodes to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterPostcodes input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DepartureSearches == input.DepartureSearches ||
                    this.DepartureSearches != null &&
                    input.DepartureSearches != null &&
                    this.DepartureSearches.SequenceEqual(input.DepartureSearches)
                ) && 
                (
                    this.ArrivalSearches == input.ArrivalSearches ||
                    this.ArrivalSearches != null &&
                    input.ArrivalSearches != null &&
                    this.ArrivalSearches.SequenceEqual(input.ArrivalSearches)
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
                if (this.DepartureSearches != null)
                    hashCode = hashCode * 59 + this.DepartureSearches.GetHashCode();
                if (this.ArrivalSearches != null)
                    hashCode = hashCode * 59 + this.ArrivalSearches.GetHashCode();
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
