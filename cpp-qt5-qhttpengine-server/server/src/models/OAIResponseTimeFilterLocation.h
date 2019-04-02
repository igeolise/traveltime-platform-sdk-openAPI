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
 * OAIResponseTimeFilterLocation.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterLocation_H
#define OAIResponseTimeFilterLocation_H

#include <QJsonObject>


#include "OAIResponseTimeFilterProperties.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterLocation: public OAIObject {
public:
    OAIResponseTimeFilterLocation();
    OAIResponseTimeFilterLocation(QString json);
    ~OAIResponseTimeFilterLocation() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);

    QList<OAIResponseTimeFilterProperties> getProperties() const;
    void setProperties(const QList<OAIResponseTimeFilterProperties> &properties);

    virtual bool isSet() const override;

private:
    QString id;
    bool m_id_isSet;

    QList<OAIResponseTimeFilterProperties> properties;
    bool m_properties_isSet;

};

}

#endif // OAIResponseTimeFilterLocation_H
