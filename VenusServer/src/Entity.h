/*
 * Entity.h
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#ifndef ENTITY_H_
#define ENTITY_H_
#include <string>

namespace venus {

class Entity {
protected:
    int m_ID;
    std::string m_Name;
    int NextValidID(){static int NextID = 0; return NextID++;}
    double m_energy;
public:
	Entity();
	virtual ~Entity();

	virtual void update(double){};
    int ID()const{return m_ID;}
    std::string Name()const{return m_Name;}
};

} /* namespace venus */
#endif /* ENTITY_H_ */
