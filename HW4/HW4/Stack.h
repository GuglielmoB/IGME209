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
	// friend ostream &operator<< (ostream &ostr, T const& rhs);
private:
	int numofentries;
	T *entries;
	int maxsize;
};

template <class T>Stack<T>::Stack()
{
	maxsize = 1;
	entries = new T[maxsize];
	numofentries = -1;
}

template <class T>Stack<T>::Stack(const Stack &stack)
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
	
}

template <class T> void Stack<T>::pop() {

	if (numofentries < 0) {
		
	}
	else
	{
		entries[numofentries] = NULL;
		numofentries -= 1;
	}

}

template <class T> bool Stack<T>::isEmpty() {
	if (numofentries < 0) {
		return true;
	}
	else {
		return false;
	}
}

template <class T> int Stack<T>::getSize() {
	if (numofentries < 0) {
		return 0;
	}
	else if (numofentries == 0) {
		return 1;
	}
	else
	{
		return numofentries;
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

