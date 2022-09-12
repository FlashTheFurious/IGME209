#include <cstring>
#include <iostream>
using namespace std;



void showGallows(int wrongGuessesRemaining) {
	if (wrongGuessesRemaining == 7) {
		cout << "___________________ \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
	}
	else if (wrongGuessesRemaining == 6) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
	}
	else if (wrongGuessesRemaining == 5) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (-_-)        \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
	}
	else if (wrongGuessesRemaining == 4) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (-_-)        \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";

	}
	else if (wrongGuessesRemaining == 3) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (-_-)        \n";
		cout << "|        |         \n";
		cout << "|        |\\          \n";
		cout << "|        | \\         \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";

	}
	else if (wrongGuessesRemaining == 2) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (-_-)        \n";
		cout << "|        |         \n";
		cout << "|       /|\\          \n";
		cout << "|      / | \\         \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";
		cout << "| \n";

	}
	else if (wrongGuessesRemaining == 1) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (-_-)        \n";
		cout << "|        |          \n";
		cout << "|       /|\\         \n";
		cout << "|      / | \\        \n";
		cout << "|         \\         \n";
		cout << "|          \\_       \n";
		cout << "| \n";
		cout << "| \n";
	}
	else if (wrongGuessesRemaining == 0) {
		cout << "___________________ \n";
		cout << "|        |          \n";
		cout << "|        |          \n";
		cout << "|       _|_         \n";
		cout << "|      (x_x)        \n";
		cout << "|        |          \n";
		cout << "|       /|\\         \n";
		cout << "|      / | \\        \n";
		cout << "|       / \\         \n";
		cout << "|     _/   \\_       \n";
		cout << "| \n";
		cout << "| \n";
	}
}
// I found it intuitive to not use this function and to do its work in main
/*
void showSolveDisplay(char word[], char guesses[]) {


	cout << "Wrong guesses: ";
	for (int i = 0; i < sizeof guesses; i++) {
		cout << guesses[i];
	}

	cout << " Word to solve: ";

}
*/