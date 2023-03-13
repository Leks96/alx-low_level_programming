#include <stdlib.h>
#include "main.h"
/**
* *create_array - creates an array of chars,
* and initializes it with a specific char.
*
* @size: input
* @c: input
*
* Return: Null if size is 0 and if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
