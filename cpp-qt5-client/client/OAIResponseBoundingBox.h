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
 * OAIResponseBoundingBox.h
 *
 * 
 */

#ifndef OAIResponseBoundingBox_H
#define OAIResponseBoundingBox_H

#include <QJsonObject>


#include "OAIResponseBox.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseBoundingBox: public OAIObject {
public:
    OAIResponseBoundingBox();
    OAIResponseBoundingBox(QString json);
    ~OAIResponseBoundingBox() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    OAIResponseBox getEnvelope() const;
    void setEnvelope(const OAIResponseBox &envelope);

    
    QList<OAIResponseBox> getBoxes() const;
    void setBoxes(const QList<OAIResponseBox> &boxes);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    OAIResponseBox envelope;
    bool m_envelope_isSet;
    bool m_envelope_isValid;
    
    QList<OAIResponseBox> boxes;
    bool m_boxes_isSet;
    bool m_boxes_isValid;
    
    };

}

#endif // OAIResponseBoundingBox_H