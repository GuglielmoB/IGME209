#pragma once
class Player
{
public:
	Player();
	Player(const char* name, int stat1, int stat2, int stat3);
	~Player();
	void printPlayer();
private:
	const char* name;
	int wis;
	int dex;
	int str;
};

