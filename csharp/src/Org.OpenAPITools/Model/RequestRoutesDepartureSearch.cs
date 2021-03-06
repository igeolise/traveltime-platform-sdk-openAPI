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
    /// RequestRoutesDepartureSearch
    /// </summary>
    [DataContract]
    public partial class RequestRoutesDepartureSearch :  IEquatable<RequestRoutesDepartureSearch>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestRoutesDepartureSearch" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestRoutesDepartureSearch() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestRoutesDepartureSearch" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="departureLocationId">departureLocationId (required).</param>
        /// <param name="arrivalLocationIds">arrivalLocationIds (required).</param>
        /// <param name="transportation">transportation (required).</param>
        /// <param name="departureTime">departureTime (required).</param>
        /// <param name="properties">properties (required).</param>
        /// <param name="range">range.</param>
        public RequestRoutesDepartureSearch(string id = default(string), string departureLocationId = default(string), List<string> arrivalLocationIds = default(List<string>), RequestTransportation transportation = default(RequestTransportation), DateTime departureTime = default(DateTime), List<RequestRoutesProperty> properties = default(List<RequestRoutesProperty>), RequestRangeFull range = default(RequestRangeFull))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "departureLocationId" is required (not null)
            if (departureLocationId == null)
            {
                throw new InvalidDataException("departureLocationId is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.DepartureLocationId = departureLocationId;
            }
            
            // to ensure "arrivalLocationIds" is required (not null)
            if (arrivalLocationIds == null)
            {
                throw new InvalidDataException("arrivalLocationIds is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.ArrivalLocationIds = arrivalLocationIds;
            }
            
            // to ensure "transportation" is required (not null)
            if (transportation == null)
            {
                throw new InvalidDataException("transportation is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.Transportation = transportation;
            }
            
            // to ensure "departureTime" is required (not null)
            if (departureTime == null)
            {
                throw new InvalidDataException("departureTime is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.DepartureTime = departureTime;
            }
            
            // to ensure "properties" is required (not null)
            if (properties == null)
            {
                throw new InvalidDataException("properties is a required property for RequestRoutesDepartureSearch and cannot be null");
            }
            else
            {
                this.Properties = properties;
            }
            
            this.Range = range;
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets DepartureLocationId
        /// </summary>
        [DataMember(Name="departure_location_id", EmitDefaultValue=true)]
        public string DepartureLocationId { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalLocationIds
        /// </summary>
        [DataMember(Name="arrival_location_ids", EmitDefaultValue=true)]
        public List<string> ArrivalLocationIds { get; set; }

        /// <summary>
        /// Gets or Sets Transportation
        /// </summary>
        [DataMember(Name="transportation", EmitDefaultValue=true)]
        public RequestTransportation Transportation { get; set; }

        /// <summary>
        /// Gets or Sets DepartureTime
        /// </summary>
        [DataMember(Name="departure_time", EmitDefaultValue=true)]
        public DateTime DepartureTime { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=true)]
        public List<RequestRoutesProperty> Properties { get; set; }

        /// <summary>
        /// Gets or Sets Range
        /// </summary>
        [DataMember(Name="range", EmitDefaultValue=false)]
        public RequestRangeFull Range { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestRoutesDepartureSearch {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  DepartureLocationId: ").Append(DepartureLocationId).Append("\n");
            sb.Append("  ArrivalLocationIds: ").Append(ArrivalLocationIds).Append("\n");
            sb.Append("  Transportation: ").Append(Transportation).Append("\n");
            sb.Append("  DepartureTime: ").Append(DepartureTime).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
            sb.Append("  Range: ").Append(Range).Append("\n");
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
            return this.Equals(input as RequestRoutesDepartureSearch);
        }

        /// <summary>
        /// Returns true if RequestRoutesDepartureSearch instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestRoutesDepartureSearch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestRoutesDepartureSearch input)
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
                    this.DepartureLocationId == input.DepartureLocationId ||
                    (this.DepartureLocationId != null &&
                    this.DepartureLocationId.Equals(input.DepartureLocationId))
                ) && 
                (
                    this.ArrivalLocationIds == input.ArrivalLocationIds ||
                    this.ArrivalLocationIds != null &&
                    input.ArrivalLocationIds != null &&
                    this.ArrivalLocationIds.SequenceEqual(input.ArrivalLocationIds)
                ) && 
                (
                    this.Transportation == input.Transportation ||
                    (this.Transportation != null &&
                    this.Transportation.Equals(input.Transportation))
                ) && 
                (
                    this.DepartureTime == input.DepartureTime ||
                    (this.DepartureTime != null &&
                    this.DepartureTime.Equals(input.DepartureTime))
                ) && 
                (
                    this.Properties == input.Properties ||
                    this.Properties != null &&
                    input.Properties != null &&
                    this.Properties.SequenceEqual(input.Properties)
                ) && 
                (
                    this.Range == input.Range ||
                    (this.Range != null &&
                    this.Range.Equals(input.Range))
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
                if (this.DepartureLocationId != null)
                    hashCode = hashCode * 59 + this.DepartureLocationId.GetHashCode();
                if (this.ArrivalLocationIds != null)
                    hashCode = hashCode * 59 + this.ArrivalLocationIds.GetHashCode();
                if (this.Transportation != null)
                    hashCode = hashCode * 59 + this.Transportation.GetHashCode();
                if (this.DepartureTime != null)
                    hashCode = hashCode * 59 + this.DepartureTime.GetHashCode();
                if (this.Properties != null)
                    hashCode = hashCode * 59 + this.Properties.GetHashCode();
                if (this.Range != null)
                    hashCode = hashCode * 59 + this.Range.GetHashCode();
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
