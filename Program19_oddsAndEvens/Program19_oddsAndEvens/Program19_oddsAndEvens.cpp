// Program19_oddsAndEvens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int evenTotal;
int oddTotal;
int numOfEven;
int numOfOdd;
int outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool oddoreven(int num);

int main()
{
    int x = 0;
    int num;



    while (x < 10)
    {
        cout << "Enter an integer: ";
        cin >> num;

        bool oddoreven(int num);
        x++;
    }

    int outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
}

bool oddoreven(int num)
{
    if (num % 2 == 0)
    {
        evenTotal + num;
        numOfEven++;
        return true;
    }

    else
    {
        oddTotal + num;
        numOfOdd++;
        return false;
    }
}

int outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "The about of Even numbers is : " << numOfEven << endl;
    cout << "The about of Odd numbers is : " << numOfOdd << endl;
    cout << "The total sum of Even numbers is: " << evenTotal << endl;
    cout << "The total sum of Odd numbers is: " << oddTotal << endl;

    return 0;
}