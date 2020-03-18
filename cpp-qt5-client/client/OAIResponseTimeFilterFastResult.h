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
 * OAIResponseTimeFilterFastResult.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterFastResult_H
#define OAIResponseTimeFilterFastResult_H

#include <QJsonObject>

#include "OAIResponseTimeFilterFastLocation.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterFastResult : public OAIObject {
public:
    OAIResponseTimeFilterFastResult();
    OAIResponseTimeFilterFastResult(QString json);
    ~OAIResponseTimeFilterFastResult() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSearchId() const;
    void setSearchId(const QString &search_id);

    QList<OAIResponseTimeFilterFastLocation> getLocations() const;
    void setLocations(const QList<OAIResponseTimeFilterFastLocation> &locations);

    QList<QString> getUnreachable() const;
    void setUnreachable(const QList<QString> &unreachable);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString search_id;
    bool m_search_id_isSet;
    bool m_search_id_isValid;

    QList<OAIResponseTimeFilterFastLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;

    QList<QString> unreachable;
    bool m_unreachable_isSet;
    bool m_unreachable_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterFastResult)

#endif // OAIResponseTimeFilterFastResult_H
