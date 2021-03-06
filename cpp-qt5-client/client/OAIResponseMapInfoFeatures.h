/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIResponseMapInfoFeatures.h
 *
 * 
 */

#ifndef OAIResponseMapInfoFeatures_H
#define OAIResponseMapInfoFeatures_H

#include <QJsonObject>

#include "OAIResponseMapInfoFeaturesPublicTransport.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseMapInfoFeatures : public OAIObject {
public:
    OAIResponseMapInfoFeatures();
    OAIResponseMapInfoFeatures(QString json);
    ~OAIResponseMapInfoFeatures() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIResponseMapInfoFeaturesPublicTransport getPublicTransport() const;
    void setPublicTransport(const OAIResponseMapInfoFeaturesPublicTransport &public_transport);
    bool is_public_transport_Set() const;
    bool is_public_transport_Valid() const;

    bool isFares() const;
    void setFares(const bool &fares);
    bool is_fares_Set() const;
    bool is_fares_Valid() const;

    bool isPostcodes() const;
    void setPostcodes(const bool &postcodes);
    bool is_postcodes_Set() const;
    bool is_postcodes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIResponseMapInfoFeaturesPublicTransport public_transport;
    bool m_public_transport_isSet;
    bool m_public_transport_isValid;

    bool fares;
    bool m_fares_isSet;
    bool m_fares_isValid;

    bool postcodes;
    bool m_postcodes_isSet;
    bool m_postcodes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseMapInfoFeatures)

#endif // OAIResponseMapInfoFeatures_H
