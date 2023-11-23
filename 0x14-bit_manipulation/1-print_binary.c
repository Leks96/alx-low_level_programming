#include "main.h"
/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int flag = 0;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if ((n & mask) || flag)
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1;
		}
		mask >>= 1;
	}
}
