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
 * OAIResponseTimeFilterFast.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterFast_H
#define OAIResponseTimeFilterFast_H

#include <QJsonObject>

#include "OAIResponseTimeFilterFastResult.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterFast : public OAIObject {
public:
    OAIResponseTimeFilterFast();
    OAIResponseTimeFilterFast(QString json);
    ~OAIResponseTimeFilterFast() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIResponseTimeFilterFastResult> getResults() const;
    void setResults(const QList<OAIResponseTimeFilterFastResult> &results);
    bool is_results_Set() const;
    bool is_results_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIResponseTimeFilterFastResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterFast)

#endif // OAIResponseTimeFilterFast_H
