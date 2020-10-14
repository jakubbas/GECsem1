// Program10_shareOfHaribo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int hariboStash = 40;
	int students = 14;
	int packetsShared = (hariboStash / students);
	int leftoverHaribo = (hariboStash % students);

	cout << "There will be : " << packetsShared << " Haribo packets between each student." << endl;
	cout << "You will have : " << leftoverHaribo << " Haribo packets left." << endl;
}

