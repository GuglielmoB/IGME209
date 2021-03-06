// PracticeExercise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <chrono>
#include <iostream>

using namespace std;
int numofhandswithiteration(int seats) 
{
	int numofhands = 0;
	while (seats > 0)
	{
		if (seats % 2 == 0) 
		{
			numofhands += 4;
		}
		else if (seats % 2 > 0) {
			numofhands += 3;
		}
		seats -= 1;
	}
	return numofhands;

}

int numofhandswithrecursion(int seats) 
{
	if (seats == 0) 
	{
		return 0;
	}
	else if (seats % 2 > 0) 
	{
		return 3 + numofhandswithrecursion(seats - 1);
	}
	else  
	{
		return 4 + numofhandswithrecursion(seats - 1);
	}

}

int numofhandswithformula(int seats) 
{
	return (3 * seats) + (seats / 2);
}

void testEach(int numseats) {
	std::cout << "Testing with number of seats: " << numseats << endl;
	auto start = chrono::high_resolution_clock::now();
	std::cout << "Iterative: " << numofhandswithiteration(numseats) << endl;
	auto end = chrono::high_resolution_clock::now();
	auto timeTaken = end - start;
	cout << "Time taken for Iterative: " << chrono::duration_cast<std::chrono::microseconds>(timeTaken).count() << " microseconds" << endl;
	start = chrono::high_resolution_clock::now();
	std::cout << "Recursive: " << numofhandswithrecursion(numseats) << endl;
	end = chrono::high_resolution_clock::now();
	timeTaken = end - start;
	cout << "Time taken for Recursive: " << chrono::duration_cast<std::chrono::microseconds>(timeTaken).count() << " microseconds" << endl;
	start = chrono::high_resolution_clock::now();
	std::cout << "Formula: " << numofhandswithformula(numseats) << endl;
	end = chrono::high_resolution_clock::now();
	timeTaken = end - start;
	cout << "Time taken using Formula: " << chrono::duration_cast<std::chrono::microseconds>(timeTaken).count() << " microseconds" << endl;
	cout << endl;
}

int main()
{
	testEach(10);
	testEach(16);
	testEach(45);
	testEach(98);
	testEach(27);
	testEach(109);
	testEach(117);
	testEach(260);
	testEach(906);
	testEach(999);
	testEach(1000);
    return 0;
}

