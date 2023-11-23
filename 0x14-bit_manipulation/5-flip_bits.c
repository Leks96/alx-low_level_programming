#include "main.h"
/**
* flip_bits - Counts the number of bits needed to flip to get from one number to another.
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
*
* Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_i = n ^ m;
	unsigned int count = 0;

	while (xor_i > 0)
	{
		count = count + (xor_i & 1);
		xor_i >>= 1;
	}
	return (count);
}
