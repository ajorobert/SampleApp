/*
 * string_property.h
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#ifndef STRING_PROPERTY_H_
#define STRING_PROPERTY_H_

#include <string>
#include "property.h"

class StringProperty: public Property {
public:
	virtual ~StringProperty() = default;

public:
	int SetValue(std::string value) override;
	std::string GetValue() override;
	std::string GetType() override;

protected:
	std::string value_;
};

#endif /* STRING_PROPERTY_H_ */
