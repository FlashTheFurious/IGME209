// SampleGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int xPos = 0;
	int yPos = 0;

	cout << "  Welcome to 'Move to xPos = 10' ! \n";
	cout << "  Use WASD to Move ! \n";

	char input;

	while (xPos != 10) {
		cin >> input;

		switch (input) {
		case 'w':
		case 'W':
			yPos++;
			break;

		case 'a':
		case 'A':
			xPos--;
			break;

		case 's':
		case 'S':
			yPos--;
			break;

		case 'd':
		case 'D':
			xPos++;
			break;
		}
		cout << "Player is at (" << xPos << ", " << yPos << ")";
	}

	cout << "  You Win !!!! \n";


}
