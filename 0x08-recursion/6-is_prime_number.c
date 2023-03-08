#include "main.h"
int check_prime(int n, int i);

/**
* is_prime_number - check if it is a prime number
*
* @n: input
*
* Return: 1 if the input integer is a
* prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
* check_prime - checks for prime number.
*
* @n: input
* @i: input
*
* Return: prime number
*/

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % 1 == 0)
		return (0);
	return (check_prime(n, i - 1));
}
