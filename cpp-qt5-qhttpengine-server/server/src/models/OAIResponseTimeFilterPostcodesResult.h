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
 * OAIResponseTimeFilterPostcodesResult.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodesResult_H
#define OAIResponseTimeFilterPostcodesResult_H

#include <QJsonObject>


#include "OAIResponseTimeFilterPostcode.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterPostcodesResult: public OAIObject {
public:
    OAIResponseTimeFilterPostcodesResult();
    OAIResponseTimeFilterPostcodesResult(QString json);
    ~OAIResponseTimeFilterPostcodesResult() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSearchId() const;
    void setSearchId(const QString &search_id);

    QList<OAIResponseTimeFilterPostcode> getPostcodes() const;
    void setPostcodes(const QList<OAIResponseTimeFilterPostcode> &postcodes);

    virtual bool isSet() const override;

private:
    QString search_id;
    bool m_search_id_isSet;

    QList<OAIResponseTimeFilterPostcode> postcodes;
    bool m_postcodes_isSet;

};

}

#endif // OAIResponseTimeFilterPostcodesResult_H
