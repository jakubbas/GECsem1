// Program11_weatherMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int userInput;
	cout << "Please choose an option: 1. Sunny  2. Cloudy  3. Raining  4. Exit: ";
	cin >> userInput;

	if (userInput == 1)
		cout << "You have chosen Sunny.";
	else if (userInput == 2)
		cout << "You have chosen Cloudy.";
	else if (userInput == 3)
		cout << "You have chosen Rainy.";
	else if (userInput == 4)
		cout << "You have chosen to exit. Goodbye.";
	else
		cout << "You didn't choose an option between 1-4.";

}

