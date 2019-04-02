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
 * OAIResponseBoundingBox.h
 *
 * 
 */

#ifndef OAIResponseBoundingBox_H_
#define OAIResponseBoundingBox_H_

#include <QJsonObject>


#include "OAIResponseBox.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseBoundingBox: public OAIObject {
public:
    OAIResponseBoundingBox();
    OAIResponseBoundingBox(QString json);
    ~OAIResponseBoundingBox();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIResponseBoundingBox* fromJson(QString jsonString) override;

    OAIResponseBox* getEnvelope();
    void setEnvelope(OAIResponseBox* envelope);

    QList<OAIResponseBox*>* getBoxes();
    void setBoxes(QList<OAIResponseBox*>* boxes);


    virtual bool isSet() override;

private:
    OAIResponseBox* envelope;
    bool m_envelope_isSet;

    QList<OAIResponseBox*>* boxes;
    bool m_boxes_isSet;

};

}

#endif /* OAIResponseBoundingBox_H_ */
