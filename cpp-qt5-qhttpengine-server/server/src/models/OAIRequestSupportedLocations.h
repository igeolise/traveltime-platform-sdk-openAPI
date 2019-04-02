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

namespace OpenAPI {

class OAIRequestSupportedLocations: public OAIObject {
public:
    OAIRequestSupportedLocations();
    OAIRequestSupportedLocations(QString json);
    ~OAIRequestSupportedLocations() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIRequestLocation> getLocations() const;
    void setLocations(const QList<OAIRequestLocation> &locations);

    virtual bool isSet() const override;

private:
    QList<OAIRequestLocation> locations;
    bool m_locations_isSet;

};

}

#endif // OAIRequestSupportedLocations_H
