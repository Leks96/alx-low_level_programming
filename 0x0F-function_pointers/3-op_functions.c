#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - Add two integers
* @a: First integer
* @b: Second integer
* Return: Result of addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtract two integers
* @a: First integer
* @b: Second integer
* Return: Result of subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiply two integers
* @a: First integer
* @b: Second integer
* Return: Result of multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divide two integers
* @a: First integer
* @b: Second integer
* Return: Result of division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
* op_mod - Get remainder of division of two integers
* @a: First integer
* @b: Second integer
* Return: Remainder of division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
