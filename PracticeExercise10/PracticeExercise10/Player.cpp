#include "stdafx.h"
#include "Player.h"
#include <iostream>

using namespace std;
Player::Player()
{
	wis = 10;
	str = 10;
	dex = 10;
	name = "Unknown";
}

Player::Player(const char* pname, int stat1, int stat2, int stat3)
{
	wis = stat1;
	str = stat2;
	dex = stat3;
	name = pname;
}

void Player::printPlayer()
{
	cout << "Player: " << name << endl;
	cout << "Strength: " << str << endl;
	cout << "Wisdom: " << wis << endl;
	cout << "Dexterity " << dex << endl;
}


Player::~Player()
{
}
