#include "main.h"
#include <string.h>
/**
* _strcat - This function appends the src string to the dest
* string, overwriting the terminating null byte (\0) at the
* end of the dest, and the adds a terminating null byte.
* @dest: destination
* @src: source
*
* Return: A Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[i] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];

	return (ptr);
}
