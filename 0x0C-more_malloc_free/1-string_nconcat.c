#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenate two strings with the
* first n bytes of s2.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate.
*
* Return: A pointer to the newly allocated concatenated
* string or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int lenght1, lenght2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenght1 = strlen(s1);
	lenght2 = strlen(s2);

	if (n >= lenght2)
		n = lenght2;

	concatenated = malloc((lenght1 + n + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < lenght1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
