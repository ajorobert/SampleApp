/*
 * generic_property.h
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#ifndef GENERIC_PROPERTY_H_
#define GENERIC_PROPERTY_H_

#include "property.h"

template <class T>
class GenericProperty: public Property {
public:
	virtual ~GenericProperty() = default;

public:
	int ReadValue() override {
		std::cout << "Please enter a " << typeid(T).name() <<" value for {" << name_ << "} : ";
		std::cin >> value_;
		return 0;
	}

	int PrintValue() override {
		std::cout << typeid(T).name() << " value of {" << name_ << "} is : " << value_;
		return 0;
	}

protected:
	T value_;
};



#endif /* GENERIC_PROPERTY_H_ */
