#include "stdafx.h"
#include "LinearPointCollection.h"
#include <limits>

LinearPointCollection::LinearPointCollection()
	: PointCollection()
{
}


LinearPointCollection::~LinearPointCollection()
{
}

void LinearPointCollection::InitializeCollection() {

}

Vector3* LinearPointCollection::GetClosestPoint(Vector3* pPointTest) {
	float maxDistance = std::numeric_limits<float>::max();
	Vector3* pMinVector = new Vector3();

	std::vector<Vector3*> points = *pPoints;
	Vector3 PointTest = *pPointTest;

	for (int i = 0; i < pPoints->size(); i++) {
		Vector3 Point = *points[i];

		float distance = (Point - PointTest).Magnitude();

		if (distance < maxDistance) {
			maxDistance = distance;
			pMinVector->x = Point.x;
			pMinVector->y = Point.y;
			pMinVector->z = Point.z;
		}
	}

	return pMinVector;
}