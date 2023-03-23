#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: number of integers
* Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
