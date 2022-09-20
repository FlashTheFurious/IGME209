// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int myInteger = 10;
	cout << myInteger << endl;
	cout << &myInteger << endl;

	int* intPointer;
	intPointer = &myInteger; //& is used to access the memory address of where my integer is

	cout << intPointer << endl;

	cout << *intPointer << endl;


	int intOne = 1;
	int intTwo = 2;
	passByReference(&intTwo);
	passByValue(intOne);

	cout << intOne << endl;	
	cout << intTwo << endl;

	int myArray[5]{ 1,2,3,4,5 };
	int* arr0 = &myArray[0];
	int* arr1 = &myArray[1];
	int* arr2 = &myArray[2];
	arr0 = &myArray[0];

	for (int i = 0; i < 7; i++) {
		cout << *arr0 << endl;
		cout << *(arr0 + i) << endl;
	}

	string testString = "Hello";
	testString.pop_back(); //Remove last char of string

	string* stringPtr = &testString;
	stringPtr->length();
}

void passByValue(int x) {
	x = 8;
}

// Pass by pointer
void passByReference(int* xPtr) {
	*xPtr = 6;
}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
