/*
 * main.cc
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#include <string>
#include <iostream>
#include "string_property.h"

int main() {
    StringProperty obj;
    std::string value;
    std::cout << "Enter the value [of type : " << obj.GetType() << "]";
    std::cin >> value;
    obj.SetValue(value);
    std::cout << "Current value [of type : " << obj.GetType() << "] is : " << obj.GetValue() << std::endl;

    return 0;
}
