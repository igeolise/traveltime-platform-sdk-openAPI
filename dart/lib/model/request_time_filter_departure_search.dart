part of openapi.api;

class RequestTimeFilterDepartureSearch {
  
  String id = null;
  
  String departureLocationId = null;
  
  List<String> arrivalLocationIds = [];
  
  RequestTransportation transportation = null;
  
  int travelTime = null;
  
  DateTime departureTime = null;
  
  List<RequestTimeFilterProperty> properties = [];
  
  RequestRangeFull range = null;
  RequestTimeFilterDepartureSearch();

  @override
  String toString() {
    return 'RequestTimeFilterDepartureSearch[id=$id, departureLocationId=$departureLocationId, arrivalLocationIds=$arrivalLocationIds, transportation=$transportation, travelTime=$travelTime, departureTime=$departureTime, properties=$properties, range=$range, ]';
  }

  RequestTimeFilterDepartureSearch.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    if (json['id'] == null) {
      id = null;
    } else {
          id = json['id'];
    }
    if (json['departure_location_id'] == null) {
      departureLocationId = null;
    } else {
          departureLocationId = json['departure_location_id'];
    }
    if (json['arrival_location_ids'] == null) {
      arrivalLocationIds = null;
    } else {
      arrivalLocationIds = (json['arrival_location_ids'] as List).cast<String>();
    }
    if (json['transportation'] == null) {
      transportation = null;
    } else {
      transportation = new RequestTransportation.fromJson(json['transportation']);
    }
    if (json['travel_time'] == null) {
      travelTime = null;
    } else {
          travelTime = json['travel_time'];
    }
    if (json['departure_time'] == null) {
      departureTime = null;
    } else {
      departureTime = DateTime.parse(json['departure_time']);
    }
    if (json['properties'] == null) {
      properties = null;
    } else {
      properties = RequestTimeFilterProperty.listFromJson(json['properties']);
    }
    if (json['range'] == null) {
      range = null;
    } else {
      range = new RequestRangeFull.fromJson(json['range']);
    }
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (id != null)
      json['id'] = id;
    if (departureLocationId != null)
      json['departure_location_id'] = departureLocationId;
    if (arrivalLocationIds != null)
      json['arrival_location_ids'] = arrivalLocationIds;
    if (transportation != null)
      json['transportation'] = transportation;
    if (travelTime != null)
      json['travel_time'] = travelTime;
    if (departureTime != null)
      json['departure_time'] = departureTime == null ? null : departureTime.toUtc().toIso8601String();
    if (properties != null)
      json['properties'] = properties;
    if (range != null)
      json['range'] = range;
    return json;
  }

  static List<RequestTimeFilterDepartureSearch> listFromJson(List<dynamic> json) {
    return json == null ? new List<RequestTimeFilterDepartureSearch>() : json.map((value) => new RequestTimeFilterDepartureSearch.fromJson(value)).toList();
  }

  static Map<String, RequestTimeFilterDepartureSearch> mapFromJson(Map<String, dynamic> json) {
    var map = new Map<String, RequestTimeFilterDepartureSearch>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = new RequestTimeFilterDepartureSearch.fromJson(value));
    }
    return map;
  }
}

