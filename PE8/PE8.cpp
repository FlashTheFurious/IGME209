// PE8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void changeVariable(int variable);
void changePointer(int* pointer);
void getLengthArray(int intArray[]);
int* createStackArray();
int* createHeapArray(int arraySize);

int main()
{
	int testNum = 4;
	cout << "Variable's value is : " << testNum << endl;

	changeVariable(testNum);

	cout << "Variable's value is : " << testNum << endl;

	int* testPtr = &testNum;
	changePointer(testPtr);

	cout << "After everything, variable's value is : " << testNum << endl;

	int arrayOfInts[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, -1 };
	int* intArrayPtr = arrayOfInts;
	//cout << *intArrayPtr + 1;

	int* testStack = createStackArray();
	int* testHeap = createHeapArray(5);

	cout << *testStack << ", " << *testStack + 1 << ", " << *testStack + 2 << ", " << *testStack + 3 << ", " << *testStack + 4 << ", " << *testStack + 5 << endl;
	cout << *testHeap << ", " << *testHeap + 1 << ", " << *testHeap + 2 << ", " << *testHeap + 3 << ", " << *testHeap + 4 << ", " << *testHeap + 5 << endl;

	delete[] testHeap;

	// I don't know if I accidentally did something wrong or in this case, right
	// but both the arrays seem the exact same to me even with their output

}

void changeVariable(int variable) {
	variable += 2;
	cout << "Inside changeVariable() - variable's value is now: " << variable << endl;
}

void changePointer(int* pointer) {
	*pointer += 5;
	cout << "Inside changePointer() - variable's value is now: " << *pointer << endl;

}


// I believe changeVariable makes a copy of the variable data within itself and 
// modifies the copy and not the original variable's data
//
// changePointer is the literal opposite. I does not create a copy but just points towards the original variable's address/value and
// modifies the value at the original location. 

void getLengthArray(int intArray[]) {

	for (int i = 0; i < sizeof intArray; i++) {
		// Do the null terminator thingy
	}

}


int* createStackArray() {
	int stackArray[5] = { 0,1,2,3,4 };
	return stackArray;
}

int* createHeapArray(int arraySize) {
	int* heapArray = new int[arraySize];

	for (int i = 0; i < arraySize; i++) {
		heapArray[i] = i;
	}
	return heapArray;
}
