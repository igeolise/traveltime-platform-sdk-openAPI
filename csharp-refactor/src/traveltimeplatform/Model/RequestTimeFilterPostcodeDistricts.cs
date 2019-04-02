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
    /// RequestTimeFilterPostcodeDistricts
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterPostcodeDistricts :  IEquatable<RequestTimeFilterPostcodeDistricts>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterPostcodeDistricts" /> class.
        /// </summary>
        /// <param name="departureSearches">departureSearches.</param>
        /// <param name="arrivalSearches">arrivalSearches.</param>
        public RequestTimeFilterPostcodeDistricts(List<RequestTimeFilterPostcodeDistrictsDepartureSearch> departureSearches = default(List<RequestTimeFilterPostcodeDistrictsDepartureSearch>), List<RequestTimeFilterPostcodeDistrictsArrivalSearch> arrivalSearches = default(List<RequestTimeFilterPostcodeDistrictsArrivalSearch>))
        {
            this.DepartureSearches = departureSearches;
            this.ArrivalSearches = arrivalSearches;
        }
        
        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterPostcodeDistrictsDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterPostcodeDistrictsArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterPostcodeDistricts {\n");
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
            return this.Equals(input as RequestTimeFilterPostcodeDistricts);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterPostcodeDistricts instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilterPostcodeDistricts to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterPostcodeDistricts input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DepartureSearches == input.DepartureSearches ||
                    this.DepartureSearches != null &&
                    this.DepartureSearches.SequenceEqual(input.DepartureSearches)
                ) && 
                (
                    this.ArrivalSearches == input.ArrivalSearches ||
                    this.ArrivalSearches != null &&
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
