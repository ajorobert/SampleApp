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
	virtual ~Property() = default;

public:
	/*
	 * This function reads a value of property type into object local storage.
	 *
	 * Return:
	 * 	Success : 0
	 * 	Error   : Error code
	 */
	virtual int ReadValue() = 0;

	/*
	 * This function reads a value of property type into object local storage.
	 *
	 * Return:
	 * 	Success : 0
	 * 	Error   : Error code
	 */
	virtual int PrintValue() = 0;

protected:
	std::string name_;
};

#endif /* PROPERTY_H_ */
