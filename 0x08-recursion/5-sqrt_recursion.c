#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: the number to which the natural sqr root is to be returned
* Return: the square root of the number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}

/**
* find_sqrt - helper function to find the square root recursively
* @n: the number for which to find the natural square root
* @x: the guess for the square root
* Return: the natural square root of n, or -1 if there's no natural square root
*/
int find_sqrt(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (find_sqrt(n, x + 1));
}
