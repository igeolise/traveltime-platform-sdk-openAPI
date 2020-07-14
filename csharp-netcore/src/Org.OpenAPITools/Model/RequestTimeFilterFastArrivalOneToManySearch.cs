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
    /// RequestTimeFilterFastArrivalOneToManySearch
    /// </summary>
    [DataContract]
    public partial class RequestTimeFilterFastArrivalOneToManySearch :  IEquatable<RequestTimeFilterFastArrivalOneToManySearch>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets ArrivalTimePeriod
        /// </summary>
        [DataMember(Name="arrival_time_period", EmitDefaultValue=false)]
        public RequestArrivalTimePeriod ArrivalTimePeriod { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterFastArrivalOneToManySearch" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestTimeFilterFastArrivalOneToManySearch() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeFilterFastArrivalOneToManySearch" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="departureLocationId">departureLocationId (required).</param>
        /// <param name="arrivalLocationIds">arrivalLocationIds (required).</param>
        /// <param name="transportation">transportation (required).</param>
        /// <param name="travelTime">travelTime (required).</param>
        /// <param name="arrivalTimePeriod">arrivalTimePeriod (required).</param>
        /// <param name="properties">properties (required).</param>
        public RequestTimeFilterFastArrivalOneToManySearch(string id = default(string), string departureLocationId = default(string), List<string> arrivalLocationIds = default(List<string>), RequestTransportationFast transportation = default(RequestTransportationFast), int travelTime = default(int), RequestArrivalTimePeriod arrivalTimePeriod = default(RequestArrivalTimePeriod), List<RequestTimeFilterFastProperty> properties = default(List<RequestTimeFilterFastProperty>))
        {
            // to ensure "id" is required (not null)
            this.Id = id ?? throw new ArgumentNullException("id is a required property for RequestTimeFilterFastArrivalOneToManySearch and cannot be null");
            // to ensure "departureLocationId" is required (not null)
            this.DepartureLocationId = departureLocationId ?? throw new ArgumentNullException("departureLocationId is a required property for RequestTimeFilterFastArrivalOneToManySearch and cannot be null");
            // to ensure "arrivalLocationIds" is required (not null)
            this.ArrivalLocationIds = arrivalLocationIds ?? throw new ArgumentNullException("arrivalLocationIds is a required property for RequestTimeFilterFastArrivalOneToManySearch and cannot be null");
            // to ensure "transportation" is required (not null)
            this.Transportation = transportation ?? throw new ArgumentNullException("transportation is a required property for RequestTimeFilterFastArrivalOneToManySearch and cannot be null");
            this.TravelTime = travelTime;
            this.ArrivalTimePeriod = arrivalTimePeriod;
            // to ensure "properties" is required (not null)
            this.Properties = properties ?? throw new ArgumentNullException("properties is a required property for RequestTimeFilterFastArrivalOneToManySearch and cannot be null");
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets DepartureLocationId
        /// </summary>
        [DataMember(Name="departure_location_id", EmitDefaultValue=false)]
        public string DepartureLocationId { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalLocationIds
        /// </summary>
        [DataMember(Name="arrival_location_ids", EmitDefaultValue=false)]
        public List<string> ArrivalLocationIds { get; set; }

        /// <summary>
        /// Gets or Sets Transportation
        /// </summary>
        [DataMember(Name="transportation", EmitDefaultValue=false)]
        public RequestTransportationFast Transportation { get; set; }

        /// <summary>
        /// Gets or Sets TravelTime
        /// </summary>
        [DataMember(Name="travel_time", EmitDefaultValue=false)]
        public int TravelTime { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public List<RequestTimeFilterFastProperty> Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterFastArrivalOneToManySearch {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  DepartureLocationId: ").Append(DepartureLocationId).Append("\n");
            sb.Append("  ArrivalLocationIds: ").Append(ArrivalLocationIds).Append("\n");
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
            return this.Equals(input as RequestTimeFilterFastArrivalOneToManySearch);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterFastArrivalOneToManySearch instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeFilterFastArrivalOneToManySearch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterFastArrivalOneToManySearch input)
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
                    this.TravelTime == input.TravelTime ||
                    this.TravelTime.Equals(input.TravelTime)
                ) && 
                (
                    this.ArrivalTimePeriod == input.ArrivalTimePeriod ||
                    this.ArrivalTimePeriod.Equals(input.ArrivalTimePeriod)
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
                if (this.DepartureLocationId != null)
                    hashCode = hashCode * 59 + this.DepartureLocationId.GetHashCode();
                if (this.ArrivalLocationIds != null)
                    hashCode = hashCode * 59 + this.ArrivalLocationIds.GetHashCode();
                if (this.Transportation != null)
                    hashCode = hashCode * 59 + this.Transportation.GetHashCode();
                hashCode = hashCode * 59 + this.TravelTime.GetHashCode();
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
