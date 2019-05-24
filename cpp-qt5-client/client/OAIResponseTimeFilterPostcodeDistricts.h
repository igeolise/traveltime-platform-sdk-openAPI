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
 * OAIResponseTimeFilterPostcodeDistricts.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodeDistricts_H
#define OAIResponseTimeFilterPostcodeDistricts_H

#include <QJsonObject>


#include "OAIResponseTimeFilterPostcodeDistrictsResult.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseTimeFilterPostcodeDistricts: public OAIObject {
public:
    OAIResponseTimeFilterPostcodeDistricts();
    OAIResponseTimeFilterPostcodeDistricts(QString json);
    ~OAIResponseTimeFilterPostcodeDistricts() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIResponseTimeFilterPostcodeDistrictsResult> getResults() const;
    void setResults(const QList<OAIResponseTimeFilterPostcodeDistrictsResult> &results);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIResponseTimeFilterPostcodeDistrictsResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
    
    };

}

#endif // OAIResponseTimeFilterPostcodeDistricts_H