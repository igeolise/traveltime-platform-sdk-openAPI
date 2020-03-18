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
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseRoute: public OAIObject {
public:
    OAIResponseRoute();
    OAIResponseRoute(QString json);
    ~OAIResponseRoute() override;

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
    virtual bool isValid() const override;

private:
    void init();
    
    QDateTime departure_time;
    bool m_departure_time_isSet;
    bool m_departure_time_isValid;
    
    QDateTime arrival_time;
    bool m_arrival_time_isSet;
    bool m_arrival_time_isValid;
    
    QList<OAIResponseRoutePart> parts;
    bool m_parts_isSet;
    bool m_parts_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseRoute)

#endif // OAIResponseRoute_H
