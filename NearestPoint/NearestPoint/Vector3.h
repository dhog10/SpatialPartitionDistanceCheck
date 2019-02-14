#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(float, float, float);
	~Vector3();

	float x;
	float y;
	float z;

	float Magnitude();
	float Dot(Vector3);

	Vector3 operator-(const Vector3&) const;
};

