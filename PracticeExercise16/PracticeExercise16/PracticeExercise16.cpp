// PracticeExercise16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	//ofstream txtfile;
	//txtfile.open("pe16file.txt");
	//txtfile << "First line of text" << endl;
	//txtfile << "LINE TWO" << endl;
	//txtfile << "line 3" << endl;
	//txtfile.close();
	string line;
	ifstream readin;
	readin.open("pe16file.txt", ios::binary);
	readin.close();
	readin.open("pe16file.txt");
	string arrayofstrings[4];
	int i = 0;
	for (int i = 0; i < 4; i++) 
	{
		getline(readin, arrayofstrings[i]);
	}

	while (readin)
	{
			string inputstr;
			getline(readin, inputstr);
			cout << inputstr << endl;
	}
	readin.close();
    return 0;
}

