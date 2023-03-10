#include "main.h"
/**
* _memset - Fills memory with a
* constant byte
*
* @s: pointed destination
* @b: constant byte
* @n: bytes
*
* Result: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
