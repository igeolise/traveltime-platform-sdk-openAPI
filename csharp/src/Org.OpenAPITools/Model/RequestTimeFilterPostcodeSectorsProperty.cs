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
    /// Defines RequestTimeFilterPostcodeSectorsProperty
    /// </summary>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum RequestTimeFilterPostcodeSectorsProperty
    {
        /// <summary>
        /// Enum Traveltimereachable for value: travel_time_reachable
        /// </summary>
        [EnumMember(Value = "travel_time_reachable")]
        Traveltimereachable = 1,

        /// <summary>
        /// Enum Traveltimeall for value: travel_time_all
        /// </summary>
        [EnumMember(Value = "travel_time_all")]
        Traveltimeall = 2,

        /// <summary>
        /// Enum Coverage for value: coverage
        /// </summary>
        [EnumMember(Value = "coverage")]
        Coverage = 3

    }

}
