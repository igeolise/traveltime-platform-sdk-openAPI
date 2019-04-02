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
 * OAIResponseFaresBreakdownItem.h
 *
 * 
 */

#ifndef OAIResponseFaresBreakdownItem_H_
#define OAIResponseFaresBreakdownItem_H_

#include <QJsonObject>


#include "OAIResponseFareTicket.h"
#include "OAIResponseTransportationMode.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseFaresBreakdownItem: public OAIObject {
public:
    OAIResponseFaresBreakdownItem();
    OAIResponseFaresBreakdownItem(QString json);
    ~OAIResponseFaresBreakdownItem();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIResponseFaresBreakdownItem* fromJson(QString jsonString) override;

    QList<OAIResponseTransportationMode*>* getModes();
    void setModes(QList<OAIResponseTransportationMode*>* modes);

    QList<qint32>* getRoutePartIds();
    void setRoutePartIds(QList<qint32>* route_part_ids);

    QList<OAIResponseFareTicket*>* getTickets();
    void setTickets(QList<OAIResponseFareTicket*>* tickets);


    virtual bool isSet() override;

private:
    QList<OAIResponseTransportationMode*>* modes;
    bool m_modes_isSet;

    QList<qint32>* route_part_ids;
    bool m_route_part_ids_isSet;

    QList<OAIResponseFareTicket*>* tickets;
    bool m_tickets_isSet;

};

}

#endif /* OAIResponseFaresBreakdownItem_H_ */
