#include "main.h"
/**
* print_rev - a function that prints a string, in reverse
* fstcoun is to first count to end, counb is to count back
* @s: str input
* Return: string in reverse
*/
void print_rev(char *s)
{
	int fstcoun = 0;
	int i, counb;

	for (i = 0; s[i] != '\0'; i++)
	{
		fstcoun++;
	}

	for (n = (fstcoun - 1); n >= 0; n--)
	{
		_putchar(s[counb]);
	}
	_putchar('\n');
}
