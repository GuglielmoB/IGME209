#include "stdafx.h"
#include "GamePlay.h"
#include <string>
#include <iostream>

using namespace std;
GamePlay::GamePlay(string pname)
{
	name = pname;
}

void GamePlay::Update() 
{
	for (int i = 0; i < 10; i++) 
	{
		cout << name << ": " << 10 + (i * 10) << "% complete." << endl;
	}
}

GamePlay::~GamePlay()
{
}
