#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: separator
* @n: number of integers
* Result: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptrToChar;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptrToChar = va_arg(ap, char*);

		if (ptrToChar == NULL)
		{
			ptrToChar = "(nil)";
		}

		printf("%s", ptrToChar);

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
