#include "stdafx.h"
#include "Utility.h"

#include <iostream>

using namespace std;

Utility::Utility()
{
}


Utility::~Utility()
{
}

// https://stackoverflow.com/questions/5289613/generate-random-float-between-two-floats/5289624
float RandomPoint(float a, float b) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = b - a;
	float r = random * diff;
	return a + r;
}