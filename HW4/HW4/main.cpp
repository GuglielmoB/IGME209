// HW4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace std;
int main()
{
	Stack<int> intstck;
	intstck.push(3);
	intstck.push(5);
	intstck.push(10);
	intstck.pop();
	intstck.pop();
	intstck.Print();
	cout << "Value of isEmpty: " << intstck.isEmpty() << endl;
	cout << "Stack's size: " << intstck.getSize() << endl;
	intstck.pop();
	cout << "Value of isEmpty after popping all contained elements: " << intstck.isEmpty() << endl;
	Stack <int> intstck2(intstck);
    return 0;
}

