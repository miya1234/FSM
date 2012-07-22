/*
 * VenusServer.cpp
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#include "VenusServer.h"
#include "Application.h"



int main() {
	venus::Application hello("Hello ");
	venus::Application world("World! ");

	boost::thread thr_hello(boost::bind(&venus::Application::run, &hello));
	boost::thread thr_world(boost::bind(&venus::Application::run, &world));

	thr_hello.join();
	thr_world.join();
	return 0;
}

