// PracticeExercise16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ofstream txtfile;
	txtfile.open("pe16file.txt");
	txtfile << "First line of text" << endl;
	txtfile << "LINE TWO" << endl;
	txtfile << "line 3" << endl;
	txtfile.close();
	string line;
	ifstream readin;
	readin.open("pe16file.txt", ios::binary);
	cout << "Opened as binary.";
	readin.close();
	cout << "Closed binary." << endl;
	readin.open("pe16file.txt");
	cout << "Opened regular version" << endl;
	string arrayofstrings[4];
	int i = 0;
	if (readin.is_open()) {
		while (getline(readin, line))
		{
			arrayofstrings[i] = line;
			cout << line << endl;
			i += 1;
		}
	}
	readin.close();
    return 0;
}

