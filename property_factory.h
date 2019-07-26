/*
 * property_factory.h
 *
 *  Created on: 25/07/2019
 *      Author: Ajo Robert
 */

#ifndef PROPERTY_FACTORY_H_
#define PROPERTY_FACTORY_H_

#include "property.h"

class PropertyFactory {
public:
	static Property* Make(std::string type, std::string name);
};



#endif /* PROPERTY_FACTORY_H_ */
