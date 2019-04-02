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
 * OAIRequestTimeFilterPostcodesProperty.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodesProperty_H
#define OAIRequestTimeFilterPostcodesProperty_H

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterPostcodesProperty: public OAIObject {
public:
    OAIRequestTimeFilterPostcodesProperty();
    OAIRequestTimeFilterPostcodesProperty(QString json);
    ~OAIRequestTimeFilterPostcodesProperty() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;

private:
};

}

#endif // OAIRequestTimeFilterPostcodesProperty_H
