#include <stdlib.h>
#include "main.h"
/**
* **alloc_grid - returns a pointer to a 2
* dimensional array of integers.
*
* @width: input
* @height: input
*
* Return: Always 0 (Success).
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
