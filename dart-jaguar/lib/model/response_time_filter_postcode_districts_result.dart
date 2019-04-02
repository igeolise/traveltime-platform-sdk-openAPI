import 'package:jaguar_serializer/jaguar_serializer.dart';

import 'package:openapi/model/response_time_filter_postcode_district.dart';
part 'response_time_filter_postcode_districts_result.jser.dart';

class ResponseTimeFilterPostcodeDistrictsResult {
  
  @Alias('search_id')
  final String searchId;
  
  @Alias('districts')
  final List<ResponseTimeFilterPostcodeDistrict> districts;
  

  ResponseTimeFilterPostcodeDistrictsResult(
    

{
    
     this.searchId = null,  
     this.districts = const [] 
    }
  );

  @override
  String toString() {
    return 'ResponseTimeFilterPostcodeDistrictsResult[searchId=$searchId, districts=$districts, ]';
  }
}

@GenSerializer()
class ResponseTimeFilterPostcodeDistrictsResultSerializer extends Serializer<ResponseTimeFilterPostcodeDistrictsResult> with _$ResponseTimeFilterPostcodeDistrictsResultSerializer {

}
