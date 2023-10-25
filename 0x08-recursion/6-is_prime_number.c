#include "main.h"
/**
* is_prime_number - check if an integer is prime
* @n: the integer to be checked
* Return: 1 if n is prime, or 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, 2));
}

/**
* check_prime - helper functio to help find the square root
* @n: the number to be checked for primality
* @x: the divisor
* Return: 1 if n is prime, or 0 if not
*/
int is_prime_recursive(int n, int x)
{
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);
	return (is_prime_recursive(n, x + 1));
}
