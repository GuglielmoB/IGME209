// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "hangman.h"
#include <iostream>

int main()
{
	char rightword[] = "ontological";
	char wguesses[255] = " ";
	char rguesses[] = "___________"; 
	char guess;
	std::cout << "Welcome to Hangman! \n" << "Incorrect guesses will cause more of the man to appear on the gallows, and correct will not. \n";
	int game = 1;
	int amtwrng = 0;
	showGallows(7);
	showSolved(rguesses, wguesses);
	while (game) {
		std::cout << "Your word has 11 letters in it. \n";
		std::cout << "Enter your next guess: ";
		std::cin >> guess;
		char guesstoStr[] = { guess, '\0' };
		if (strchr(rightword, guess) == NULL) {
			if (amtwrng == 0) {
				strcpy_s(wguesses, guesstoStr);
			}
			else
			{
				strcat_s(wguesses, guesstoStr);
			}
			amtwrng += 1;
		}
		else {
			for (int i = 0; i < strlen(rightword); i++)
			{
				if (rightword[i] == guess) {
					rguesses[i] = guess;
				}
			}
		}
		showGallows(7 - amtwrng);
		showSolved(rguesses, wguesses);
		if (amtwrng == 7) {
			break;
		}

		if (strcmp(rightword, rguesses) == 0) {
			break;
		}
	}
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
