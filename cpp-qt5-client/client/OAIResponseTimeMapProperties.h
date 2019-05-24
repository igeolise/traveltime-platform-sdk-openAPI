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
 * OAIResponseTimeMapProperties.h
 *
 * 
 */

#ifndef OAIResponseTimeMapProperties_H
#define OAIResponseTimeMapProperties_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseTimeMapProperties: public OAIObject {
public:
    OAIResponseTimeMapProperties();
    OAIResponseTimeMapProperties(QString json);
    ~OAIResponseTimeMapProperties() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    bool isIsOnlyWalking() const;
    void setIsOnlyWalking(const bool &is_only_walking);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    bool is_only_walking;
    bool m_is_only_walking_isSet;
    bool m_is_only_walking_isValid;
    
    };

}

#endif // OAIResponseTimeMapProperties_H