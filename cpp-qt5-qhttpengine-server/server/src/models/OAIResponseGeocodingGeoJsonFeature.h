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
 * OAIResponseGeocodingGeoJsonFeature.h
 *
 * 
 */

#ifndef OAIResponseGeocodingGeoJsonFeature_H
#define OAIResponseGeocodingGeoJsonFeature_H

#include <QJsonObject>


#include "OAIResponseGeocodingGeometry.h"
#include "OAIResponseGeocodingProperties.h"
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseGeocodingGeoJsonFeature: public OAIObject {
public:
    OAIResponseGeocodingGeoJsonFeature();
    OAIResponseGeocodingGeoJsonFeature(QString json);
    ~OAIResponseGeocodingGeoJsonFeature() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getType() const;
    void setType(const QString &type);

    
    OAIResponseGeocodingGeometry getGeometry() const;
    void setGeometry(const OAIResponseGeocodingGeometry &geometry);

    
    OAIResponseGeocodingProperties getProperties() const;
    void setProperties(const OAIResponseGeocodingProperties &properties);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString type;
    bool m_type_isSet;
    bool m_type_isValid;
    
    OAIResponseGeocodingGeometry geometry;
    bool m_geometry_isSet;
    bool m_geometry_isValid;
    
    OAIResponseGeocodingProperties properties;
    bool m_properties_isSet;
    bool m_properties_isValid;
    
    };

}

#endif // OAIResponseGeocodingGeoJsonFeature_H
