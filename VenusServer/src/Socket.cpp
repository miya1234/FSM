/*
 * Socket.cpp
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#include "Socket.h"

namespace venus {

Socket::Socket() {
	m_Name="Socket";
	m_pStateMachine = new StateMachine<Socket>(this);
	InitialState<Socket>* aState= new InitialState<Socket>;

	m_pStateMachine->changeState(aState);

}

Socket::~Socket() {
	delete m_pStateMachine;
	m_pStateMachine=NULL;
}

} /* namespace venus */
