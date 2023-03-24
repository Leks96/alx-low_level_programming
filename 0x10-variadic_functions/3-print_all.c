#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - a function that prints anything
* @format: arguments format
*
* Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list ap;

	int i = 0, n = 0;
	char *separator = ", ";
	char *ptr;

	va_start(ap, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separator = "";
		}

		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), separator);
			break;
		case 's':
			ptr = va_arg(ap, char*);
			if (ptr == NULL)
				ptr = "(nil)";
			printf("%s%s", ptr, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
