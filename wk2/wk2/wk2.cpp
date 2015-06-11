// wk2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

class Vector3
{
public:
	//Vector3()
	//{
	//	std::cout << "Vector3 constructed" << std::endl;
	//}							|
	// Made obsolete by below  \|/

	Vector3(float _x = 0, float _y = 0, float _z = 0) : 
		x(_x),	// value defining
		y(_y),	// x = _x; y = _y; etc.
		z(_z)	// 'Faster' than ^.		
	{
		x = _x;
		y = _y;
		z = _z;
		std::cout << "Vector3 constructed" << std::endl;
	}

	~Vector3()
	{
		std::cout << "Vector3 deconstructed" << std::endl;
	}

	float x, y, z;
};


int _tmain(int argc, _TCHAR* argv[])
{

	{	// std::vector<>	The preferred array structure
		std::vector<Vector3> myVectorArray;		//friendlier syntax and less prone to bugs

	}

	{
		Vector3 myVectorArray[3] = { Vector3(), Vector3(), Vector3() };

		myVectorArray[1] = Vector3(1, 2, 3);

		Vector3* myVectorArrayPtr = new Vector3[5];	//not recommended, std::vector is preferred
													//
		delete[] myVectorArrayPtr;					// the [] are required or only part of the array memory will be removed
	}

	{
		Vector3 myVectorValue;
		Vector3* myVectorPtr = new Vector3(2, 3, 5);

		// Value semantics
		std::cout << myVectorValue.x << ", " << myVectorValue.y << ", " << myVectorValue.z << std::endl;

		// Pointer semantics
		std::cout << myVectorPtr->x << ", " << myVectorPtr->y << ", " << myVectorPtr->z << std::endl;

		// Putting an * infront of a pointer 'dereferences' it (returns a value version)
		// You are creating a copy
		Vector3 myVector3 = *myVectorPtr;
		// In order to convert a pointer, without copying it, a reference is used.
		// Converts a pointer to a reference, allowing you to use value semantics
		Vector3& myVectorRef = *myVectorPtr;

		std::cout << "About to go out of scope" << std::endl;

		delete myVectorPtr;
	}
	
	return 0;
}

