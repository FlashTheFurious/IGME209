// HW1-Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cstring>
#include "hangman.h"
#include <cctype>;

int main()
{
	string correctWord = "consumer";
	string hiddenWord;
	string wrongGuessedLetters = "";
	string userGuess;
	int wrongGuessRemaining = 7;
	bool gameIsOver = false;

	//Make the hidden word based on the correctWord
	for (int i = 0; i < correctWord.length(); i++) {
		hiddenWord += "_"; //Blank Character
	}
	cout << "Let's play Hangman! \n";
	cout << "You get 7 lives to correctly guess my word \n";

	//Main Game Loop

	while (gameIsOver == false) {

		showGallows(wrongGuessRemaining);
		cout << "Guess a letter: ";
		cin >> userGuess;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		bool madeRightGuess = false;
		//This loop checks whether the guess was right or wrong
		for (int z = 0; z < correctWord.size(); z++) {

			//Correct Guess
			if (correctWord[z] == userGuess.front()) {
				hiddenWord[z] = userGuess.front();
				madeRightGuess = true;

			}
			//Incorrect Guess
			else if (correctWord[z] != userGuess.front() && z == correctWord.size() - 1 && madeRightGuess == false) {
				wrongGuessedLetters += userGuess.front();
				wrongGuessRemaining--;
			}
		}

		cout << "Wrong Letters Guessed : " + wrongGuessedLetters + "\n";
		cout << "Word has the letters  : " + hiddenWord + "\n";

		// Check if the game is over
		if (hiddenWord == correctWord) {
			gameIsOver = true;
			cout << "Congratulations !!! You won!!! \n";
			cout << "You Guessed Right ! The word was " + correctWord + "\n";
		}
		// Check if the player lost
		if (wrongGuessRemaining == 0) {
			showGallows(wrongGuessRemaining);
			cout << "Sorry You Lost...\n";
			cout << "The word was " + correctWord + "\n";
			cout << "You Guessed correctly till " + hiddenWord + "\n";
			gameIsOver = true;

		}
	}

}