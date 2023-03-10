#include <stdio.h>
#include "main.h"
/**
* print-diagsums - prints the sum of two
* diagonals of a square matrix of integers
*
* @a: input
* @size: bytes
*
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int i, j, total1 = 0, total2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 += a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		total2 += a[j];
	printf("%d, %d\n", total1, total2);
}
