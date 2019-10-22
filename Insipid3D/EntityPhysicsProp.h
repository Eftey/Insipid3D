#pragma once
#include "entity.h"
#include "Mesh.h"
#include <glm/glm.hpp>

#include <btBulletDynamicsCommon.h>

struct EntityPhysicsProp : Entity
{
	EntityPhysicsProp(std::string modelName, glm::vec3 origin);
	EntityPhysicsProp();

	virtual void tick();
	virtual void render();
	virtual void init();
	virtual void destroy();
	virtual void remove();
	virtual void applyForce(glm::vec3 force);
	virtual void applyImpulse(glm::vec3 impulse);

	glm::vec3 getPosition();

	glm::vec3 origin;

	std::string modelName;

	Mesh* model;
	btRigidBody* body;

	bool backfaceCull;

	bool active;
};