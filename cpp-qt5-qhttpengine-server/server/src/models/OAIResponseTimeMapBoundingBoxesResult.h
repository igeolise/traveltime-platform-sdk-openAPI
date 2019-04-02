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
 * OAIResponseTimeMapBoundingBoxesResult.h
 *
 * 
 */

#ifndef OAIResponseTimeMapBoundingBoxesResult_H
#define OAIResponseTimeMapBoundingBoxesResult_H

#include <QJsonObject>


#include "OAIResponseBoundingBox.h"
#include "OAIResponseTimeMapProperties.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeMapBoundingBoxesResult: public OAIObject {
public:
    OAIResponseTimeMapBoundingBoxesResult();
    OAIResponseTimeMapBoundingBoxesResult(QString json);
    ~OAIResponseTimeMapBoundingBoxesResult() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSearchId() const;
    void setSearchId(const QString &search_id);

    QList<OAIResponseBoundingBox> getBoundingBoxes() const;
    void setBoundingBoxes(const QList<OAIResponseBoundingBox> &bounding_boxes);

    OAIResponseTimeMapProperties getProperties() const;
    void setProperties(const OAIResponseTimeMapProperties &properties);

    virtual bool isSet() const override;

private:
    QString search_id;
    bool m_search_id_isSet;

    QList<OAIResponseBoundingBox> bounding_boxes;
    bool m_bounding_boxes_isSet;

    OAIResponseTimeMapProperties properties;
    bool m_properties_isSet;

};

}

#endif // OAIResponseTimeMapBoundingBoxesResult_H
