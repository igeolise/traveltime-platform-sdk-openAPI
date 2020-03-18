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
 * OAIRequestTimeMapDepartureSearch.h
 *
 * 
 */

#ifndef OAIRequestTimeMapDepartureSearch_H
#define OAIRequestTimeMapDepartureSearch_H

#include <QJsonObject>


#include "OAICoords.h"
#include "OAIRequestRangeNoMaxResults.h"
#include "OAIRequestTimeMapProperty.h"
#include "OAIRequestTransportation.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIRequestTimeMapDepartureSearch: public OAIObject {
public:
    OAIRequestTimeMapDepartureSearch();
    OAIRequestTimeMapDepartureSearch(QString json);
    ~OAIRequestTimeMapDepartureSearch() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getId() const;
    void setId(const QString &id);

    
    OAICoords getCoords() const;
    void setCoords(const OAICoords &coords);

    
    OAIRequestTransportation getTransportation() const;
    void setTransportation(const OAIRequestTransportation &transportation);

    
    qint32 getTravelTime() const;
    void setTravelTime(const qint32 &travel_time);

    
    QDateTime getDepartureTime() const;
    void setDepartureTime(const QDateTime &departure_time);

    
    QList<OAIRequestTimeMapProperty> getProperties() const;
    void setProperties(const QList<OAIRequestTimeMapProperty> &properties);

    
    OAIRequestRangeNoMaxResults getRange() const;
    void setRange(const OAIRequestRangeNoMaxResults &range);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    OAICoords coords;
    bool m_coords_isSet;
    bool m_coords_isValid;
    
    OAIRequestTransportation transportation;
    bool m_transportation_isSet;
    bool m_transportation_isValid;
    
    qint32 travel_time;
    bool m_travel_time_isSet;
    bool m_travel_time_isValid;
    
    QDateTime departure_time;
    bool m_departure_time_isSet;
    bool m_departure_time_isValid;
    
    QList<OAIRequestTimeMapProperty> properties;
    bool m_properties_isSet;
    bool m_properties_isValid;
    
    OAIRequestRangeNoMaxResults range;
    bool m_range_isSet;
    bool m_range_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIRequestTimeMapDepartureSearch)

#endif // OAIRequestTimeMapDepartureSearch_H
