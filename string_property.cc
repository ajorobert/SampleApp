/*
 * string_property.cc
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#include "string_property.h"
#include <iostream>

int StringProperty::SetValue(std::string value) {
	value_ = value;
	return 0;
}

std::string StringProperty::GetValue() {
	return value_;
}

std::string StringProperty::GetType() {
	return "string";
}
