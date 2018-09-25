#include "pch.h"
#include <iostream>

void showGallows(int guessLimit) 
{
	
	if (guessLimit == 7) {
		printf(" ________\n"
			    "|		\n"
			    "|     \n"
				"|     \n"
				"|      \n"
				"|\n"
				"|\n");
	}

	if (guessLimit == 6) {
		printf(" ________\n"
				"|   |\n"
				"|     \n"
				"|     \n"
				"|      \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 5) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|     \n"
				"|      \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 4) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|   |\n"
				"|      \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 3) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|  /| \n"
				"|      \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 2) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|  /|\\ \n"
				"|      \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 1) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|  /|\\ \n"
				"|  /  \n"
				"|\n"
				"|\n");
	}
	if (guessLimit == 0) {
		printf(" ________\n"
				"|   |\n"
				"|   O \n"
				"|  /|\\ \n"
				"|  / \\ \n"
				"|\n"
				"|\n");
	}
}

void showSolved(char word[], char guesses[]) 
{
	printf("Wrong guesses: %s \n", guesses);
	printf("Your word so far: %s \n", word);
	
}

