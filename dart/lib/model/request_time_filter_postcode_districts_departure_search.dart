part of openapi.api;

class RequestTimeFilterPostcodeDistrictsDepartureSearch {
  
  String id = null;
  
  RequestTransportation transportation = null;
  
  int travelTime = null;
  
  DateTime departureTime = null;
  
  double reachablePostcodesThreshold = null;
  
  List<RequestTimeFilterPostcodeDistrictsProperty> properties = [];
  
  RequestRangeFull range = null;

  RequestTimeFilterPostcodeDistrictsDepartureSearch({
    this.id,
    this.transportation,
    this.travelTime,
    this.departureTime,
    this.reachablePostcodesThreshold,
    this.properties,
    this.range,
  });

  @override
  String toString() {
    return 'RequestTimeFilterPostcodeDistrictsDepartureSearch[id=$id, transportation=$transportation, travelTime=$travelTime, departureTime=$departureTime, reachablePostcodesThreshold=$reachablePostcodesThreshold, properties=$properties, range=$range, ]';
  }

  RequestTimeFilterPostcodeDistrictsDepartureSearch.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    transportation = (json['transportation'] == null) ?
      null :
      RequestTransportation.fromJson(json['transportation']);
    travelTime = json['travel_time'];
    departureTime = (json['departure_time'] == null) ?
      null :
      DateTime.parse(json['departure_time']);
    reachablePostcodesThreshold = (json['reachable_postcodes_threshold'] == null) ?
      null :
      json['reachable_postcodes_threshold'].toDouble();
    properties = (json['properties'] == null) ?
      null :
      RequestTimeFilterPostcodeDistrictsProperty.listFromJson(json['properties']);
    range = (json['range'] == null) ?
      null :
      RequestRangeFull.fromJson(json['range']);
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (id != null)
      json['id'] = id;
    if (transportation != null)
      json['transportation'] = transportation;
    if (travelTime != null)
      json['travel_time'] = travelTime;
    if (departureTime != null)
      json['departure_time'] = departureTime == null ? null : departureTime.toUtc().toIso8601String();
    if (reachablePostcodesThreshold != null)
      json['reachable_postcodes_threshold'] = reachablePostcodesThreshold;
    if (properties != null)
      json['properties'] = properties;
    if (range != null)
      json['range'] = range;
    return json;
  }

  static List<RequestTimeFilterPostcodeDistrictsDepartureSearch> listFromJson(List<dynamic> json) {
    return json == null ? List<RequestTimeFilterPostcodeDistrictsDepartureSearch>() : json.map((value) => RequestTimeFilterPostcodeDistrictsDepartureSearch.fromJson(value)).toList();
  }

  static Map<String, RequestTimeFilterPostcodeDistrictsDepartureSearch> mapFromJson(Map<String, dynamic> json) {
    var map = Map<String, RequestTimeFilterPostcodeDistrictsDepartureSearch>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = RequestTimeFilterPostcodeDistrictsDepartureSearch.fromJson(value));
    }
    return map;
  }

  // maps a json object with a list of RequestTimeFilterPostcodeDistrictsDepartureSearch-objects as value to a dart map
  static Map<String, List<RequestTimeFilterPostcodeDistrictsDepartureSearch>> mapListFromJson(Map<String, dynamic> json) {
    var map = Map<String, List<RequestTimeFilterPostcodeDistrictsDepartureSearch>>();
     if (json != null && json.isNotEmpty) {
       json.forEach((String key, dynamic value) {
         map[key] = RequestTimeFilterPostcodeDistrictsDepartureSearch.listFromJson(value);
       });
     }
     return map;
  }
}

