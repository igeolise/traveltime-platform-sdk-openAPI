/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ApiException.h
 *
 * This is the exception being thrown in case the api call was not successful
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ApiException_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ApiException_H_



#include <memory>
#include <map>

#include <cpprest/details/basic_types.h>
#include <cpprest/http_msg.h>


namespace org {
namespace openapitools {
namespace client {
namespace api {

class  ApiException
    : public web::http::http_exception
{
public:
    ApiException( int errorCode
        , const utility::string_t& message
        , std::shared_ptr<std::istream> content = nullptr );
    ApiException( int errorCode
        , const utility::string_t& message
        , std::map<utility::string_t, utility::string_t>& headers
        , std::shared_ptr<std::istream> content = nullptr );
    virtual ~ApiException();

    std::map<utility::string_t, utility::string_t>& getHeaders();
    std::shared_ptr<std::istream> getContent() const;

protected:
    std::shared_ptr<std::istream> m_Content;
    std::map<utility::string_t, utility::string_t> m_Headers;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ApiBase_H_ */
