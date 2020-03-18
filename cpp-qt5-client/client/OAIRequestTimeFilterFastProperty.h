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
 * OAIRequestTimeFilterFastProperty.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterFastProperty_H
#define OAIRequestTimeFilterFastProperty_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterFastProperty : public OAIEnum {
public:
    OAIRequestTimeFilterFastProperty();
    OAIRequestTimeFilterFastProperty(QString json);
    ~OAIRequestTimeFilterFastProperty() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIRequestTimeFilterFastProperty {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TRAVEL_TIME, 
        FARES
    };
    OAIRequestTimeFilterFastProperty::eOAIRequestTimeFilterFastProperty getValue() const;
    void setValue(const OAIRequestTimeFilterFastProperty::eOAIRequestTimeFilterFastProperty& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIRequestTimeFilterFastProperty m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRequestTimeFilterFastProperty)

#endif // OAIRequestTimeFilterFastProperty_H
