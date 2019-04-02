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
 * OAIResponseTimeFilterPostcodeDistricts.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodeDistricts_H_
#define OAIResponseTimeFilterPostcodeDistricts_H_

#include <QJsonObject>


#include "OAIResponseTimeFilterPostcodeDistrictsResult.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterPostcodeDistricts: public OAIObject {
public:
    OAIResponseTimeFilterPostcodeDistricts();
    OAIResponseTimeFilterPostcodeDistricts(QString json);
    ~OAIResponseTimeFilterPostcodeDistricts();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIResponseTimeFilterPostcodeDistricts* fromJson(QString jsonString) override;

    QList<OAIResponseTimeFilterPostcodeDistrictsResult*>* getResults();
    void setResults(QList<OAIResponseTimeFilterPostcodeDistrictsResult*>* results);


    virtual bool isSet() override;

private:
    QList<OAIResponseTimeFilterPostcodeDistrictsResult*>* results;
    bool m_results_isSet;

};

}

#endif /* OAIResponseTimeFilterPostcodeDistricts_H_ */
