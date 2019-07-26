/*
 * property_manager.cc
 *
 *  Created on: 25/07/2019
 *      Author: Ajo Robert
 */

#include "property_manager.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include "property_factory.h"

namespace PT = boost::property_tree;

int PropertyManager::Load() {
	try {
		PT::ptree pt;
		PT::read_json("config.json", pt);
		BOOST_FOREACH(PT::ptree::value_type &v, pt.get_child("properties"))
		{
			std::string type = v.second.get<std::string>("type");
			Property *prop = PropertyFactory::Make(type, v.first);
			if(prop)
				properties_.push_back(prop);
		}
	} catch (...) {
		return -1;
	}
	return 0;
}

int PropertyManager::Read() {
	std::string value;
	for (Property *prop: properties_) {
	    std::cout << "Enter the value for property "<< prop->GetName() << " [type: " << prop->GetType() << "] : ";
	    std::cin >> value;
	    prop->SetValue(value);
	}
	return 0;
}

int PropertyManager::Print() {
	for (Property *prop: properties_) {
		std::cout << "Current value of property " << prop->GetName() << " is : " << prop->GetValue() << std::endl;
	}
	return 0;
}

