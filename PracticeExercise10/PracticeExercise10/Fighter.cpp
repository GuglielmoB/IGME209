#include "stdafx.h"
#include "Fighter.h"
#include <iostream>

using namespace std;
Fighter::Fighter()
{
	wpnskill = "Unarmed";
}

Fighter::Fighter(const char* pname, const char* weaponskill, int stat1, int stat2, int stat3) : Player(pname, stat1, stat2, stat3)
{
	wpnskill = weaponskill;
}

void Fighter::printFighter() 
{
	Player::printPlayer();
	cout << "Weapon Skill: " << wpnskill << endl;
	cout << endl;
}

Fighter::~Fighter()
{

}
