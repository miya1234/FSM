/*
 * Particle.h
 *
 *  Created on: 2012/07/23
 *      Author: miyazaki
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Entity.h"

namespace venus {

class Particle: public venus::Entity {
public:
	Particle();
	virtual ~Particle();
};

} /* namespace venus */
#endif /* PARTICLE_H_ */
