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
    /// RequestTransportation
    /// </summary>
    [DataContract]
    public partial class RequestTransportation :  IEquatable<RequestTransportation>, IValidatableObject
    {
        /// <summary>
        /// Defines Type
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum TypeEnum
        {
            /// <summary>
            /// Enum Cycling for value: cycling
            /// </summary>
            [EnumMember(Value = "cycling")]
            Cycling = 1,

            /// <summary>
            /// Enum Driving for value: driving
            /// </summary>
            [EnumMember(Value = "driving")]
            Driving = 2,

            /// <summary>
            /// Enum Drivingtrain for value: driving+train
            /// </summary>
            [EnumMember(Value = "driving+train")]
            Drivingtrain = 3,

            /// <summary>
            /// Enum Publictransport for value: public_transport
            /// </summary>
            [EnumMember(Value = "public_transport")]
            Publictransport = 4,

            /// <summary>
            /// Enum Walking for value: walking
            /// </summary>
            [EnumMember(Value = "walking")]
            Walking = 5,

            /// <summary>
            /// Enum Coach for value: coach
            /// </summary>
            [EnumMember(Value = "coach")]
            Coach = 6,

            /// <summary>
            /// Enum Bus for value: bus
            /// </summary>
            [EnumMember(Value = "bus")]
            Bus = 7,

            /// <summary>
            /// Enum Train for value: train
            /// </summary>
            [EnumMember(Value = "train")]
            Train = 8,

            /// <summary>
            /// Enum Ferry for value: ferry
            /// </summary>
            [EnumMember(Value = "ferry")]
            Ferry = 9,

            /// <summary>
            /// Enum Drivingferry for value: driving+ferry
            /// </summary>
            [EnumMember(Value = "driving+ferry")]
            Drivingferry = 10,

            /// <summary>
            /// Enum Cyclingferry for value: cycling+ferry
            /// </summary>
            [EnumMember(Value = "cycling+ferry")]
            Cyclingferry = 11

        }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public TypeEnum Type { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTransportation" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected RequestTransportation() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTransportation" /> class.
        /// </summary>
        /// <param name="type">type (required).</param>
        /// <param name="ptChangeDelay">ptChangeDelay.</param>
        /// <param name="walkingTime">walkingTime.</param>
        /// <param name="drivingTimeToStation">drivingTimeToStation.</param>
        /// <param name="parkingTime">parkingTime.</param>
        /// <param name="boardingTime">boardingTime.</param>
        public RequestTransportation(TypeEnum type = default(TypeEnum), int ptChangeDelay = default(int), int walkingTime = default(int), int drivingTimeToStation = default(int), int parkingTime = default(int), int boardingTime = default(int))
        {
            this.Type = type;
            this.PtChangeDelay = ptChangeDelay;
            this.WalkingTime = walkingTime;
            this.DrivingTimeToStation = drivingTimeToStation;
            this.ParkingTime = parkingTime;
            this.BoardingTime = boardingTime;
        }
        
        /// <summary>
        /// Gets or Sets PtChangeDelay
        /// </summary>
        [DataMember(Name="pt_change_delay", EmitDefaultValue=false)]
        public int PtChangeDelay { get; set; }

        /// <summary>
        /// Gets or Sets WalkingTime
        /// </summary>
        [DataMember(Name="walking_time", EmitDefaultValue=false)]
        public int WalkingTime { get; set; }

        /// <summary>
        /// Gets or Sets DrivingTimeToStation
        /// </summary>
        [DataMember(Name="driving_time_to_station", EmitDefaultValue=false)]
        public int DrivingTimeToStation { get; set; }

        /// <summary>
        /// Gets or Sets ParkingTime
        /// </summary>
        [DataMember(Name="parking_time", EmitDefaultValue=false)]
        public int ParkingTime { get; set; }

        /// <summary>
        /// Gets or Sets BoardingTime
        /// </summary>
        [DataMember(Name="boarding_time", EmitDefaultValue=false)]
        public int BoardingTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTransportation {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  PtChangeDelay: ").Append(PtChangeDelay).Append("\n");
            sb.Append("  WalkingTime: ").Append(WalkingTime).Append("\n");
            sb.Append("  DrivingTimeToStation: ").Append(DrivingTimeToStation).Append("\n");
            sb.Append("  ParkingTime: ").Append(ParkingTime).Append("\n");
            sb.Append("  BoardingTime: ").Append(BoardingTime).Append("\n");
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
            return this.Equals(input as RequestTransportation);
        }

        /// <summary>
        /// Returns true if RequestTransportation instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTransportation to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTransportation input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Type == input.Type ||
                    this.Type.Equals(input.Type)
                ) && 
                (
                    this.PtChangeDelay == input.PtChangeDelay ||
                    this.PtChangeDelay.Equals(input.PtChangeDelay)
                ) && 
                (
                    this.WalkingTime == input.WalkingTime ||
                    this.WalkingTime.Equals(input.WalkingTime)
                ) && 
                (
                    this.DrivingTimeToStation == input.DrivingTimeToStation ||
                    this.DrivingTimeToStation.Equals(input.DrivingTimeToStation)
                ) && 
                (
                    this.ParkingTime == input.ParkingTime ||
                    this.ParkingTime.Equals(input.ParkingTime)
                ) && 
                (
                    this.BoardingTime == input.BoardingTime ||
                    this.BoardingTime.Equals(input.BoardingTime)
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
                hashCode = hashCode * 59 + this.Type.GetHashCode();
                hashCode = hashCode * 59 + this.PtChangeDelay.GetHashCode();
                hashCode = hashCode * 59 + this.WalkingTime.GetHashCode();
                hashCode = hashCode * 59 + this.DrivingTimeToStation.GetHashCode();
                hashCode = hashCode * 59 + this.ParkingTime.GetHashCode();
                hashCode = hashCode * 59 + this.BoardingTime.GetHashCode();
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
