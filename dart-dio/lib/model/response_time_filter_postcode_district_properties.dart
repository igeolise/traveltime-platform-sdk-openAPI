            import 'package:openapi/model/response_travel_time_statistics.dart';
        import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'response_time_filter_postcode_district_properties.g.dart';

abstract class ResponseTimeFilterPostcodeDistrictProperties implements Built<ResponseTimeFilterPostcodeDistrictProperties, ResponseTimeFilterPostcodeDistrictPropertiesBuilder> {

    
        @nullable
    @BuiltValueField(wireName: r'travel_time_reachable')
    ResponseTravelTimeStatistics get travelTimeReachable;
    
        @nullable
    @BuiltValueField(wireName: r'travel_time_all')
    ResponseTravelTimeStatistics get travelTimeAll;
    
        @nullable
    @BuiltValueField(wireName: r'coverage')
    double get coverage;

    // Boilerplate code needed to wire-up generated code
    ResponseTimeFilterPostcodeDistrictProperties._();

    factory ResponseTimeFilterPostcodeDistrictProperties([updates(ResponseTimeFilterPostcodeDistrictPropertiesBuilder b)]) = _$ResponseTimeFilterPostcodeDistrictProperties;
    static Serializer<ResponseTimeFilterPostcodeDistrictProperties> get serializer => _$responseTimeFilterPostcodeDistrictPropertiesSerializer;
}

