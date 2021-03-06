package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ResponseTimeFilterProperties
import scala.collection.immutable.Seq

/**
 * 
 * @param id 
 * @param properties 
 */
case class ResponseTimeFilterLocation(id: String,
                properties: Seq[ResponseTimeFilterProperties]
                )

object ResponseTimeFilterLocation {
    /**
     * Creates the codec for converting ResponseTimeFilterLocation from and to JSON.
     */
    implicit val decoder: Decoder[ResponseTimeFilterLocation] = deriveDecoder
    implicit val encoder: ObjectEncoder[ResponseTimeFilterLocation] = deriveEncoder
}
