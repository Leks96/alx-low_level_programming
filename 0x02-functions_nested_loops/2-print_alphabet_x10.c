#include "main.h"
/**
* main - Entry point, prints the alphabet 10x
*
* Rturn: a - z x10
*/
void print_alphabet_x10(void)
{
	int n, coun;

	coun = 0;

	while (coun <  10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		coun++;
		_putchar('\n');
	}
}
