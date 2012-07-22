/*
 * Socket.h
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#ifndef SOCKET_H_
#define SOCKET_H_

#include <boost/asio.hpp>

#include "Entity.h"
#include "StateMachine.h"
#include "SocketState.h"
#include "InitialState.h"

namespace venus {

class Socket: public venus::Entity {
private:
	StateMachine<Socket>* m_pStateMachine;
public:
	Socket();
	virtual ~Socket();
public:
	virtual void update(double time_elapsed){
		if(m_pStateMachine){
			m_pStateMachine->update(time_elapsed);
		}
	};
	std::string GetNameOfCurrentState()const
	{
		return m_pStateMachine->GetNameOfCurrentState();
	}
};

} /* namespace venus */
#endif /* SOCKET_H_ */
