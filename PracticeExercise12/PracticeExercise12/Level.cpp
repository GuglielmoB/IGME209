#include "stdafx.h"
#include "Level.h"
#include <iostream>

using namespace std;
Level::Level()
{
	lvlname = "The First Level";
	lvlnumber = 1;
	enemytype = "Easy Enemies";
	cout << "Level has been constructed successfully." << endl << "Name: " << lvlname << endl << "Level Number: " << lvlnumber << endl << "Enemy Type: " << enemytype << endl;
}

Level::~Level()
{
	cout << "Level has been destructed successfully." << endl;
}
