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
 * OAIRequestSupportedLocations.h
 *
 * 
 */

#ifndef OAIRequestSupportedLocations_H
#define OAIRequestSupportedLocations_H

#include <QJsonObject>


#include "OAIRequestLocation.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestSupportedLocations: public OAIObject {
public:
    OAIRequestSupportedLocations();
    OAIRequestSupportedLocations(QString json);
    ~OAIRequestSupportedLocations() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIRequestLocation> getLocations() const;
    void setLocations(const QList<OAIRequestLocation> &locations);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIRequestLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;
    
    };

}

#endif // OAIRequestSupportedLocations_H
