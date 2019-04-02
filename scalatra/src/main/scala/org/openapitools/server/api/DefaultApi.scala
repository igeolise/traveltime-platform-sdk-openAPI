/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


package org.openapitools.server.api

import org.openapitools.server.model.RequestRoutes
import org.openapitools.server.model.RequestSupportedLocations
import org.openapitools.server.model.RequestTimeFilter
import org.openapitools.server.model.RequestTimeFilterFast
import org.openapitools.server.model.RequestTimeFilterPostcodeDistricts
import org.openapitools.server.model.RequestTimeFilterPostcodeSectors
import org.openapitools.server.model.RequestTimeFilterPostcodes
import org.openapitools.server.model.RequestTimeMap
import org.openapitools.server.model.ResponseError
import org.openapitools.server.model.ResponseGeocoding
import org.openapitools.server.model.ResponseMapInfo
import org.openapitools.server.model.ResponseRoutes
import org.openapitools.server.model.ResponseSupportedLocations
import org.openapitools.server.model.ResponseTimeFilter
import org.openapitools.server.model.ResponseTimeFilterFast
import org.openapitools.server.model.ResponseTimeFilterPostcodeDistricts
import org.openapitools.server.model.ResponseTimeFilterPostcodeSectors
import org.openapitools.server.model.ResponseTimeFilterPostcodes
import org.openapitools.server.model.ResponseTimeMap

import java.io.File

import org.scalatra.ScalatraServlet
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{ FileUploadSupport, MultipartConfig, SizeConstraintExceededException }

import scala.collection.JavaConverters._

class DefaultApi(implicit val swagger: Swagger) extends ScalatraServlet
  with FileUploadSupport
  with JacksonJsonSupport
  with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "DefaultApi"

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val geocodingReverseSearchOperation = (apiOperation[ResponseGeocoding]("geocodingReverseSearch")
    summary ""
    parameters(queryParam[Double]("focusPeriodlat").description(""), queryParam[Double]("focusPeriodlng").description(""), queryParam[String]("withinPeriodcountry").description("").optional)
  )

  get("/v4/geocoding/reverse", operation(geocodingReverseSearchOperation)) {
            val focusPeriodlat = params.getAs[Double]("focusPeriodlat")

    //println("focusPeriodlat: " + focusPeriodlat)
            val focusPeriodlng = params.getAs[Double]("focusPeriodlng")

    //println("focusPeriodlng: " + focusPeriodlng)
            val withinPeriodcountry = params.getAs[String]("withinPeriodcountry")

    //println("withinPeriodcountry: " + withinPeriodcountry)
  }

  

  val geocodingSearchOperation = (apiOperation[ResponseGeocoding]("geocodingSearch")
    summary ""
    parameters(queryParam[String]("query").description(""), queryParam[String]("withinPeriodcountry").description("").optional, queryParam[Double]("focusPeriodlat").description("").optional, queryParam[Double]("focusPeriodlng").description("").optional)
  )

  get("/v4/geocoding/search", operation(geocodingSearchOperation)) {
            val query = params.getAs[String]("query")

    //println("query: " + query)
            val withinPeriodcountry = params.getAs[String]("withinPeriodcountry")

    //println("withinPeriodcountry: " + withinPeriodcountry)
            val focusPeriodlat = params.getAs[Double]("focusPeriodlat")

    //println("focusPeriodlat: " + focusPeriodlat)
            val focusPeriodlng = params.getAs[Double]("focusPeriodlng")

    //println("focusPeriodlng: " + focusPeriodlng)
  }

  

  val mapInfoOperation = (apiOperation[ResponseMapInfo]("mapInfo")
    summary ""
    parameters()
  )

  get("/v4/map-info", operation(mapInfoOperation)) {
  }

  

  val routesOperation = (apiOperation[ResponseRoutes]("routes")
    summary ""
    parameters(bodyParam[RequestRoutes]("requestRoutes").description(""))
  )

  post("/v4/routes", operation(routesOperation)) {
    //println("requestRoutes: " + requestRoutes)
  }

  

  val supportedLocationsOperation = (apiOperation[ResponseSupportedLocations]("supportedLocations")
    summary ""
    parameters(bodyParam[RequestSupportedLocations]("requestSupportedLocations").description(""))
  )

  post("/v4/supported-locations", operation(supportedLocationsOperation)) {
    //println("requestSupportedLocations: " + requestSupportedLocations)
  }

  

  val timeFilterOperation = (apiOperation[ResponseTimeFilter]("timeFilter")
    summary ""
    parameters(bodyParam[RequestTimeFilter]("requestTimeFilter").description(""))
  )

  post("/v4/time-filter", operation(timeFilterOperation)) {
    //println("requestTimeFilter: " + requestTimeFilter)
  }

  

  val timeFilterFastOperation = (apiOperation[ResponseTimeFilterFast]("timeFilterFast")
    summary ""
    parameters(bodyParam[RequestTimeFilterFast]("requestTimeFilterFast").description(""))
  )

  post("/v4/time-filter/fast", operation(timeFilterFastOperation)) {
    //println("requestTimeFilterFast: " + requestTimeFilterFast)
  }

  

  val timeFilterPostcodeDistrictsOperation = (apiOperation[ResponseTimeFilterPostcodeDistricts]("timeFilterPostcodeDistricts")
    summary ""
    parameters(bodyParam[RequestTimeFilterPostcodeDistricts]("requestTimeFilterPostcodeDistricts").description(""))
  )

  post("/v4/time-filter/postcode-districts", operation(timeFilterPostcodeDistrictsOperation)) {
    //println("requestTimeFilterPostcodeDistricts: " + requestTimeFilterPostcodeDistricts)
  }

  

  val timeFilterPostcodeSectorsOperation = (apiOperation[ResponseTimeFilterPostcodeSectors]("timeFilterPostcodeSectors")
    summary ""
    parameters(bodyParam[RequestTimeFilterPostcodeSectors]("requestTimeFilterPostcodeSectors").description(""))
  )

  post("/v4/time-filter/postcode-sectors", operation(timeFilterPostcodeSectorsOperation)) {
    //println("requestTimeFilterPostcodeSectors: " + requestTimeFilterPostcodeSectors)
  }

  

  val timeFilterPostcodesOperation = (apiOperation[ResponseTimeFilterPostcodes]("timeFilterPostcodes")
    summary ""
    parameters(bodyParam[RequestTimeFilterPostcodes]("requestTimeFilterPostcodes").description(""))
  )

  post("/v4/time-filter/postcodes", operation(timeFilterPostcodesOperation)) {
    //println("requestTimeFilterPostcodes: " + requestTimeFilterPostcodes)
  }

  

  val timeMapOperation = (apiOperation[ResponseTimeMap]("timeMap")
    summary ""
    parameters(bodyParam[RequestTimeMap]("requestTimeMap").description(""))
  )

  post("/v4/time-map", operation(timeMapOperation)) {
    //println("requestTimeMap: " + requestTimeMap)
  }

}
