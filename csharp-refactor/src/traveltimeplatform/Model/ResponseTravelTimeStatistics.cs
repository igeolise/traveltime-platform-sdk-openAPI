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
    /// ResponseTravelTimeStatistics
    /// </summary>
    [DataContract]
    public partial class ResponseTravelTimeStatistics :  IEquatable<ResponseTravelTimeStatistics>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTravelTimeStatistics" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseTravelTimeStatistics() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTravelTimeStatistics" /> class.
        /// </summary>
        /// <param name="min">min (required).</param>
        /// <param name="max">max (required).</param>
        /// <param name="mean">mean (required).</param>
        /// <param name="median">median (required).</param>
        public ResponseTravelTimeStatistics(int? min = default(int?), int? max = default(int?), int? mean = default(int?), int? median = default(int?))
        {
            // to ensure "min" is required (not null)
            if (min == null)
            {
                throw new InvalidDataException("min is a required property for ResponseTravelTimeStatistics and cannot be null");
            }
            else
            {
                this.Min = min;
            }
            // to ensure "max" is required (not null)
            if (max == null)
            {
                throw new InvalidDataException("max is a required property for ResponseTravelTimeStatistics and cannot be null");
            }
            else
            {
                this.Max = max;
            }
            // to ensure "mean" is required (not null)
            if (mean == null)
            {
                throw new InvalidDataException("mean is a required property for ResponseTravelTimeStatistics and cannot be null");
            }
            else
            {
                this.Mean = mean;
            }
            // to ensure "median" is required (not null)
            if (median == null)
            {
                throw new InvalidDataException("median is a required property for ResponseTravelTimeStatistics and cannot be null");
            }
            else
            {
                this.Median = median;
            }
        }
        
        /// <summary>
        /// Gets or Sets Min
        /// </summary>
        [DataMember(Name="min", EmitDefaultValue=false)]
        public int? Min { get; set; }

        /// <summary>
        /// Gets or Sets Max
        /// </summary>
        [DataMember(Name="max", EmitDefaultValue=false)]
        public int? Max { get; set; }

        /// <summary>
        /// Gets or Sets Mean
        /// </summary>
        [DataMember(Name="mean", EmitDefaultValue=false)]
        public int? Mean { get; set; }

        /// <summary>
        /// Gets or Sets Median
        /// </summary>
        [DataMember(Name="median", EmitDefaultValue=false)]
        public int? Median { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTravelTimeStatistics {\n");
            sb.Append("  Min: ").Append(Min).Append("\n");
            sb.Append("  Max: ").Append(Max).Append("\n");
            sb.Append("  Mean: ").Append(Mean).Append("\n");
            sb.Append("  Median: ").Append(Median).Append("\n");
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
            return this.Equals(input as ResponseTravelTimeStatistics);
        }

        /// <summary>
        /// Returns true if ResponseTravelTimeStatistics instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTravelTimeStatistics to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTravelTimeStatistics input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Min == input.Min ||
                    (this.Min != null &&
                    this.Min.Equals(input.Min))
                ) && 
                (
                    this.Max == input.Max ||
                    (this.Max != null &&
                    this.Max.Equals(input.Max))
                ) && 
                (
                    this.Mean == input.Mean ||
                    (this.Mean != null &&
                    this.Mean.Equals(input.Mean))
                ) && 
                (
                    this.Median == input.Median ||
                    (this.Median != null &&
                    this.Median.Equals(input.Median))
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
                if (this.Min != null)
                    hashCode = hashCode * 59 + this.Min.GetHashCode();
                if (this.Max != null)
                    hashCode = hashCode * 59 + this.Max.GetHashCode();
                if (this.Mean != null)
                    hashCode = hashCode * 59 + this.Mean.GetHashCode();
                if (this.Median != null)
                    hashCode = hashCode * 59 + this.Median.GetHashCode();
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
