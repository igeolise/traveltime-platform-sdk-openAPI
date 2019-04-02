
package org.openapitools.client.model


case class ResponseFaresBreakdownItem (
    _modes: List[ResponseTransportationMode],
    _routeUnderscorepartUnderscoreids: List[Integer],
    _tickets: List[ResponseFareTicket]
)
object ResponseFaresBreakdownItem {
    def toStringBody(var_modes: Object, var_routeUnderscorepartUnderscoreids: Object, var_tickets: Object) =
        s"""
        | {
        | "modes":$var_modes,"routeUnderscorepartUnderscoreids":$var_routeUnderscorepartUnderscoreids,"tickets":$var_tickets
        | }
        """.stripMargin
}
