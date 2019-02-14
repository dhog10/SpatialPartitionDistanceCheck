#include "stdafx.h"
#include "Bounds.h"


Bounds::Bounds(Vector3* pMins, Vector3* pMaxs)
{
	this->pMaxs = pMaxs;
	this->pMins = pMins;
}


Bounds::~Bounds()
{
	delete pMaxs;
	delete pMins;
}
