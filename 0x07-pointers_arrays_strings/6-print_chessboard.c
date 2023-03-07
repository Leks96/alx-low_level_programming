#include <stdio.h>
#include "main.h"
/**
* print_chessboard - prints the
* chessboard
*
* @a: input
*
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < n; i++)
	{
		for (n = 0; n < a; n++)
			_puchar(a[i][n]);
		_putchar('\n');
	}
}
