part of openapi.api;

class RequestArrivalTimePeriod {
  /// The underlying value of this enum member.
  final String value;

  const RequestArrivalTimePeriod._internal(this.value);

  static const RequestArrivalTimePeriod weekdayMorning_ = const RequestArrivalTimePeriod._internal("weekday_morning");
  
  String toJson (){
    return this.value;
  }

  static RequestArrivalTimePeriod fromJson(String value) {
    return new RequestArrivalTimePeriodTypeTransformer().decode(value);
  }
  
  static List<RequestArrivalTimePeriod> listFromJson(List<dynamic> json) {
    return json == null ? new List<RequestArrivalTimePeriod>() : json.map((value) => RequestArrivalTimePeriod.fromJson(value)).toList();
  }
}

class RequestArrivalTimePeriodTypeTransformer {

  dynamic encode(RequestArrivalTimePeriod data) {
    return data.value;
  }

  RequestArrivalTimePeriod decode(dynamic data) {
    switch (data) {
      case "weekday_morning": return RequestArrivalTimePeriod.weekdayMorning_;
      default: throw('Unknown enum value to decode: $data');
    }
  }
}

