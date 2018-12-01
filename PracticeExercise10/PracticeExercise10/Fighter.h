#pragma once
#include "Player.h"
class Fighter :
	public Player
{
public:
	Fighter();
	Fighter(const char* pname, const char* weaponskill, int stat1, int stat2, int stat3);
	void printFighter();
	const char* wpnskill;
	~Fighter();
};

