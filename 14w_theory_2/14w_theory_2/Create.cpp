#include "Create.h"

#include<iostream>

using namespace std;

Create::Create(int objectNumber, const char* messagePtr)
{
	objectID = objectNumber;
	message = messagePtr;

	cout << "Object " << objectID << "  constrctor runs  "
		<< message << endl;
}

Create::~Create()
{
	cout << (objectID == 1 || objectID == 6 ? "\n" : "");

	cout << "Object " << objectID << "  destructor runs  "
		<< message << endl;
}