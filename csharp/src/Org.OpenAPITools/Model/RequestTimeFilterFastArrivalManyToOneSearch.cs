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
    /// RequestTimeFilterFastArrivalManyToOneSearch
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterFastArrivalManyToOneSearch :  IEquatable<RequestTimeFilterFastArrivalManyToOneSearch>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets ArrivalTimePeriod
        /// </summary>
        [DataMember(Name="arrival_time_period", EmitDefaultValue=true)]
        public RequestArrivalTimePeriod ArrivalTimePeriod { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterFastArrivalManyToOneSearch" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestTimeFilterFastArrivalManyToOneSearch() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterFastArrivalManyToOneSearch" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="arrivalLocationId">arrivalLocationId (required).</param>
        /// <param name="departureLocationIds">departureLocationIds (required).</param>
        /// <param name="transportation">transportation (required).</param>
        /// <param name="travelTime">travelTime (required).</param>
        /// <param name="arrivalTimePeriod">arrivalTimePeriod (required).</param>
        /// <param name="properties">properties (required).</param>
        public RequestTimeFilterFastArrivalManyToOneSearch(string id = default(string), string arrivalLocationId = default(string), List<string> departureLocationIds = default(List<string>), RequestTransportationFast transportation = default(RequestTransportationFast), int travelTime = default(int), RequestArrivalTimePeriod arrivalTimePeriod = default(RequestArrivalTimePeriod), List<RequestTimeFilterFastProperty> properties = default(List<RequestTimeFilterFastProperty>))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "arrivalLocationId" is required (not null)
            if (arrivalLocationId == null)
            {
                throw new InvalidDataException("arrivalLocationId is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.ArrivalLocationId = arrivalLocationId;
            }
            
            // to ensure "departureLocationIds" is required (not null)
            if (departureLocationIds == null)
            {
                throw new InvalidDataException("departureLocationIds is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.DepartureLocationIds = departureLocationIds;
            }
            
            // to ensure "transportation" is required (not null)
            if (transportation == null)
            {
                throw new InvalidDataException("transportation is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.Transportation = transportation;
            }
            
            // to ensure "travelTime" is required (not null)
            if (travelTime == null)
            {
                throw new InvalidDataException("travelTime is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.TravelTime = travelTime;
            }
            
            // to ensure "arrivalTimePeriod" is required (not null)
            if (arrivalTimePeriod == null)
            {
                throw new InvalidDataException("arrivalTimePeriod is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.ArrivalTimePeriod = arrivalTimePeriod;
            }
            
            // to ensure "properties" is required (not null)
            if (properties == null)
            {
                throw new InvalidDataException("properties is a required property for RequestTimeFilterFastArrivalManyToOneSearch and cannot be null");
            }
            else
            {
                this.Properties = properties;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalLocationId
        /// </summary>
        [DataMember(Name="arrival_location_id", EmitDefaultValue=true)]
        public string ArrivalLocationId { get; set; }

        /// <summary>
        /// Gets or Sets DepartureLocationIds
        /// </summary>
        [DataMember(Name="departure_location_ids", EmitDefaultValue=true)]
        public List<string> DepartureLocationIds { get; set; }

        /// <summary>
        /// Gets or Sets Transportation
        /// </summary>
        [DataMember(Name="transportation", EmitDefaultValue=true)]
        public RequestTransportationFast Transportation { get; set; }

        /// <summary>
        /// Gets or Sets TravelTime
        /// </summary>
        [DataMember(Name="travel_time", EmitDefaultValue=true)]
        public int TravelTime { get; set; }


        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=true)]
        public List<RequestTimeFilterFastProperty> Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterFastArrivalManyToOneSearch {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ArrivalLocationId: ").Append(ArrivalLocationId).Append("\n");
            sb.Append("  DepartureLocationIds: ").Append(DepartureLocationIds).Append("\n");
            sb.Append("  Transportation: ").Append(Transportation).Append("\n");
            sb.Append("  TravelTime: ").Append(TravelTime).Append("\n");
            sb.Append("  ArrivalTimePeriod: ").Append(ArrivalTimePeriod).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
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
            return this.Equals(input as RequestTimeFilterFastArrivalManyToOneSearch);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterFastArrivalManyToOneSearch instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilterFastArrivalManyToOneSearch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterFastArrivalManyToOneSearch input)
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
                    this.ArrivalLocationId == input.ArrivalLocationId ||
                    (this.ArrivalLocationId != null &&
                    this.ArrivalLocationId.Equals(input.ArrivalLocationId))
                ) && 
                (
                    this.DepartureLocationIds == input.DepartureLocationIds ||
                    this.DepartureLocationIds != null &&
                    input.DepartureLocationIds != null &&
                    this.DepartureLocationIds.SequenceEqual(input.DepartureLocationIds)
                ) && 
                (
                    this.Transportation == input.Transportation ||
                    (this.Transportation != null &&
                    this.Transportation.Equals(input.Transportation))
                ) && 
                (
                    this.TravelTime == input.TravelTime ||
                    (this.TravelTime != null &&
                    this.TravelTime.Equals(input.TravelTime))
                ) && 
                (
                    this.ArrivalTimePeriod == input.ArrivalTimePeriod ||
                    (this.ArrivalTimePeriod != null &&
                    this.ArrivalTimePeriod.Equals(input.ArrivalTimePeriod))
                ) && 
                (
                    this.Properties == input.Properties ||
                    this.Properties != null &&
                    input.Properties != null &&
                    this.Properties.SequenceEqual(input.Properties)
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
                if (this.ArrivalLocationId != null)
                    hashCode = hashCode * 59 + this.ArrivalLocationId.GetHashCode();
                if (this.DepartureLocationIds != null)
                    hashCode = hashCode * 59 + this.DepartureLocationIds.GetHashCode();
                if (this.Transportation != null)
                    hashCode = hashCode * 59 + this.Transportation.GetHashCode();
                if (this.TravelTime != null)
                    hashCode = hashCode * 59 + this.TravelTime.GetHashCode();
                if (this.ArrivalTimePeriod != null)
                    hashCode = hashCode * 59 + this.ArrivalTimePeriod.GetHashCode();
                if (this.Properties != null)
                    hashCode = hashCode * 59 + this.Properties.GetHashCode();
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

            
            // TravelTime (int) maximum
            if(this.TravelTime > (int)14400)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TravelTime, must be a value less than or equal to 14400.", new [] { "TravelTime" });
            }

            // TravelTime (int) minimum
            if(this.TravelTime < (int)60)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for TravelTime, must be a value greater than or equal to 60.", new [] { "TravelTime" });
            }

            yield break;
        }
    }

}
