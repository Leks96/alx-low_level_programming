#include "main.h"
/**
* find_sqrt - helper function to find the square root recursively
* @n: the number for which to find the natural square root
* @low: the lower bound guess for the square root
* @high: the higher bound guess for the square root
* Return: the natural square root of n, or -1 if there's no natural square root
*/
int find_sqrt(int n, int low, int high)
{
	int mid;
	int square;
	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (find_sqrt(n, mid + 1, high));
	else
		return (find_sqrt(n, low, mid - 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: the number to which the natural sqr root is to be returned
* Return: the square root of the number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1, n));
}
