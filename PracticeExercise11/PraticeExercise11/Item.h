#pragma once
#include <string>
struct Item
{
public:
	Item();
	~Item();
	Item(std::string iname, int w, int v);
	void print();
private:
	std::string name;
	int weight;
	int value;
};

