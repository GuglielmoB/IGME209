#pragma once
#include <iostream>
using namespace std;
template <class T>
class Stack
{
public:
	Stack();
	Stack(const Stack &stack);
	~Stack();
	void push(T);
	void pop();
	bool isEmpty();
	int getSize();
	void Print();
	void deque(int bgnorend)
	// friend ostream &operator<< (ostream &ostr, T const& rhs);
private:
	int numofentries;
	T *entries;
	int maxsize;
	int dequeloc;
	int cursize; // Necessary for deque because numofentries is used to keep track of location in the stack
};

template <class T>Stack<T>::Stack() // Stack constructor
{
	maxsize = 1;
	entries = new T[maxsize];
	numofentries = -1;
	dequeloc = 0;
}

template <class T>Stack<T>::Stack(const Stack &stack) // Stack copy constructor
{
	Stack stck = &stack;
}

template <class T> void Stack<T>::push(T data)
{
	if (numofentries + 1 >= maxsize) {
		maxsize += maxsize;
		T* tempentryholder = new T[maxsize];
		for (int i = 0; i < numofentries; i++) {
			tempentryholder[i] = entries[i];
		}
		delete[] entries;
		entries = tempentryholder;
	}
	numofentries += 1;
	entries[numofentries] = data;
	size += 1;
}

template <class T> void Stack<T>::pop() {

	if (numofentries < 0) {
		
	}
	else
	{
		entries[numofentries] = NULL;
		numofentries -= 1;
		size -= 1;
	}

	if (numofentries <= 0 && entries[numofentries] == NULL) {
		size = 0;
	}

}

template <class T> void Stack<T>::deque(int bgnorend) // Input 0 to deque from the beginning or 1 to deque from the end 
{
	
	if (bgnorend == 0)
	{
		entries[dequeloc] = NULL;
		dequeloc += 1;
		size -= 1;
	}
	else if (bgnorend == 1) 
	{
		pop();
	}
}

template <class T> bool Stack<T>::isEmpty() {
	if (size <= 0) {
		return true;
	}
	else {
		return false;
	}
}

template <class T> int Stack<T>::getSize() {
	if (entries[0] = NULL) {
		return 0;
	}
	else 
	{
		return numofentries + 1;
	}
	
}

template <class T> void Stack<T>::Print() {
	for (int i = 0; i < numofentries; i++) {
		cout << entries[i] << endl;
	}

}

template <class T> Stack<T>::~Stack() {
	delete[] entries;
}

