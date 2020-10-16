// Program16_earlyExit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	int playerLife = 100;
	int damage;
	while (playerLife > 0 && i <= 10)
	{
		cout << "The current Life is : " << playerLife << endl;
		std::cout << "Question " << i << ": How much damage shall I deal?\n";
		cin >> damage;
		playerLife = playerLife - damage;
		i++;

	}
	if (playerLife <= 0)
		cout << "Early end. Player Died !" << endl;

	else if (i == 11)
		cout << "All questions asked. Player survived!" << endl;

}

