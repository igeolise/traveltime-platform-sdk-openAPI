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
 * OAIRequestTimeFilterPostcodesArrivalSearch.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodesArrivalSearch_H_
#define OAIRequestTimeFilterPostcodesArrivalSearch_H_

#include <QJsonObject>


#include "OAIRequestRangeFull.h"
#include "OAIRequestTimeFilterPostcodesProperty.h"
#include "OAIRequestTransportation.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterPostcodesArrivalSearch: public OAIObject {
public:
    OAIRequestTimeFilterPostcodesArrivalSearch();
    OAIRequestTimeFilterPostcodesArrivalSearch(QString json);
    ~OAIRequestTimeFilterPostcodesArrivalSearch();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestTimeFilterPostcodesArrivalSearch* fromJson(QString jsonString) override;

    QString* getId();
    void setId(QString* id);

    OAIRequestTransportation* getTransportation();
    void setTransportation(OAIRequestTransportation* transportation);

    qint32 getTravelTime();
    void setTravelTime(qint32 travel_time);

    QDateTime* getArrivalTime();
    void setArrivalTime(QDateTime* arrival_time);

    QList<OAIRequestTimeFilterPostcodesProperty*>* getProperties();
    void setProperties(QList<OAIRequestTimeFilterPostcodesProperty*>* properties);

    OAIRequestRangeFull* getRange();
    void setRange(OAIRequestRangeFull* range);


    virtual bool isSet() override;

private:
    QString* id;
    bool m_id_isSet;

    OAIRequestTransportation* transportation;
    bool m_transportation_isSet;

    qint32 travel_time;
    bool m_travel_time_isSet;

    QDateTime* arrival_time;
    bool m_arrival_time_isSet;

    QList<OAIRequestTimeFilterPostcodesProperty*>* properties;
    bool m_properties_isSet;

    OAIRequestRangeFull* range;
    bool m_range_isSet;

};

}

#endif /* OAIRequestTimeFilterPostcodesArrivalSearch_H_ */
