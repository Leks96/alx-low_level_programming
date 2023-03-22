#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
*
* @array: array
* @size: size of the array
* @action: pointer to the func
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
