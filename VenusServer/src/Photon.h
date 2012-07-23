/*
 * Photon.h
 *
 *  Created on: 2012/07/23
 *      Author: miyazaki
 */

#ifndef PHOTON_H_
#define PHOTON_H_

#include "Particle.h"

namespace venus {

class Photon: public venus::Particle {
public:
	Photon();
	virtual ~Photon();
};

} /* namespace venus */
#endif /* PHOTON_H_ */
