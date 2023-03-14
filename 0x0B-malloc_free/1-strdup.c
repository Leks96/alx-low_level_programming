#include <stdlib.h>
#include "main.h"
/**
* _strdup -  returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
*
* @str: input
*
* Return: NULL if str is NULL and if insufficient memory is available.
* On success: returns a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	int i, end;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (end = 0; end < *str; end++)
	{
	}

	arr = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		arr[i] = str[i];

	if (arr == NULL)
		return (NULL);

	return (arr);
}
