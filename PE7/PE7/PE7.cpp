// PE7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

class MovableObject
{
public:
	int xPos;
	int yPos;
	void PrintPos()
	{
		cout << "X:" << xPos << " Y:" << yPos << endl;
	}
};

class Player : public MovableObject
{
public:
	char* name;
	Player()
	{
		cout << "player ctor" << endl;
		name = new char[15];
	}

	~Player()
	{
		cout << "player dtor" << endl;
		delete[] name;
	}
};

class Monster : public MovableObject
{
	public:
		int damage;
};

int main()
{
	//Monster *boss = new Monster();
	//Player *pOne = new Player();
	MovableObject *boss = new Monster();
	MovableObject *pOne = new Player();
	Monster *fakeMonster = (Monster*)pOne;
	cout << "Boss's Address: " << &boss << "\n";
	cout << "Player's Address: " << &pOne << "\n";
	cout << "Fake Monster's Address: " << &fakeMonster << "\n";
	pOne->xPos = 10;
	pOne->yPos = 70;
	boss->xPos = 30;
	boss->yPos = 60;
	fakeMonster->xPos = 60;
	fakeMonster->yPos = 40;
	boss->PrintPos();
	pOne->PrintPos();
	fakeMonster->PrintPos();

	//It doesn't print out the player dtor at the end of the print chain as it did before. Player's constructor also has a name thing where Movable object did not.
	delete boss;
	delete pOne;
	delete fakeMonster;

	_getch();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
