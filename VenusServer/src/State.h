/*
 * State.h
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#ifndef STATE_H_
#define STATE_H_

namespace venus {

template<class entity_type>
class State {
public:
	virtual ~State(){};

	virtual void entry(entity_type*)=0;
	virtual void execute(entity_type*,double)=0;
	virtual void exit(entity_type*)=0;

};

} /* namespace venus */
#endif /* STATE_H_ */
