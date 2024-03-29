#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees a 2D grid created by alloc_grid.
* @grid: The 2D grid to be freed.
* @height: The height (number of rows) of the grid.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
