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
 * OAIRequestRangeNoMaxResults.h
 *
 * 
 */

#ifndef OAIRequestRangeNoMaxResults_H_
#define OAIRequestRangeNoMaxResults_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestRangeNoMaxResults: public OAIObject {
public:
    OAIRequestRangeNoMaxResults();
    OAIRequestRangeNoMaxResults(QString json);
    ~OAIRequestRangeNoMaxResults();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestRangeNoMaxResults* fromJson(QString jsonString) override;

    bool isEnabled();
    void setEnabled(bool enabled);

    qint32 getWidth();
    void setWidth(qint32 width);


    virtual bool isSet() override;

private:
    bool enabled;
    bool m_enabled_isSet;

    qint32 width;
    bool m_width_isSet;

};

}

#endif /* OAIRequestRangeNoMaxResults_H_ */
