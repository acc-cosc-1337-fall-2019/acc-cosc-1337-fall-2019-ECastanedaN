/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/
#include "loops.h"
#include <iostream>


int factorial(int num)
{
	int i;
	int factorial = 1;

	for (i = 1; i <= num; i++)
	{
		 factorial = factorial * i;
	}
	
	return factorial;
}
