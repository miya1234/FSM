/*
 * Element.h
 *
 *  Created on: 2012/07/23
 *      Author: miyazaki
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include "Entity.h"

namespace venus {

class Element: public venus::Entity {
public:
	Element();
	virtual ~Element();
};

} /* namespace venus */
#endif /* ELEMENT_H_ */
