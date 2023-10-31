#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - duplicate a string using malloc.
* @str: The string to duplicate.
*
* Return: A pointer to the newly allocated duplicated string,
* or NULL if str is NULL or memory allocation fails.
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int lenght = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[lenght] != '\0')
		lenght++;

	duplicate = (char *)malloc((lenght + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= lenght; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
