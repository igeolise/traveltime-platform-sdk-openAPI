/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIResponseTimeFilterPostcodeDistrict.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodeDistrict_H
#define OAIResponseTimeFilterPostcodeDistrict_H

#include <QJsonObject>


#include "OAIResponseTimeFilterPostcodeDistrictProperties.h"

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseTimeFilterPostcodeDistrict: public OAIObject {
public:
    OAIResponseTimeFilterPostcodeDistrict();
    OAIResponseTimeFilterPostcodeDistrict(QString json);
    ~OAIResponseTimeFilterPostcodeDistrict() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    String getCode() const;
    void setCode(const String &code);

    
    OAIResponseTimeFilterPostcodeDistrictProperties getProperties() const;
    void setProperties(const OAIResponseTimeFilterPostcodeDistrictProperties &properties);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    String code;
    bool m_code_isSet;
    bool m_code_isValid;
    
    OAIResponseTimeFilterPostcodeDistrictProperties properties;
    bool m_properties_isSet;
    bool m_properties_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterPostcodeDistrict)

#endif // OAIResponseTimeFilterPostcodeDistrict_H
