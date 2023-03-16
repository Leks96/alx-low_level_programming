#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates two strings.
*
* @s1: string 1
* @s2: string 2
* @n: integer input
*
* Return: concatenated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, count1, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(*arr) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (count1 = 0; count1 < i; count1++)
		arr[count1] = s1[count1];
	for (count2 = 0; count2 < n; count2++)
	{
		arr[count1] = s2[count2];
		count1++;
	}
	arr[count1] = '\0';
	return (arr);
}
