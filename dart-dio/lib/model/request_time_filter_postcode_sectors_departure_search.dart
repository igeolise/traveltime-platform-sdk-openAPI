            import 'package:openapi/model/request_range_full.dart';
            import 'package:openapi/model/request_time_filter_postcode_sectors_property.dart';
            import 'package:built_collection/built_collection.dart';
            import 'package:openapi/model/request_transportation.dart';
        import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'request_time_filter_postcode_sectors_departure_search.g.dart';

abstract class RequestTimeFilterPostcodeSectorsDepartureSearch implements Built<RequestTimeFilterPostcodeSectorsDepartureSearch, RequestTimeFilterPostcodeSectorsDepartureSearchBuilder> {

    
        @nullable
    @BuiltValueField(wireName: r'id')
    String get id;
    
        @nullable
    @BuiltValueField(wireName: r'transportation')
    RequestTransportation get transportation;
    
        @nullable
    @BuiltValueField(wireName: r'travel_time')
    int get travelTime;
    
        @nullable
    @BuiltValueField(wireName: r'departure_time')
    DateTime get departureTime;
    
        @nullable
    @BuiltValueField(wireName: r'reachable_postcodes_threshold')
    double get reachablePostcodesThreshold;
    
        @nullable
    @BuiltValueField(wireName: r'properties')
    BuiltList<RequestTimeFilterPostcodeSectorsProperty> get properties;
    
        @nullable
    @BuiltValueField(wireName: r'range')
    RequestRangeFull get range;

    // Boilerplate code needed to wire-up generated code
    RequestTimeFilterPostcodeSectorsDepartureSearch._();

    factory RequestTimeFilterPostcodeSectorsDepartureSearch([updates(RequestTimeFilterPostcodeSectorsDepartureSearchBuilder b)]) = _$RequestTimeFilterPostcodeSectorsDepartureSearch;
    static Serializer<RequestTimeFilterPostcodeSectorsDepartureSearch> get serializer => _$requestTimeFilterPostcodeSectorsDepartureSearchSerializer;
}

