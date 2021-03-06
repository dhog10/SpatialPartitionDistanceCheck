// NearestPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <chrono>
#include "LinearPointCollection.h"

using namespace std;

int main()
{
	srand(time(NULL));

	cout << "Begin" << endl;
	cin.ignore();

	int numOfPoints = 100000;
	float boundsSize = 1000;

	cout << "Searching " << numOfPoints << " points" << endl;

	LinearPointCollection linearCollection;
	linearCollection.SetBounds(new Vector3(-boundsSize, -boundsSize, -boundsSize), new Vector3(boundsSize, boundsSize, boundsSize));
	linearCollection.CreatePoints(numOfPoints);
	linearCollection.InitializeCollection();

	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	Vector3* pClosestPoint = linearCollection.GetClosestPoint(new Vector3(0.f, 0.f, 0.f));
	std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
	std::chrono::duration<float> difference = end - now;
	const int milliseconds = difference.count() * 1000;

	cout << "Closest point found (" << pClosestPoint->x << ", " << pClosestPoint->y << ", " << pClosestPoint->z << ")" << endl;
	cout << "Linear closest point took " << milliseconds << "ms" << endl;
	cout << endl << "Press enter to exit...";
	
	cin.ignore();

    return 0;
}