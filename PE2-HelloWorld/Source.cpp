#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	printf("Hello World!!!\n\n");
	int decemberSec = 31 * 24 * 60 * 60;
	//int dummyInt = 10;
	//So apparently the ++ shortcut doesn't work in C++
	//..... the irony ...
	//int additionInt = dummyInt++; 
	int divInt = 10 / 6;
	int divInt2 = 20 / 6;
	float circleArea = 3.14159 * pow(6.2, 2);

	printf("Seconds in December: %i\n\n", decemberSec);
	printf("Area of circle with radius 6.2 : %f\n\n", circleArea);
	//printf("10+1 = %i\n\n", additionInt);
	printf("Dividing 10 by 6: %i\n\n", divInt);// I believe this simply displays the quotient.
	printf("Dividing 20 by 6: %i\n\n", divInt2);// The remainder can be accessed by using % instead of / 

	return 0;
}