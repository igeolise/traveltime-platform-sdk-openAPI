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
    /// RequestTimeFilterFastArrivalSearches
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterFastArrivalSearches :  IEquatable<RequestTimeFilterFastArrivalSearches>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterFastArrivalSearches" /> class.
        /// </summary>
        /// <param name="manyToOne">manyToOne.</param>
        /// <param name="oneToMany">oneToMany.</param>
        public RequestTimeFilterFastArrivalSearches(List<RequestTimeFilterFastArrivalManyToOneSearch> manyToOne = default(List<RequestTimeFilterFastArrivalManyToOneSearch>), List<RequestTimeFilterFastArrivalOneToManySearch> oneToMany = default(List<RequestTimeFilterFastArrivalOneToManySearch>))
        {
            this.ManyToOne = manyToOne;
            this.OneToMany = oneToMany;
        }
        
        /// <summary>
        /// Gets or Sets ManyToOne
        /// </summary>
        [DataMember(Name="many_to_one", EmitDefaultValue=false)]
        public List<RequestTimeFilterFastArrivalManyToOneSearch> ManyToOne { get; set; }

        /// <summary>
        /// Gets or Sets OneToMany
        /// </summary>
        [DataMember(Name="one_to_many", EmitDefaultValue=false)]
        public List<RequestTimeFilterFastArrivalOneToManySearch> OneToMany { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterFastArrivalSearches {\n");
            sb.Append("  ManyToOne: ").Append(ManyToOne).Append("\n");
            sb.Append("  OneToMany: ").Append(OneToMany).Append("\n");
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
            return this.Equals(input as RequestTimeFilterFastArrivalSearches);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterFastArrivalSearches instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilterFastArrivalSearches to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterFastArrivalSearches input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ManyToOne == input.ManyToOne ||
                    this.ManyToOne != null &&
                    input.ManyToOne != null &&
                    this.ManyToOne.SequenceEqual(input.ManyToOne)
                ) && 
                (
                    this.OneToMany == input.OneToMany ||
                    this.OneToMany != null &&
                    input.OneToMany != null &&
                    this.OneToMany.SequenceEqual(input.OneToMany)
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
                if (this.ManyToOne != null)
                    hashCode = hashCode * 59 + this.ManyToOne.GetHashCode();
                if (this.OneToMany != null)
                    hashCode = hashCode * 59 + this.OneToMany.GetHashCode();
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
