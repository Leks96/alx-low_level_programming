#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocate memory using malloc and check for success.
* @b: The number of bytes to allocate.
*
* Return: A pointer to the allocated memory if successful.
* If malloc fails, it terminates the program with status 98.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
