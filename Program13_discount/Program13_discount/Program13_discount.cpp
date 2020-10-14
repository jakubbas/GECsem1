// Program13_discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int chosenGame;
	char status;
	cout << "Please tell me your status, using an 's' for student, 't', for teacher, or 'o' for further : ";
	cin >> status;

	cout << "Which game would you like, '1' or '2' : ";
	cin >> chosenGame;

	if ((status == 's' || status == 't') && (chosenGame == 1))
		cout << "You can get a 20% discount.";

	else if ((status == 's' || status == 't') && (chosenGame == 2))
		cout << "You can get a 10% discount.";

	else
		cout << "You are not entitled to a discount.";

}

