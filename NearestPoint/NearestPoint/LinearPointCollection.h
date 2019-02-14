#pragma once

#include "PointCollection.h"

class LinearPointCollection : public PointCollection
{
public:
	LinearPointCollection();
	~LinearPointCollection();

	virtual void InitializeCollection();
	virtual Vector3* GetClosestPoint(Vector3* pPoint);
};

