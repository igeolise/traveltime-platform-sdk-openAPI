/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
        /// <summary>
        /// Gets or Sets RequestTimeFilterPostcodeDistrictsProperty
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<RequestTimeFilterPostcodeDistrictsProperty>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum RequestTimeFilterPostcodeDistrictsProperty
        {
            
            /// <summary>
            /// Enum TravelTimeReachableEnum for travel_time_reachable
            /// </summary>
            [EnumMember(Value = "travel_time_reachable")]
            TravelTimeReachableEnum = 1,
            
            /// <summary>
            /// Enum TravelTimeAllEnum for travel_time_all
            /// </summary>
            [EnumMember(Value = "travel_time_all")]
            TravelTimeAllEnum = 2,
            
            /// <summary>
            /// Enum CoverageEnum for coverage
            /// </summary>
            [EnumMember(Value = "coverage")]
            CoverageEnum = 3
        }
}
