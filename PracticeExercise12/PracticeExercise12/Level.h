#pragma once
#include <string>
class Level
{
public:
	Level();
	Level(std::string name, int lvlnum, std::string enemies);
	~Level();
	int lvlnumber;
	std::string lvlname;
	std::string enemytype;
};

