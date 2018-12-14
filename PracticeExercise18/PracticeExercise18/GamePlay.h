#pragma once
#include <string>
using namespace std;
class GamePlay
{
public:
	GamePlay(string pname);
	~GamePlay();
	void Update();
private:
	string name;
};

