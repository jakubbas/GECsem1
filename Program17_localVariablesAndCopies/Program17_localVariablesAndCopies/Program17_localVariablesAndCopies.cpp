// Program17_localVariablesAndCopies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void addTwo(int num)
{
	num += 2;

	cout << "Function : num = " << num << endl;
}

int main()
{
	int myNum = 6;
	cout << "Main [before]: myNum = " << myNum << endl;
	addTwo(myNum);

	cout << "Main [after]: myNum = " << myNum << endl;

}

