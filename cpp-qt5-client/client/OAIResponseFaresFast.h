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
 * OAIResponseFaresFast.h
 *
 * 
 */

#ifndef OAIResponseFaresFast_H
#define OAIResponseFaresFast_H

#include <QJsonObject>


#include "OAIResponseFareTicket.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseFaresFast: public OAIObject {
public:
    OAIResponseFaresFast();
    OAIResponseFaresFast(QString json);
    ~OAIResponseFaresFast() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIResponseFareTicket> getTicketsTotal() const;
    void setTicketsTotal(const QList<OAIResponseFareTicket> &tickets_total);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIResponseFareTicket> tickets_total;
    bool m_tickets_total_isSet;
    bool m_tickets_total_isValid;
    
    };

}

#endif // OAIResponseFaresFast_H