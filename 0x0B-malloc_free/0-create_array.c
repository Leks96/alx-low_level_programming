#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars and initializes it
* with a specific char.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: NULL if size is 0 or if memory allocation fails,
* or a pointer to the created array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
