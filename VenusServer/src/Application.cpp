/*
 * Application.cpp
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#include "Application.h"
#include "EntityManager.h"
namespace venus {

Application::Application()
    :kMessage_("VenusSoftware"), kCount_(100000000), kInterval_(1000000)
{
	m_pStateMachine= new StateMachine<Application>(this);
};

Application::~Application() {
	delete m_pStateMachine;
	m_pStateMachine=NULL;
}

Application* Application::Instance()
{
  static Application instance;

  return &instance;
}

// メンバ関数をマルチスレッドで実行
void Application::run() {
	for(int i = 0; i != kCount_; ++i){
		if (!(i % kInterval_)) {
			update(1);
		}
	}
}

void Application::update(double time_elapsed){
	m_pStateMachine->update(time_elapsed);
	std::cout << kMessage_;
	EntityManager::Instance()->Update(time_elapsed);
}

} /* namespace venus */
