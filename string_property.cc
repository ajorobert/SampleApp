/*
 * string_property.cc
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#include "string_property.h"
#include <iostream>

int StringProperty::ReadValue() {
	std::cout << "Please enter a string value for {" << name_ << "} : ";
	std::cin >> value_;
	return 0;
}

int StringProperty::PrintValue() {
	std::cout << "String value of {" << name_ << "} is : " << value_ << std::endl;
	return 0;
}
