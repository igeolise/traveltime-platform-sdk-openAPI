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
 * OAIRequestSupportedLocations.h
 *
 * 
 */

#ifndef OAIRequestSupportedLocations_H_
#define OAIRequestSupportedLocations_H_

#include <QJsonObject>


#include "OAIRequestLocation.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestSupportedLocations: public OAIObject {
public:
    OAIRequestSupportedLocations();
    OAIRequestSupportedLocations(QString json);
    ~OAIRequestSupportedLocations();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRequestSupportedLocations* fromJson(QString jsonString) override;

    QList<OAIRequestLocation*>* getLocations();
    void setLocations(QList<OAIRequestLocation*>* locations);


    virtual bool isSet() override;

private:
    QList<OAIRequestLocation*>* locations;
    bool m_locations_isSet;

};

}

#endif /* OAIRequestSupportedLocations_H_ */
