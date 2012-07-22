/*
 * Application.h
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#include <iostream>
#include <boost/thread.hpp>
#include <boost/bind.hpp>

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "Entity.h"
#include "StateMachine.h"

namespace venus {

class Application: public venus::Entity {
public:
	Application(const char* );
	virtual ~Application();

	void run();

 private:
	const int kCount_;
	const int kInterval_;
	const char *kMessage_;

 public:
	StateMachine<Application>* m_pStateMachine;
};

} /* namespace venus */
#endif /* APPLICATION_H_ */
