// PE4-Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int iCounter = 0;

	char superC[100] = "supercalifragilistic";
	char expi[] = "expialidocious";

	cout << strlen(superC);
	cout << "\n\n";
	strcat_s(superC, sizeof superC, expi);
	cout << superC;

	for (int z = 0; z < strlen(superC); z++) {

		if (superC[z] == 'i') {
			iCounter++;
		}
	}
	cout << "\n \n";
	cout << iCounter;
}
