// Program20_simpleTextBattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

void attackChoice(int);
bool playState();


int main()
{
	char playerChoice;

	while (playing == true)
	{
		cout << "You have come across a troll. You can either - 1. Use a sword. 2. Use magic. 3. Use an axe. Each choice has a different effect, so choose wisely: ";
		cin >> playerChoice;

		void attackChoice(int playerChoice);

		bool playState();
	}

	return 0;
}


void attackChoice(int const playerChoice)
{
	int const swordDamage = 300;
	int const magicDamage = 650;
	int const axeDamage = 450;
	int const trollSword = 350;
	int const trollMagic = 50;
	int const trollAxe = 100;

	switch (playerChoice)
	{
	case 1:
		enemyHealth - swordDamage;
		playerHealth - trollSword;
		cout << "You have hit the troll with your sword." << endl;
		cout << "The troll has hit you with his sword." << endl;
		
		if (playerHealth <= 0)
			playerHealth = 0;

		if (enemyHealth <= 0)
			enemyHealth = 0;

		cout << "The player health is: " << playerHealth << endl;
		cout << "The enemy health is: " << enemyHealth << endl;

	case 2:
		enemyHealth - magicDamage;
		playerHealth - trollMagic;
		cout << "You have hit the troll with your magic." << endl;
		cout << "The troll has hit you with his magic." << endl;

		if (playerHealth <= 0)
			playerHealth = 0;

		if (enemyHealth <= 0)
			enemyHealth = 0;

		cout << "The player health is: " << playerHealth << endl;
		cout << "The enemy health is: " << enemyHealth << endl;
	case 3:
		enemyHealth - axeDamage;
		playerHealth - trollAxe;
		cout << "You have hit the troll with your axe." << endl;
		cout << "The troll has hit you with his axe." << endl;

		if (playerHealth <= 0)
			playerHealth = 0;

		if (enemyHealth <= 0)
			enemyHealth = 0;

		cout << "The player health is: " << playerHealth << endl;
		cout << "The enemy health is: " << enemyHealth << endl;

	}
}

bool playState(int playerHealth, int enemyHealth)
{
	char playAgain;

	if (enemyHealth <= 0)
	{
		cout << "You have killed the troll and won." << endl;
		cout << "Would you like to play again? 'Y' or 'N': ";
		cin >> playAgain;

		if (playAgain == 'Y' || playAgain == 'y')
		{
			enemyHealth = 2000;
			playerHealth = 1000;
			playing = true;
		}

		else
			playing = false;
	}

	if (playerHealth <= 0)
	{
		cout << "You have died to the troll and lost." << endl;
		cout << "Would you like to play again? 'Y' or 'N': ";
		cin >> playAgain;

		if (playAgain == 'Y' || playAgain == 'y')
		{
			enemyHealth = 2000;
			playerHealth = 1000;
			playing = true;
		}

		else
			playing = false;
	}

	return false;
}