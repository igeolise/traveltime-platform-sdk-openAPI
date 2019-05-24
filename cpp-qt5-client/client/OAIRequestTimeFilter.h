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
 * OAIRequestTimeFilter.h
 *
 * 
 */

#ifndef OAIRequestTimeFilter_H
#define OAIRequestTimeFilter_H

#include <QJsonObject>


#include "OAIRequestLocation.h"
#include "OAIRequestTimeFilterArrivalSearch.h"
#include "OAIRequestTimeFilterDepartureSearch.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestTimeFilter: public OAIObject {
public:
    OAIRequestTimeFilter();
    OAIRequestTimeFilter(QString json);
    ~OAIRequestTimeFilter() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIRequestLocation> getLocations() const;
    void setLocations(const QList<OAIRequestLocation> &locations);

    
    QList<OAIRequestTimeFilterDepartureSearch> getDepartureSearches() const;
    void setDepartureSearches(const QList<OAIRequestTimeFilterDepartureSearch> &departure_searches);

    
    QList<OAIRequestTimeFilterArrivalSearch> getArrivalSearches() const;
    void setArrivalSearches(const QList<OAIRequestTimeFilterArrivalSearch> &arrival_searches);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIRequestLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;
    
    QList<OAIRequestTimeFilterDepartureSearch> departure_searches;
    bool m_departure_searches_isSet;
    bool m_departure_searches_isValid;
    
    QList<OAIRequestTimeFilterArrivalSearch> arrival_searches;
    bool m_arrival_searches_isSet;
    bool m_arrival_searches_isValid;
    
    };

}

#endif // OAIRequestTimeFilter_H