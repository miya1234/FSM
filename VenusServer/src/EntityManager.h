/*
 * EntityManager.h
 *
 *  Created on: 2012/07/22
 *      Author: miyazaki
 */

#ifndef ENTITYMANAGER_H_
#define ENTITYMANAGER_H_

#include <map>
#include <cassert>

namespace venus {

class Entity;

class EntityManager {
private:

	typedef std::map<int, Entity*> EntityMap;
private:
	EntityMap m_EntityMap;
	EntityManager();
	EntityManager(const EntityManager&);
	EntityManager& operator=(const EntityManager&);

public:
	virtual ~EntityManager();
	static EntityManager* Instance();
	void RegisterEntity(Entity* NewEntity);
	Entity* GetEntityFromID(int id)const;
	void RemoveEntity(Entity* pEntity);
	void Reset(){m_EntityMap.clear();}

	void Update(double time_elapsed);
};

} /* namespace venus */
#endif /* ENTITYMANAGER_H_ */
