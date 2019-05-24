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
    /// ResponseFaresBreakdownItem
    /// </summary>
    [DataContract]
    public partial class ResponseFaresBreakdownItem :  IEquatable<ResponseFaresBreakdownItem>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseFaresBreakdownItem" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseFaresBreakdownItem() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseFaresBreakdownItem" /> class.
        /// </summary>
        /// <param name="modes">modes (required).</param>
        /// <param name="routePartIds">routePartIds (required).</param>
        /// <param name="tickets">tickets (required).</param>
        public ResponseFaresBreakdownItem(List<ResponseTransportationMode> modes = default(List<ResponseTransportationMode>), List<int?> routePartIds = default(List<int?>), List<ResponseFareTicket> tickets = default(List<ResponseFareTicket>))
        {
            // to ensure "modes" is required (not null)
            if (modes == null)
            {
                throw new InvalidDataException("modes is a required property for ResponseFaresBreakdownItem and cannot be null");
            }
            else
            {
                this.Modes = modes;
            }
            
            // to ensure "routePartIds" is required (not null)
            if (routePartIds == null)
            {
                throw new InvalidDataException("routePartIds is a required property for ResponseFaresBreakdownItem and cannot be null");
            }
            else
            {
                this.RoutePartIds = routePartIds;
            }
            
            // to ensure "tickets" is required (not null)
            if (tickets == null)
            {
                throw new InvalidDataException("tickets is a required property for ResponseFaresBreakdownItem and cannot be null");
            }
            else
            {
                this.Tickets = tickets;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets Modes
        /// </summary>
        [DataMember(Name="modes", EmitDefaultValue=false)]
        public List<ResponseTransportationMode> Modes { get; set; }

        /// <summary>
        /// Gets or Sets RoutePartIds
        /// </summary>
        [DataMember(Name="route_part_ids", EmitDefaultValue=false)]
        public List<int?> RoutePartIds { get; set; }

        /// <summary>
        /// Gets or Sets Tickets
        /// </summary>
        [DataMember(Name="tickets", EmitDefaultValue=false)]
        public List<ResponseFareTicket> Tickets { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseFaresBreakdownItem {\n");
            sb.Append("  Modes: ").Append(Modes).Append("\n");
            sb.Append("  RoutePartIds: ").Append(RoutePartIds).Append("\n");
            sb.Append("  Tickets: ").Append(Tickets).Append("\n");
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
            return this.Equals(input as ResponseFaresBreakdownItem);
        }

        /// <summary>
        /// Returns true if ResponseFaresBreakdownItem instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseFaresBreakdownItem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseFaresBreakdownItem input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Modes == input.Modes ||
                    this.Modes != null &&
                    input.Modes != null &&
                    this.Modes.SequenceEqual(input.Modes)
                ) && 
                (
                    this.RoutePartIds == input.RoutePartIds ||
                    this.RoutePartIds != null &&
                    input.RoutePartIds != null &&
                    this.RoutePartIds.SequenceEqual(input.RoutePartIds)
                ) && 
                (
                    this.Tickets == input.Tickets ||
                    this.Tickets != null &&
                    input.Tickets != null &&
                    this.Tickets.SequenceEqual(input.Tickets)
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
                if (this.Modes != null)
                    hashCode = hashCode * 59 + this.Modes.GetHashCode();
                if (this.RoutePartIds != null)
                    hashCode = hashCode * 59 + this.RoutePartIds.GetHashCode();
                if (this.Tickets != null)
                    hashCode = hashCode * 59 + this.Tickets.GetHashCode();
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
