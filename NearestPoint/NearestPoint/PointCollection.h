#pragma once

#include <vector>
#include "Vector3.h"
#include "Bounds.h"

class PointCollection
{
protected:
	std::vector<Vector3*>* pPoints;
	Bounds* pBounds;
public:
	PointCollection();
	~PointCollection();

	void SetBounds(Vector3*, Vector3*);
	void CreatePoints(int);
	virtual void InitializeCollection() = 0;
	virtual Vector3* GetClosestPoint(Vector3*) = 0;

	Bounds* GetBounds();
	std::vector<Vector3*>* GetPoints();
	
};

