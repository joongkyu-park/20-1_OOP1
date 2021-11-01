#pragma once

#ifndef Create_H
#define Create_H

class Create
{
public:
	Create(int, const char *);
	~Create();

private:
	int objectID;
	const char* message;
};

#endif