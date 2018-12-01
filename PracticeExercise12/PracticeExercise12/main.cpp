// PracticeExercise12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>
#include "Level.h"

using namespace std; 

void dumbpoint() 
{
	Level* level = new Level();
}

void smartpoint() 
{
	shared_ptr<Level> level(new Level());
}

int main()
{
	smartpoint();
	// dumbpoint();
	// Does cause memory leaks if uncommented.
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    return 0;
}

