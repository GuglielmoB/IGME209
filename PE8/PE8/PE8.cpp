// PE8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void changeVariable(int variable)
{
	variable = 10;
	printf("Inside changeVariable(), variable's value is now: %i \n", variable);
}

void changePointer(int *vari) 
{
	*vari = 45;
	printf("Inside changePointer(), variable's value has been changed. \n");
}

void getLengthArray(int arr[]) 
{
	int f = 0;
	int i = 0;
	while (f != -1)
	{
		f = arr[i];
		i++;
	}
	printf("Inside getLengthArray, array's length appears to be: %i \n", i-1);

}

void getLengthPointer(int *intarr) 
{
	int* ptr = intarr;
	int f = 0;
	int i = 0;
	while (f != -1)
	{
		f = *ptr;
		ptr++;
		i++;
	}

	printf("Inside getLengthPointer, array's length appears to be: %i \n", i-1);

}

int *createStackArray() 
{
	int arrayint[5];
	arrayint[0] = 0;
	arrayint[1] = 1;
	arrayint[2] = 2;
	arrayint[3] = 3;
	arrayint[4] = 4;

	return arrayint;
}

int *createHeapArray(int arrsize)
{
	int *arrayint = new int[arrsize];
	for (int i = 0; i < arrsize; i++) 
	{
		arrayint[i] = i;
	}

	return arrayint;
}

int main()
{
	
	// Part 1
	printf("Part 1\n");
	int changevarvar = 3;
	printf("In main, variable's value is: %i \n", changevarvar);
	changeVariable(changevarvar);
	// ChangeVariable does not change the variable in main but changes it in the method.
	printf("In main, after changeVariable(), variable's value is: %i \n", changevarvar);
	changePointer(&changevarvar);
	// ChangePointer changes the variable in main.
	printf("In main, after changePointer(), variable's value is: %i \n", changevarvar);


	// Part 2
	printf("\n");
	printf("Part 2\n");
	int intarray[8];
	intarray[0] = 1;
	intarray[1] = 100;
	intarray[2] = 103;
	intarray[3] = 109;
	intarray[4] = 217;
	intarray[5] = 314;
	intarray[6] = 600;
	intarray[7] = -1;
	int *intpoint = intarray;
	printf("Doing getLengthArray(). \n");
	getLengthArray(intpoint);
	printf("Doing getLengthPointer(). \n");
	getLengthPointer(intarray);


	// Part 3
	printf(" \n");
	printf("Part 3\n");
	int *stackArray = createStackArray();
	printf("In main, in the Stack Array the values are: ");
	for (int i = 0; i < 5; i++) {
		printf("%i \n", stackArray[i]);
	}
	printf("In main, in the Heap Array the values are: ");
	int *heapArray = createHeapArray(5);
	for (int i = 0; i < 5; i++) {
		printf("%i \n", heapArray[i]);
	}
	delete[](heapArray);
	// The stackArray returns the addresses instead of turning the actual values that it should. 
	// I think this may have to do with the way the values are set in the array and it looking at the memory address rather than the actual number.
	return 0;
}


