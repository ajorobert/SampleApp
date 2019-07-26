/*
 * generic_property.h
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#ifndef GENERIC_PROPERTY_H_
#define GENERIC_PROPERTY_H_

#include "property.h"
#include <typeinfo>
#include <sstream>

template <class T>
class GenericProperty: public Property {
public:
	GenericProperty(std::string name): Property(name) {};
	virtual ~GenericProperty() = default;

public:
	int SetValue(std::string value) override {
		try {
			std::stringstream ss(value);
			ss >> value_;
		} catch (...) {
			value_ = 0;
		}
		return 0;
	}

	std::string GetValue() override {
		std::stringstream ss;;
		ss << value_;
		return ss.str();
	}

	std::string GetType() override {
		return typeid(T).name();
	}

protected:
	T value_;
};



#endif /* GENERIC_PROPERTY_H_ */
