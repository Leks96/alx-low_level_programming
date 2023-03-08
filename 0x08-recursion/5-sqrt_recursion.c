#include "main.h"
int _prfct_square(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number.
*
* @n: input
*
* Return: -1 if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_prfct_square(n, (n + 1) / 2));
}

/**
* _prfct_square - checks for perfect square.
*
* @n: input
* @i: input
*
* Return: -1 if i is less than 1.
*/

int _prfct_square(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_prfct_square(n, i - 1));
}
