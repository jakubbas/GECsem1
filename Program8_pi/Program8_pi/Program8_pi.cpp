// Program8_pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const float pi = 3.14159;
	float area;
	float radius = 25.0f;

	area = (pi * radius * radius);

	std::cout << "The area of a circle with a radius of " << radius << " is " << area << endl;
}

