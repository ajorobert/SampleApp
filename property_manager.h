/*
 * property_manager.h
 *
 *  Created on: 25/07/2019
 *      Author: Ajo Robert
 */

#ifndef PROPERTY_MANAGER_H_
#define PROPERTY_MANAGER_H_

class PropertyManager {
public:
	virtual ~PropertyManager() = default;
public:
	virtual int Load();
	virtual int Read();
	virtual int Print();
};

#endif /* PROPERTY_MANAGER_H_ */
