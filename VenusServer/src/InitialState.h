/*
 * InitialState.h
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#ifndef INITIALSTATE_H_
#define INITIALSTATE_H_

#include "Socket.h"

namespace venus {

template <class entity_type>
class InitialState: public SocketState<entity_type> {
public:
	InitialState<entity_type>(){};
	virtual ~InitialState(){};
};

} /* namespace venus */
#endif /* INITIALSTATE_H_ */
