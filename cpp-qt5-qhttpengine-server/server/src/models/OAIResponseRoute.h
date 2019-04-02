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
 * OAIResponseRoute.h
 *
 * 
 */

#ifndef OAIResponseRoute_H
#define OAIResponseRoute_H

#include <QJsonObject>


#include "OAIResponseRoutePart.h"
#include <QDateTime>
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseRoute: public OAIObject {
public:
    OAIResponseRoute();
    OAIResponseRoute(QString json);
    ~OAIResponseRoute() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QDateTime getDepartureTime() const;
    void setDepartureTime(const QDateTime &departure_time);

    QDateTime getArrivalTime() const;
    void setArrivalTime(const QDateTime &arrival_time);

    QList<OAIResponseRoutePart> getParts() const;
    void setParts(const QList<OAIResponseRoutePart> &parts);

    virtual bool isSet() const override;

private:
    QDateTime departure_time;
    bool m_departure_time_isSet;

    QDateTime arrival_time;
    bool m_arrival_time_isSet;

    QList<OAIResponseRoutePart> parts;
    bool m_parts_isSet;

};

}

#endif // OAIResponseRoute_H
