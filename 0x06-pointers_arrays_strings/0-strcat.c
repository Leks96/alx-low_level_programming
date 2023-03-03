#include "main.h"
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
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] =*src++) != '\0'; n++)
	{
	}

	return (dest);
}
