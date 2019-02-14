#include "stdafx.h"
#include "PointCollection.h"
#include "Utility.h"

PointCollection::PointCollection()
{
	pPoints = new std::vector<Vector3*>();
	pBounds = new Bounds(new Vector3(-10.f, -10.f, -10.f), new Vector3(10.f, 10.f, 10.f));
}


PointCollection::~PointCollection()
{
	pPoints->clear();

	delete pPoints;
	delete pBounds;
}

void PointCollection::SetBounds(Vector3* pMins, Vector3* pMaxs) {
	delete pBounds;

	pBounds = new Bounds(pMins, pMaxs);
}

void PointCollection::CreatePoints(int numPoints) {
	pPoints->clear();

	Vector3* pMins = pBounds->pMins;
	Vector3* pMaxs = pBounds->pMaxs;

	for (int i = 0; i < numPoints; i++) {
		pPoints->push_back(new Vector3(Utility::RandomFloat(pMins->x, pMaxs->x), Utility::RandomFloat(pMins->y, pMaxs->y), Utility::RandomFloat(pMins->z, pMaxs->z)));
	}
}

Bounds* PointCollection::GetBounds() {
	return pBounds;
}

std::vector<Vector3*>* PointCollection::GetPoints() {
	return pPoints;
}