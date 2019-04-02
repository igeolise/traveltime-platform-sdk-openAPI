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

namespace OpenAPI {

class OAIRequestTimeMapDepartureSearch: public OAIObject {
public:
    OAIRequestTimeMapDepartureSearch();
    OAIRequestTimeMapDepartureSearch(QString json);
    ~OAIRequestTimeMapDepartureSearch() override;
    void init();

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

private:
    QString id;
    bool m_id_isSet;

    OAICoords coords;
    bool m_coords_isSet;

    OAIRequestTransportation transportation;
    bool m_transportation_isSet;

    qint32 travel_time;
    bool m_travel_time_isSet;

    QDateTime departure_time;
    bool m_departure_time_isSet;

    QList<OAIRequestTimeMapProperty> properties;
    bool m_properties_isSet;

    OAIRequestRangeNoMaxResults range;
    bool m_range_isSet;

};

}

#endif // OAIRequestTimeMapDepartureSearch_H
