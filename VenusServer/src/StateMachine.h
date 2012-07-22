/*
 * StateMachine.h
 *
 *  Created on: 2012/07/21
 *      Author: miyazaki
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_

#include <string>
#include <cassert>

#include "State.h"
namespace venus {

template<class entity_type>
class StateMachine {
private:
	entity_type* m_pOwner;
	State<entity_type>* m_pCurrentState;
	State<entity_type>* m_pPreviousState;
	State<entity_type>* m_pNextState;
public:
	StateMachine(entity_type* owner):m_pOwner(owner),
	m_pCurrentState(0),
	m_pPreviousState(0),
	m_pNextState(0){};

	virtual ~StateMachine(){};
	void SetCurrentState(State<entity_type>* s){m_pCurrentState = s;}
	void SetNextState(State<entity_type>* s) {m_pNextState = s;}
	void SetPreviousState(State<entity_type>* s){m_pPreviousState = s;}

	State<entity_type>* currentState(){ return m_pCurrentState ;}
	State<entity_type>* nextState() { return m_pNextState;}
	State<entity_type>* previousState(){ return m_pPreviousState;}

	void update(double time_elapsed)const
	{

		if (m_pCurrentState) m_pCurrentState->execute(m_pOwner,time_elapsed);

	}

	void changeState(State<entity_type>* pNewState)
	{
	  assert(pNewState && "<StateMachine::ChangeState>:trying to assign null state to current");

	  //keep a record of the previous state
	  m_pPreviousState = m_pCurrentState;
	  m_pNextState=pNewState;
	  //call the exit method of the existing state
	  if(m_pCurrentState!=NULL)m_pCurrentState->Exit(m_pOwner);

	  //change state to the new state
	  m_pCurrentState = pNewState;
	  m_pNextState=NULL;
	  //call the entry method of the new state
	  m_pCurrentState->Enter(m_pOwner);
	}

	void  RevertToPreviousState()
	{
	    changeState(m_pPreviousState);
	}

	std::string GetNameOfCurrentState()const
	{
	    std::string s(typeid(*m_pCurrentState).name());
	    if (s.size() > 5)
	    {
	      s.erase(0, 6);
	    }
	    return s;
	  }
};

} /* namespace venus */
#endif /* STATEMACHINE_H_ */
