#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked - a function that allocates memory using malloc.
*
* @b:input
*
* Return: a pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *s;
	s = malloc(b);

	if (s != NULL)
		return (s);
	else
		exit(98);
}
