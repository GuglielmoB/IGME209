#include "stdafx.h"
#include "Item.h"
#include <iostream>

using namespace std;
Item::Item()
{
}

Item::Item(std::string iname, int w, int v) 
{
	name = iname;
	weight = w;
	value = v;
}

Item::~Item()
{
}

void Item::print() 
{
	cout << "Item: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Value: " << value << endl;
	cout << endl;
}