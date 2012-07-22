/*
 * Application.cpp
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#include "Application.h"

namespace venus {

Application::Application(const char* msg)
    :kMessage_(msg), kCount_(100000000), kInterval_(1000000)
{
	m_pStateMachine= new StateMachine<Application>(this);
};

Application::~Application() {
	delete m_pStateMachine;
	m_pStateMachine=NULL;
}

// メンバ関数をマルチスレッドで実行
void Application::run() {
	for(int i = 0; i != kCount_; ++i)
		if (!(i % kInterval_)) std::cout << kMessage_;
	m_pStateMachine->update(1);
}

} /* namespace venus */
