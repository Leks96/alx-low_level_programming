#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @n: takes the number
* Return: the last digit of the the number
*/
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
