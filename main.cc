/*
 * main.cc
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#include <string>
#include <iostream>
#include "string_property.h"
#include "generic_property.h"
#include "property_manager.h"

int main() {
    PropertyManager manager;
    if (manager.Load() != 0) {
    	std::cout << "Failed to parse config file. Please check." << std::endl;
    	return -1;
    }
    manager.Read();
    manager.Print();
    return 0;
}
