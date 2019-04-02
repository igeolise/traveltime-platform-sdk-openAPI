/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIRequestTimeFilterPostcodeDistrictsProperty.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodeDistrictsProperty_H_
#define OAIRequestTimeFilterPostcodeDistrictsProperty_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterPostcodeDistrictsProperty: public OAIObject {
public:
    OAIRequestTimeFilterPostcodeDistrictsProperty();
    OAIRequestTimeFilterPostcodeDistrictsProperty(QString json);
    ~OAIRequestTimeFilterPostcodeDistrictsProperty();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestTimeFilterPostcodeDistrictsProperty* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIRequestTimeFilterPostcodeDistrictsProperty_H_ */
