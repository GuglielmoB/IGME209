// PracticeExercise10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Fighter.h"

int main()
{
	Fighter P1 = Fighter();
	Fighter P2 = Fighter("John", "Swords", 15, 4, 7);
	Fighter* P3 = new Fighter();
	Fighter* P4 = new Fighter("Jose", "Maces", 4, 5, 6);
	P1.printFighter();
	P2.printFighter();
	P3->printFighter();
	P4->printFighter();
	delete P4;
	delete P3;
	return 0;
}

