/*
 * SocketState.h
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#ifndef SOCKETSTATE_H_
#define SOCKETSTATE_H_

#include <iostream>
#include "State.h"

namespace venus {

template <class entity_type>
class SocketState: public State<entity_type> {
public:
	SocketState(){};
	virtual ~SocketState(){};
	virtual void entry(entity_type* entity){
		std::cout << entity->Name() << " : " << "entry "<< entity->GetNameOfCurrentState() << "\n";

	};
	virtual void execute(entity_type* entity,double time_elapsed){
		std::cout << entity->Name() << " : " << "execute "<< entity->GetNameOfCurrentState() << "\n";
	};
	virtual void exit(entity_type* entity){
		std::cout << entity->Name() << " : " << "exit "<< entity->GetNameOfCurrentState() << "\n";
	};
};

} /* namespace venus */
#endif /* SOCKETSTATE_H_ */
