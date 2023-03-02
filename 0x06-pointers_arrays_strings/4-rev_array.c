#include "main.h"
/**
* reverse_array - reverse the content of an array of integers
* @a: array
* @n: elements of the array
*
* Return: the reversed array
*/
void reverse_array(int *a, int n)
{
	int i = 0, j = (n - 1), aux;

	for (; i < j; i++, j--)
	{
		aux =a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
