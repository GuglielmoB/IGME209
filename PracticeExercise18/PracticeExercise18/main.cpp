// PracticeExercise18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NumberPrinter.h"
#include "GamePlay.h"
#include <thread>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	for (int i = 0; i < 50; i++) 
	{
		NumberPrinter numprnt = NumberPrinter(i);
		//numprnt.Print();
		thread printthread(&NumberPrinter::Print, numprnt);
		printthread.join();
		// Program crashes without the join.
	}

	GamePlay gp1 = GamePlay("Physics");
	GamePlay gp2 = GamePlay("Combat");
	GamePlay gp3 = GamePlay("Reticulating Splines");
	GamePlay gp4 = GamePlay("Simulation");
	GamePlay gp5 = GamePlay("Health and Stamina");
	
	// The program would crash when I made this a vector of pointers to threads.
	vector<thread> threadvec;
	threadvec.push_back(thread(&GamePlay::Update, gp1));
	threadvec.at(0).join();
	threadvec.push_back(thread(&GamePlay::Update, gp2));
	threadvec.at(1).join();
	threadvec.push_back(thread(&GamePlay::Update, gp3));
	threadvec.at(2).join();
	threadvec.push_back(thread(&GamePlay::Update, gp4));
	threadvec.at(3).join();
	threadvec.push_back(thread(&GamePlay::Update, gp5));
	threadvec.at(4).join();
	cout << "Update Complete! Time to Draw!" << endl;
	
    return 0;
}

