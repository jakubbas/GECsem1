// Program18_smallestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a;
int b;
int x = 0;

int smallestNumber(int a, int b)
{
	if (a < b)
		return a;
	else if (a > b)
		return b;
	else
	{
		return 0;
	}
}

int main()
{

	while (x < 3)
	{
		cout << "Choose your first number: ";
		cin >> a;
		cout << "Choose your second number: ";
		cin >> b;

		int result = smallestNumber(a, b);

		if ((a || b != 0) && result == 0)
			cout << "Your numbers are equal" << endl;

		else
			cout << "The smaller number is: " << result << endl;

		x++;


	}

}

