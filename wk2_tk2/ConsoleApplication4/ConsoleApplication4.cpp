// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char play_again;

	cout << "Do you want to play again? y or n : " << endl;

	cin >> play_again;

	switch (play_again)
	{
	case 'y':
			cout << "You chose to play again." << endl;
			break;
	case 'n':
		cout << "Goodbye." << endl;
		break;

	default:
		cout << "That's neither y or n" << endl;
	}


	//int player_input;

	//cout << "enter 0 or 1 : " << endl;
	//cin >> player_input;

	//switch (player_input)
	//{
	//case 0:
	//	//if 0
	//	break;
//
	//case 1:
	//	//if 1
	//	break;
//
//	default:
	//	//if none
	//	break;
	//}





}
