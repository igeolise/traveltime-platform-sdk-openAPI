/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIRequestRoutesDepartureSearch.h
 *
 * 
 */

#ifndef OAIRequestRoutesDepartureSearch_H
#define OAIRequestRoutesDepartureSearch_H

#include <QJsonObject>

#include "OAIRequestRangeFull.h"
#include "OAIRequestRoutesProperty.h"
#include "OAIRequestTransportation.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestRoutesDepartureSearch : public OAIObject {
public:
    OAIRequestRoutesDepartureSearch();
    OAIRequestRoutesDepartureSearch(QString json);
    ~OAIRequestRoutesDepartureSearch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getDepartureLocationId() const;
    void setDepartureLocationId(const QString &departure_location_id);
    bool is_departure_location_id_Set() const;
    bool is_departure_location_id_Valid() const;

    QList<QString> getArrivalLocationIds() const;
    void setArrivalLocationIds(const QList<QString> &arrival_location_ids);
    bool is_arrival_location_ids_Set() const;
    bool is_arrival_location_ids_Valid() const;

    OAIRequestTransportation getTransportation() const;
    void setTransportation(const OAIRequestTransportation &transportation);
    bool is_transportation_Set() const;
    bool is_transportation_Valid() const;

    QDateTime getDepartureTime() const;
    void setDepartureTime(const QDateTime &departure_time);
    bool is_departure_time_Set() const;
    bool is_departure_time_Valid() const;

    QList<OAIRequestRoutesProperty> getProperties() const;
    void setProperties(const QList<OAIRequestRoutesProperty> &properties);
    bool is_properties_Set() const;
    bool is_properties_Valid() const;

    OAIRequestRangeFull getRange() const;
    void setRange(const OAIRequestRangeFull &range);
    bool is_range_Set() const;
    bool is_range_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString departure_location_id;
    bool m_departure_location_id_isSet;
    bool m_departure_location_id_isValid;

    QList<QString> arrival_location_ids;
    bool m_arrival_location_ids_isSet;
    bool m_arrival_location_ids_isValid;

    OAIRequestTransportation transportation;
    bool m_transportation_isSet;
    bool m_transportation_isValid;

    QDateTime departure_time;
    bool m_departure_time_isSet;
    bool m_departure_time_isValid;

    QList<OAIRequestRoutesProperty> properties;
    bool m_properties_isSet;
    bool m_properties_isValid;

    OAIRequestRangeFull range;
    bool m_range_isSet;
    bool m_range_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRequestRoutesDepartureSearch)

#endif // OAIRequestRoutesDepartureSearch_H
