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
 * OAIResponseTimeMapResult.h
 *
 * 
 */

#ifndef OAIResponseTimeMapResult_H_
#define OAIResponseTimeMapResult_H_

#include <QJsonObject>


#include "OAIResponseShape.h"
#include "OAIResponseTimeMapProperties.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeMapResult: public OAIObject {
public:
    OAIResponseTimeMapResult();
    OAIResponseTimeMapResult(QString json);
    ~OAIResponseTimeMapResult();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIResponseTimeMapResult* fromJson(QString jsonString) override;

    QString* getSearchId();
    void setSearchId(QString* search_id);

    QList<OAIResponseShape*>* getShapes();
    void setShapes(QList<OAIResponseShape*>* shapes);

    OAIResponseTimeMapProperties* getProperties();
    void setProperties(OAIResponseTimeMapProperties* properties);


    virtual bool isSet() override;

private:
    QString* search_id;
    bool m_search_id_isSet;

    QList<OAIResponseShape*>* shapes;
    bool m_shapes_isSet;

    OAIResponseTimeMapProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIResponseTimeMapResult_H_ */
