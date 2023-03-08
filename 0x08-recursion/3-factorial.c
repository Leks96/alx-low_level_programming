#include "main.h"
/**
* factorial - the factorial of a given number.
*
* @n: input.
*
* Return: -1 if n is less than 0, otherwise
* the factorial of a number.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
