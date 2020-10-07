// Program4_userDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	typedef int cost;
	enum CarMake
	{
		FORD,
		FIAT,
		TESLA,
		VW,
		BMW,
		ASTONMARTIN,
		HONDA,
		NISSAN,
		TOYOTA,
		AUDI,
		JAGUAR,
		DODGE
	};

	cost carCost1 = 13000;

	CarMake  car1 = HONDA;

	std::cout << "The cost of my car is: " << carCost1 << endl;
	std::cout << "My car id is: " << car1 + 1<< endl;

}

