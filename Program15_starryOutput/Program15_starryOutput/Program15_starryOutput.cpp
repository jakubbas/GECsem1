// Program15_starryOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>



using namespace std;

int main()
{
	int sleepTime = 4000;
	int n;
	char gameActive = 'Y';
	string star = "* ";
	string totalStars;
	while (gameActive == 'Y' || gameActive == 'y')
	{
		cout << "Choose a number between 1-10: ";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			cout << totalStars << endl;
			totalStars = totalStars + star;

		}
		cout << "Do you want to have another go? Choose 'Y' or 'N': ";
		cin >> gameActive;

		if (gameActive == 'N' || gameActive == 'n')
		{
			cout << "Goodbye.";
			this_thread::sleep_for(chrono::milliseconds(sleepTime));
		}

		else if (gameActive == 'Y' || gameActive == 'y')
			totalStars = "";
	}


}

