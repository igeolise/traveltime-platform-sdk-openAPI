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
 * OAIResponseGeocodingGeometry.h
 *
 * 
 */

#ifndef OAIResponseGeocodingGeometry_H
#define OAIResponseGeocodingGeometry_H

#include <QJsonObject>


#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseGeocodingGeometry: public OAIObject {
public:
    OAIResponseGeocodingGeometry();
    OAIResponseGeocodingGeometry(QString json);
    ~OAIResponseGeocodingGeometry() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getType() const;
    void setType(const QString &type);

    
    QList<double> getCoordinates() const;
    void setCoordinates(const QList<double> &coordinates);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString type;
    bool m_type_isSet;
    bool m_type_isValid;
    
    QList<double> coordinates;
    bool m_coordinates_isSet;
    bool m_coordinates_isValid;
    
    };

}

#endif // OAIResponseGeocodingGeometry_H
