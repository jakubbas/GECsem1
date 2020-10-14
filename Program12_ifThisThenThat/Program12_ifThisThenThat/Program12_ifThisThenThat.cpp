// Program12_ifThisThenThat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int rain = 1;
	int snow = 2;
	int userInput;
	int storedAnswer1;
	int storedAnswer2;

	cout << "Please tell me if it is raining with '1' or snowing with '2' : ";
	cin >> userInput;
	storedAnswer1 = userInput;
	cout << "What is the temperature, in Celsius : ";
	cin >> userInput;
	storedAnswer2 = userInput;

	if (storedAnswer1 == 1)
	{
		if (storedAnswer2 > 15)
			cout << "Wear a light raincoat.";
		else
			cout << "Wear a thick coat.";
	}

	else if (storedAnswer1 == 2)
	{
		if (storedAnswer2 > 5)
			cout << "Wear something warm.";
		else if (storedAnswer2 > 0)
			cout << "Wrap up well.";
		else
			cout << "Stay home.";
	}

	else
	{
		cout << "Have a nice day. It is neither raining nor snowing.";
	}
	
}

