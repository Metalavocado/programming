// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

class GameObject
{
public:
	std::string name;

	GameObject()
	{
		std::cout << "GameObject Constructed" << std::endl;
	}

	~GameObject()
	{
		std::cout << "GameObject Deconstructed" << std::endl;
	}
};

class Actor : public GameObject
{
public:

	Actor()
	{
		std::cout << "Actor Constructed" << std::endl;
	}

	virtual ~Actor()
	{
		std::cout << "Actor Deconstructed" << std::endl;
	}

	float x, y, z;
};

class StaticMeshActor : public Actor
{
public:

	StaticMeshActor()
	{
		std::cout << "StaticMeshActor Constructed" << std::endl;
	}

	virtual ~StaticMeshActor()
	{
		std::cout << "StaticMeshActor Deconstructed" << std::endl;
	}

	std::string meshName;
};

int _tmain(int argc, _TCHAR* argv[])
{

	{
		//StaticMeshActor meshActor;
		GameObject* gameObjectPtr = new StaticMeshActor();

		delete gameObjectPtr;
	}

	return 0;
}

