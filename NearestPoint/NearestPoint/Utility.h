#pragma once

#include <iostream>

static class Utility
{
public:
	Utility();
	~Utility();

	// https://stackoverflow.com/questions/5289613/generate-random-float-between-two-floats/5289624
	static float RandomFloat(float a, float b) {
		float random = ((float)rand()) / (float)RAND_MAX;
		float diff = b - a;
		float r = random * diff;
		return a + r;
	}
};


