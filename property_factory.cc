/*
 * property_factory.cc
 *
 *  Created on: 25/07/2019
 *      Author: Ajo Robert
 */

#include "property_factory.h"
#include "string_property.h"
#include "generic_property.h"

Property* PropertyFactory::Make(std::string type, std::string name) {
	if ("string" == type) {
		return new StringProperty(name);
	} else if ("int" == type) {
		return new GenericProperty<int>(name);
	} else if ("bool" == type) {
		return new GenericProperty<bool>(name);
	}
	return nullptr;
}



