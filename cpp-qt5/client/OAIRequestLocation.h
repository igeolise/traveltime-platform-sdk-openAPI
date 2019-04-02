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
 * OAIRequestLocation.h
 *
 * 
 */

#ifndef OAIRequestLocation_H_
#define OAIRequestLocation_H_

#include <QJsonObject>


#include "OAICoords.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestLocation: public OAIObject {
public:
    OAIRequestLocation();
    OAIRequestLocation(QString json);
    ~OAIRequestLocation();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestLocation* fromJson(QString jsonString) override;

    QString* getId();
    void setId(QString* id);

    OAICoords* getCoords();
    void setCoords(OAICoords* coords);


    virtual bool isSet() override;

private:
    QString* id;
    bool m_id_isSet;

    OAICoords* coords;
    bool m_coords_isSet;

};

}

#endif /* OAIRequestLocation_H_ */
