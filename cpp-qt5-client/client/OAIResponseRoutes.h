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
 * OAIResponseRoutes.h
 *
 * 
 */

#ifndef OAIResponseRoutes_H
#define OAIResponseRoutes_H

#include <QJsonObject>

#include "OAIResponseRoutesResult.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseRoutes : public OAIObject {
public:
    OAIResponseRoutes();
    OAIResponseRoutes(QString json);
    ~OAIResponseRoutes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIResponseRoutesResult> getResults() const;
    void setResults(const QList<OAIResponseRoutesResult> &results);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIResponseRoutesResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseRoutes)

#endif // OAIResponseRoutes_H
