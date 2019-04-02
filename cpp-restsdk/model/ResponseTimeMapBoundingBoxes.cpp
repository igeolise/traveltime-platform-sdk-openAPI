/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseTimeMapBoundingBoxes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ResponseTimeMapBoundingBoxes::ResponseTimeMapBoundingBoxes()
{
}

ResponseTimeMapBoundingBoxes::~ResponseTimeMapBoundingBoxes()
{
}

void ResponseTimeMapBoundingBoxes::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeMapBoundingBoxes::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("results")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ResponseTimeMapBoundingBoxes::fromJson(const web::json::value& val)
{
    {
        m_Results.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("results")).as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<ResponseTimeMapBoundingBoxesResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeMapBoundingBoxesResult> newItem(new ResponseTimeMapBoundingBoxesResult());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
    }
}

void ResponseTimeMapBoundingBoxes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("results"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ResponseTimeMapBoundingBoxes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Results.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("results"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<ResponseTimeMapBoundingBoxesResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeMapBoundingBoxesResult> newItem(new ResponseTimeMapBoundingBoxesResult());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
    }
}

std::vector<std::shared_ptr<ResponseTimeMapBoundingBoxesResult>>& ResponseTimeMapBoundingBoxes::getResults()
{
    return m_Results;
}

void ResponseTimeMapBoundingBoxes::setResults(const std::vector<std::shared_ptr<ResponseTimeMapBoundingBoxesResult>>& value)
{
    m_Results = value;
    
}

}
}
}
}

