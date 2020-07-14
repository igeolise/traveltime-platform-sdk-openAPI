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
    
    if(m_Many_to_oneIsSet)
    {
        val[utility::conversions::to_string_t("many_to_one")] = ModelBase::toJson(m_Many_to_one);
    }
    if(m_One_to_manyIsSet)
    {
        val[utility::conversions::to_string_t("one_to_many")] = ModelBase::toJson(m_One_to_many);
    }

    return val;
}

bool RequestTimeFilterFastArrivalSearches::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("many_to_one")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("many_to_one"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> refVal_many_to_one;
            ok &= ModelBase::fromJson(fieldValue, refVal_many_to_one);
            setManyToOne(refVal_many_to_one);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("one_to_many")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("one_to_many"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> refVal_one_to_many;
            ok &= ModelBase::fromJson(fieldValue, refVal_one_to_many);
            setOneToMany(refVal_one_to_many);
        }
    }
    return ok;
}

void RequestTimeFilterFastArrivalSearches::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Many_to_oneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("many_to_one"), m_Many_to_one));
    }
    if(m_One_to_manyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("one_to_many"), m_One_to_many));
    }
}

bool RequestTimeFilterFastArrivalSearches::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("many_to_one")))
    {
        std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> refVal_many_to_one;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("many_to_one")), refVal_many_to_one );
        setManyToOne(refVal_many_to_one);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("one_to_many")))
    {
        std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> refVal_one_to_many;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("one_to_many")), refVal_one_to_many );
        setOneToMany(refVal_one_to_many);
    }
    return ok;
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


