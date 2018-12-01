// PraticeExercise11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Club.h"
#include "Hammer.h"
#include "Sword.h"
#include "Shield.h"
#include "Item.h"
#include <vector>

using namespace std;
int main()
{
	Club* club = new Club();
	Sword* sword = new Sword();
	Shield* shield = new Shield();
	Hammer* hammer = new Hammer();
	vector<Item*> inventory;
	inventory.push_back(sword);
	inventory.push_back(club);
	inventory.push_back(shield);
	inventory.push_back(hammer);
	for (int i = 0; i < 4; i++)
	{
		inventory.at(i)->print();
	}
	delete sword;
	delete shield;
	delete hammer;
	delete club;
    return 0;
}

