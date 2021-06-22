/*
Purpose:write a program using inline function
Date:17/06/2021
Author:Shubham Bhandari
Version;1.0
*/


#include <stdio.h>

// Inline function in C
static inline int foo()
{
	return 2;
}

// Driver code
int main()
{

	int ret;

	// inline function call
	ret = foo();

	printf("Output is: %d\n", ret);
	return 0;
}

