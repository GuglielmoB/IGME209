#include "stdafx.h"
#include "Player.h"
#include <iostream>

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
	std::cout << "Player " << name << " has " << str << " strength, " << wis << " wisdom, " << dex << " dexterity." << std::endl;
}


Player::~Player()
{
}
