/*
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASResponseMapInfoFeatures
 */
public class OASResponseMapInfoFeatures implements OAS.MappedProperties {
    /**
     * Get publicTransport
     * @return publicTransport
     */
    public OASResponseMapInfoFeaturesPublicTran publicTransport { get; set; }

    /**
     * Get fares
     * @return fares
     */
    public Boolean fares { get; set; }

    /**
     * Get postcodes
     * @return postcodes
     */
    public Boolean postcodes { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'public_transport' => 'publicTransport'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASResponseMapInfoFeatures getExample() {
        OASResponseMapInfoFeatures responseMapInfoFeatures = new OASResponseMapInfoFeatures();
          responseMapInfoFeatures.publicTransport = OASResponseMapInfoFeaturesPublicTran.getExample();
          responseMapInfoFeatures.fares = true;
          responseMapInfoFeatures.postcodes = true;
        return responseMapInfoFeatures;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASResponseMapInfoFeatures) {           
            OASResponseMapInfoFeatures responseMapInfoFeatures = (OASResponseMapInfoFeatures) obj;
            return this.publicTransport == responseMapInfoFeatures.publicTransport
                && this.fares == responseMapInfoFeatures.fares
                && this.postcodes == responseMapInfoFeatures.postcodes;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (publicTransport == null ? 0 : System.hashCode(publicTransport));
        hashCode = (17 * hashCode) + (fares == null ? 0 : System.hashCode(fares));
        hashCode = (17 * hashCode) + (postcodes == null ? 0 : System.hashCode(postcodes));
        return hashCode;
    }
}

