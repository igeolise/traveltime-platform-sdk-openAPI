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
 * OAIResponseSupportedLocations.h
 *
 * 
 */

#ifndef OAIResponseSupportedLocations_H
#define OAIResponseSupportedLocations_H

#include <QJsonObject>


#include "OAIResponseSupportedLocation.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseSupportedLocations: public OAIObject {
public:
    OAIResponseSupportedLocations();
    OAIResponseSupportedLocations(QString json);
    ~OAIResponseSupportedLocations() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIResponseSupportedLocation> getLocations() const;
    void setLocations(const QList<OAIResponseSupportedLocation> &locations);

    
    QList<QString> getUnsupportedLocations() const;
    void setUnsupportedLocations(const QList<QString> &unsupported_locations);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIResponseSupportedLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;
    
    QList<QString> unsupported_locations;
    bool m_unsupported_locations_isSet;
    bool m_unsupported_locations_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseSupportedLocations)

#endif // OAIResponseSupportedLocations_H
