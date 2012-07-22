/*
 * EntityManager.cpp
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#include "EntityManager.h"
#include "Entity.h"

namespace venus {

EntityManager::EntityManager() {
	// TODO Auto-generated constructor stub

}

EntityManager::~EntityManager() {
	// TODO Auto-generated destructor stub
}

//--------------------------- Instance ----------------------------------------
//
//   this class is a singleton
//-----------------------------------------------------------------------------
EntityManager* EntityManager::Instance()
{
  static EntityManager instance;

  return &instance;
}

//------------------------- GetEntityFromID -----------------------------------
//-----------------------------------------------------------------------------
Entity* EntityManager::GetEntityFromID(int id)const
{
  //find the entity
  EntityMap::const_iterator ent = m_EntityMap.find(id);

  //assert that the entity is a member of the map
  assert ( (ent !=  m_EntityMap.end()) && "<EntityManager::GetEntityFromID>: invalid ID");

  return ent->second;
}

//--------------------------- RemoveEntity ------------------------------------
//-----------------------------------------------------------------------------
void EntityManager::RemoveEntity(Entity* pEntity)
{
	m_EntityMap.erase(m_EntityMap.find(pEntity->ID()));
}

//---------------------------- RegisterEntity ---------------------------------
//-----------------------------------------------------------------------------
void EntityManager::RegisterEntity(Entity* NewEntity)
{
	m_EntityMap.insert(std::make_pair(NewEntity->ID(), NewEntity));
}

void EntityManager::Update(double time_elapsed)
{

	std::map<int, Entity*>::iterator it = m_EntityMap.begin();
	while( it != m_EntityMap.end() )
	{
		(*it).second->update(time_elapsed);
		++it;
	}


}

} /* namespace venus */
