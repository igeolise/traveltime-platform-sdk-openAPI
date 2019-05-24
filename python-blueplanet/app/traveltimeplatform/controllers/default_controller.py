import connexion
import six

from app.traveltimeplatform.models.request_routes import RequestRoutes  # noqa: E501
from app.traveltimeplatform.models.request_supported_locations import RequestSupportedLocations  # noqa: E501
from app.traveltimeplatform.models.request_time_filter import RequestTimeFilter  # noqa: E501
from app.traveltimeplatform.models.request_time_filter_fast import RequestTimeFilterFast  # noqa: E501
from app.traveltimeplatform.models.request_time_filter_postcode_districts import RequestTimeFilterPostcodeDistricts  # noqa: E501
from app.traveltimeplatform.models.request_time_filter_postcode_sectors import RequestTimeFilterPostcodeSectors  # noqa: E501
from app.traveltimeplatform.models.request_time_filter_postcodes import RequestTimeFilterPostcodes  # noqa: E501
from app.traveltimeplatform.models.request_time_map import RequestTimeMap  # noqa: E501
from app.traveltimeplatform.models.response_error import ResponseError  # noqa: E501
from app.traveltimeplatform.models.response_geocoding import ResponseGeocoding  # noqa: E501
from app.traveltimeplatform.models.response_map_info import ResponseMapInfo  # noqa: E501
from app.traveltimeplatform.models.response_routes import ResponseRoutes  # noqa: E501
from app.traveltimeplatform.models.response_supported_locations import ResponseSupportedLocations  # noqa: E501
from app.traveltimeplatform.models.response_time_filter import ResponseTimeFilter  # noqa: E501
from app.traveltimeplatform.models.response_time_filter_fast import ResponseTimeFilterFast  # noqa: E501
from app.traveltimeplatform.models.response_time_filter_postcode_districts import ResponseTimeFilterPostcodeDistricts  # noqa: E501
from app.traveltimeplatform.models.response_time_filter_postcode_sectors import ResponseTimeFilterPostcodeSectors  # noqa: E501
from app.traveltimeplatform.models.response_time_filter_postcodes import ResponseTimeFilterPostcodes  # noqa: E501
from app.traveltimeplatform.models.response_time_map import ResponseTimeMap  # noqa: E501
from traveltimeplatform import util


def geocoding_reverse_search(focus_lat, focus_lng, within_country=None):  # noqa: E501
    """geocoding_reverse_search

     # noqa: E501

    :param focus_lat: 
    :type focus_lat: float
    :param focus_lng: 
    :type focus_lng: float
    :param within_country: 
    :type within_country: str

    :rtype: ResponseGeocoding
    """
    return 'do some magic!'


def geocoding_search(query, within_country=None, focus_lat=None, focus_lng=None):  # noqa: E501
    """geocoding_search

     # noqa: E501

    :param query: 
    :type query: str
    :param within_country: 
    :type within_country: str
    :param focus_lat: 
    :type focus_lat: float
    :param focus_lng: 
    :type focus_lng: float

    :rtype: ResponseGeocoding
    """
    return 'do some magic!'


def map_info():  # noqa: E501
    """map_info

     # noqa: E501


    :rtype: ResponseMapInfo
    """
    return 'do some magic!'


def routes(body):  # noqa: E501
    """routes

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseRoutes
    """
    if connexion.request.is_json:
        body = RequestRoutes.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def supported_locations(body):  # noqa: E501
    """supported_locations

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseSupportedLocations
    """
    if connexion.request.is_json:
        body = RequestSupportedLocations.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_filter(body):  # noqa: E501
    """time_filter

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeFilter
    """
    if connexion.request.is_json:
        body = RequestTimeFilter.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_filter_fast(body):  # noqa: E501
    """time_filter_fast

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeFilterFast
    """
    if connexion.request.is_json:
        body = RequestTimeFilterFast.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_filter_postcode_districts(body):  # noqa: E501
    """time_filter_postcode_districts

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeFilterPostcodeDistricts
    """
    if connexion.request.is_json:
        body = RequestTimeFilterPostcodeDistricts.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_filter_postcode_sectors(body):  # noqa: E501
    """time_filter_postcode_sectors

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeFilterPostcodeSectors
    """
    if connexion.request.is_json:
        body = RequestTimeFilterPostcodeSectors.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_filter_postcodes(body):  # noqa: E501
    """time_filter_postcodes

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeFilterPostcodes
    """
    if connexion.request.is_json:
        body = RequestTimeFilterPostcodes.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def time_map(body):  # noqa: E501
    """time_map

     # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ResponseTimeMap
    """
    if connexion.request.is_json:
        body = RequestTimeMap.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
