#include "main.h"
/**
* jack_bauer - a function that prints every minute of from 00:00 to 23:59
* h = hour, m = minute
* /10 allows second digit to rotate
* Return: 24 hour clock
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_pytchar('\n');
		}
	}
}
