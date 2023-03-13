#include <stdlib.h>
#include "main.h"
/**
* str_concat - concatenates two strings.
*
* @s1: input 1
* @s2: input 2
*
* Return: concatenated strings
*/
char *str_concat(char *s1, char *s2)
{
	int count1, count2, i = 0;
	char *arr;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (count1 = 0; count1 <= *s1; count1++)
	{
	}

	for (count2 = 0; count2 <= *s2; count2++)
	{
	}

	arr = malloc(sizeof(char) * (count1 + count2 + 1));

	if (arr == NULL)
		return (NULL);

	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}

	return (arr);
}
