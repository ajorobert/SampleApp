/*
 * property.h
 *
 *  Created on: 24/07/2019
 *      Author: Ajo Robert
 */

#ifndef PROPERTY_H_
#define PROPERTY_H_

#include <string>

class Property {
public:
	Property(std::string name): name_(name) {};
	virtual ~Property() = default;

public:
	/*
	 * This function reads a value of property type into object local storage.
	 *
	 * Return:
	 * 	0 on success.
	 * 	error code on error.
	 */
	virtual int SetValue(std::string value) = 0;

	/*
	 * This function reads a value of property type into object local storage.
	 *
	 * Return:
	 * 	value as string.
	 * 	empty string if no value assigned.
	 */
	virtual std::string GetValue() = 0;

	/*
	 * This function return type name as string.
	 */
	virtual std::string GetType() = 0;

	/*
	 * Return property name as string.
	 */
	virtual std::string GetName() { return name_; };
	virtual std::string GetAsd() { return "asd"; };

protected:
	std::string name_;
};

#endif /* PROPERTY_H_ */
