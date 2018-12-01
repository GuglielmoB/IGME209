// PracticeExercise9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	char name1[5] = "John";
	char name2[5] = "Jose";
	Player P1 = Player();
	Player P2 = Player(name1, 15, 4, 7);
	Player* P3 = new Player();
	Player* P4 = new Player(name2, 4, 5, 6);
	P1.printPlayer();
	P2.printPlayer();
	P3->printPlayer();
	P4->printPlayer();
	delete P4;
	delete P3;
    return 0;
}

