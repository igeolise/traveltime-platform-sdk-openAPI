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
 * OAIResponseTimeFilter.h
 *
 * 
 */

#ifndef OAIResponseTimeFilter_H
#define OAIResponseTimeFilter_H

#include <QJsonObject>


#include "OAIResponseTimeFilterResult.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseTimeFilter: public OAIObject {
public:
    OAIResponseTimeFilter();
    OAIResponseTimeFilter(QString json);
    ~OAIResponseTimeFilter() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIResponseTimeFilterResult> getResults() const;
    void setResults(const QList<OAIResponseTimeFilterResult> &results);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIResponseTimeFilterResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilter)

#endif // OAIResponseTimeFilter_H
