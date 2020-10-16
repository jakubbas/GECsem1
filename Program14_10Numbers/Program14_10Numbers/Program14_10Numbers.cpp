// Program14_10Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int Number3;
	int NumberAmount = 2;

	cout << "Enter a number: ";
	int Number1;
	cin >> Number1;

	cout << "Enter another number: ";
	int Number2;
	cin >> Number2;

	int Sum = Number1 + Number2;
	float Mean = (float)Sum / (float)NumberAmount;

	cout << "The sum of the two numbers is: " << Sum << endl;
	cout << "The mean of the two numbers is: " << Mean << endl;
	
	do
	{
		cout << "Enter another number: ";
		cin >> Number3;
		NumberAmount++;

		Sum = Sum + Number3;
		cout << "The sum of the numbers is: " << Sum << endl;

		Mean = (float)Sum / (float)NumberAmount;

		cout << "The mean of the numbers is: " << Mean << endl;



	} while (Number3 != 0);

	
}