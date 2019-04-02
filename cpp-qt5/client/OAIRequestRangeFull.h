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
 * OAIRequestRangeFull.h
 *
 * 
 */

#ifndef OAIRequestRangeFull_H_
#define OAIRequestRangeFull_H_

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestRangeFull: public OAIObject {
public:
    OAIRequestRangeFull();
    OAIRequestRangeFull(QString json);
    ~OAIRequestRangeFull();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestRangeFull* fromJson(QString jsonString) override;

    bool isEnabled();
    void setEnabled(bool enabled);

    qint32 getMaxResults();
    void setMaxResults(qint32 max_results);

    qint32 getWidth();
    void setWidth(qint32 width);


    virtual bool isSet() override;

private:
    bool enabled;
    bool m_enabled_isSet;

    qint32 max_results;
    bool m_max_results_isSet;

    qint32 width;
    bool m_width_isSet;

};

}

#endif /* OAIRequestRangeFull_H_ */
