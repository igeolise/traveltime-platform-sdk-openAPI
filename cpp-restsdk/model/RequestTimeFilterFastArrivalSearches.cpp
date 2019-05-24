/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterFastArrivalSearches.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




RequestTimeFilterFastArrivalSearches::RequestTimeFilterFastArrivalSearches()
{
    m_Many_to_oneIsSet = false;
    m_One_to_manyIsSet = false;
}

RequestTimeFilterFastArrivalSearches::~RequestTimeFilterFastArrivalSearches()
{
}

void RequestTimeFilterFastArrivalSearches::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterFastArrivalSearches::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Many_to_one )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("many_to_one")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_One_to_many )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("one_to_many")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void RequestTimeFilterFastArrivalSearches::fromJson(const web::json::value& val)
{
    {
        m_Many_to_one.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("many_to_one")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("many_to_one")).as_array() )
        {
            if(item.is_null())
            {
                m_Many_to_one.push_back( std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch> newItem(new RequestTimeFilterFastArrivalManyToOneSearch());
                newItem->fromJson(item);
                m_Many_to_one.push_back( newItem );
            }
        }
        }
    }
    {
        m_One_to_many.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("one_to_many")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("one_to_many")).as_array() )
        {
            if(item.is_null())
            {
                m_One_to_many.push_back( std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch> newItem(new RequestTimeFilterFastArrivalOneToManySearch());
                newItem->fromJson(item);
                m_One_to_many.push_back( newItem );
            }
        }
        }
    }
}

void RequestTimeFilterFastArrivalSearches::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Many_to_one )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("many_to_one"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_One_to_many )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("one_to_many"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void RequestTimeFilterFastArrivalSearches::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Many_to_one.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("many_to_one")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("many_to_one"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Many_to_one.push_back( std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch> newItem(new RequestTimeFilterFastArrivalManyToOneSearch());
                newItem->fromJson(item);
                m_Many_to_one.push_back( newItem );
            }
        }
        }
    }
    {
        m_One_to_many.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("one_to_many")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("one_to_many"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_One_to_many.push_back( std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch> newItem(new RequestTimeFilterFastArrivalOneToManySearch());
                newItem->fromJson(item);
                m_One_to_many.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>>& RequestTimeFilterFastArrivalSearches::getManyToOne()
{
    return m_Many_to_one;
}

void RequestTimeFilterFastArrivalSearches::setManyToOne(const std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>>& value)
{
    m_Many_to_one = value;
    m_Many_to_oneIsSet = true;
}

bool RequestTimeFilterFastArrivalSearches::manyToOneIsSet() const
{
    return m_Many_to_oneIsSet;
}

void RequestTimeFilterFastArrivalSearches::unsetMany_to_one()
{
    m_Many_to_oneIsSet = false;
}

std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>>& RequestTimeFilterFastArrivalSearches::getOneToMany()
{
    return m_One_to_many;
}

void RequestTimeFilterFastArrivalSearches::setOneToMany(const std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>>& value)
{
    m_One_to_many = value;
    m_One_to_manyIsSet = true;
}

bool RequestTimeFilterFastArrivalSearches::oneToManyIsSet() const
{
    return m_One_to_manyIsSet;
}

void RequestTimeFilterFastArrivalSearches::unsetOne_to_many()
{
    m_One_to_manyIsSet = false;
}

}
}
}
}


