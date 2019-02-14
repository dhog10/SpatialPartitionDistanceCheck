#pragma once

#include "Vector3.h"

class Bounds
{
public:
	Bounds(Vector3*, Vector3*);
	~Bounds();

	Vector3* pMaxs;
	Vector3* pMins;
};

