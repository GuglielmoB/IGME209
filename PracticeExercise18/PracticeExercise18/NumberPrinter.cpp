#include "stdafx.h"
#include "NumberPrinter.h"
#include <iostream>

using namespace std;
NumberPrinter::NumberPrinter(int num)
{
	number = num;
}

void NumberPrinter::Print() 
{
	for (int i = 0; i < 50; i++) {
		cout << number << " ";
	}
}

NumberPrinter::~NumberPrinter()
{
	
}
