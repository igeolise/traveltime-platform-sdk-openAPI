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
 * OAIResponseTimeFilterFast.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterFast_H
#define OAIResponseTimeFilterFast_H

#include <QJsonObject>


#include "OAIResponseTimeFilterFastResult.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterFast: public OAIObject {
public:
    OAIResponseTimeFilterFast();
    OAIResponseTimeFilterFast(QString json);
    ~OAIResponseTimeFilterFast() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIResponseTimeFilterFastResult> getResults() const;
    void setResults(const QList<OAIResponseTimeFilterFastResult> &results);

    virtual bool isSet() const override;

private:
    QList<OAIResponseTimeFilterFastResult> results;
    bool m_results_isSet;

};

}

#endif // OAIResponseTimeFilterFast_H
