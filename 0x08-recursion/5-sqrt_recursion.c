#include "main.h"
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
		return (prfct_square(n, (n + 1) / 2));
}

/**
* prfct_square - checks for perfect square.
*
* @n: input
* @i: input
*
* Return: -1 if i is less than 1.
*/
int prfct_square(int n, int i);

int prfct_square(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (prfct_square(n, i - 1));
}
