/*
 * VenusServer.cpp
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#include "VenusServer.h"
#include "Application.h"
#include "EntityManager.h"
#include "Socket.h"



int main() {
	venus::EntityManager* entityMgr= venus::EntityManager::Instance();
	venus::Socket* aSocket= new venus::Socket();
	entityMgr->RegisterEntity(aSocket);

	venus::Application* pApp=venus::Application::Instance();

	boost::thread thr_app(boost::bind(&venus::Application::run, pApp));

	thr_app.join();

	entityMgr->RemoveEntity(aSocket);
	delete aSocket;
	aSocket=NULL;

	entityMgr->Reset();

	return 0;
}

