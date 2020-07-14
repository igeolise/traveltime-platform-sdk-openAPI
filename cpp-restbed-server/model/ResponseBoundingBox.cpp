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



#include "ResponseBoundingBox.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseBoundingBox::ResponseBoundingBox()
{
}

ResponseBoundingBox::~ResponseBoundingBox()
{
}

std::string ResponseBoundingBox::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseBoundingBox::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseBoundingBox::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	if (m_Envelope != nullptr) {
		pt.add_child("envelope", m_Envelope->toPropertyTree());
	}
	// generate tree for Boxes
	if (!m_Boxes.empty()) {
		for (const auto &childEntry : m_Boxes) {
			ptree Boxes_node;
			Boxes_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Boxes_node));
		}
		pt.add_child("boxes", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseBoundingBox::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	if (pt.get_child_optional("envelope")) {
		m_Envelope = std::make_shared<ResponseBox>();
		m_Envelope->fromPropertyTree(pt.get_child("envelope"));
	}
	// push all items of Boxes into member vector
	if (pt.get_child_optional("boxes")) {
		for (const auto &childTree : pt.get_child("boxes")) {
			m_Boxes.emplace_back(childTree.second.data());
		}
	}
}

std::shared_ptr<ResponseBox> ResponseBoundingBox::getEnvelope() const
{
    return m_Envelope;
}
void ResponseBoundingBox::setEnvelope(std::shared_ptr<ResponseBox> value)
{
	m_Envelope = value;
}
std::vector<std::shared_ptr<ResponseBox>> ResponseBoundingBox::getBoxes() const
{
    return m_Boxes;
}
void ResponseBoundingBox::setBoxes(std::vector<std::shared_ptr<ResponseBox>> value)
{
	m_Boxes = value;
}

}
}
}
}

