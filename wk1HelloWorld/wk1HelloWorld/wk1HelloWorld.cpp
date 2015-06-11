#include "stdafx.h"
#include <iostream>
#include <string>

class Vector3
{
private:
	float x, y, z;

};

struct Vector2
{
	float x, y;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int intValue = 5;
	float floatValue = 1.1f;
	double doubleValue = 1.5;
	std::string stringValue = "test";

	auto autoMagicInt = 5;
	auto autoMagicString = "test string";

	std::cout << "Hello World!" << std::endl;
	return 0;
}

