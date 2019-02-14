#include "stdafx.h"
#include "Vector3.h"
#include <cmath>

Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


Vector3::~Vector3()
{
}

float Vector3::Magnitude() {
	return (float)sqrt(x*x + y * y + z * z);
}

float Vector3::Dot(Vector3 other) {
	return (x * other.x) + (y * other.y) + (z * other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
	Vector3 result;
	result.x = this->x - other.x;
	result.y = this->y - other.y;
	result.z = this->z - other.z;

	return result;
}