#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers.
*
* @min: minimum value input
* @max: maximum value input
*
* Return: 0
*/
int *array_range(int min, int max)
{
	int *array;
	int i, lengt;

	if (min > max)
		return (NULL);

	for (lengt = 0; lengt < (max - min); lengt++)
		;

	array = malloc(sizeof(int) * lengt);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < lengt; i++)
	{
		array[i] = min++;
	}
	return (array);
}
