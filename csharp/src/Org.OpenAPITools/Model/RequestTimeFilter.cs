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
    /// RequestTimeFilter
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilter :  IEquatable<RequestTimeFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestTimeFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilter" /> class.
        /// </summary>
        /// <param name="locations">locations (required).</param>
        /// <param name="departureSearches">departureSearches.</param>
        /// <param name="arrivalSearches">arrivalSearches.</param>
        public RequestTimeFilter(List<RequestLocation> locations = default(List<RequestLocation>), List<RequestTimeFilterDepartureSearch> departureSearches = default(List<RequestTimeFilterDepartureSearch>), List<RequestTimeFilterArrivalSearch> arrivalSearches = default(List<RequestTimeFilterArrivalSearch>))
        {
            // to ensure "locations" is required (not null)
            if (locations == null)
            {
                throw new InvalidDataException("locations is a required property for RequestTimeFilter and cannot be null");
            }
            else
            {
                this.Locations = locations;
            }
            
            this.DepartureSearches = departureSearches;
            this.ArrivalSearches = arrivalSearches;
        }
        
        /// <summary>
        /// Gets or Sets Locations
        /// </summary>
        [DataMember(Name="locations", EmitDefaultValue=true)]
        public List<RequestLocation> Locations { get; set; }

        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
        public List<RequestTimeFilterArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilter {\n");
            sb.Append("  Locations: ").Append(Locations).Append("\n");
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
            return this.Equals(input as RequestTimeFilter);
        }

        /// <summary>
        /// Returns true if RequestTimeFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Locations == input.Locations ||
                    this.Locations != null &&
                    input.Locations != null &&
                    this.Locations.SequenceEqual(input.Locations)
                ) && 
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
                if (this.Locations != null)
                    hashCode = hashCode * 59 + this.Locations.GetHashCode();
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
