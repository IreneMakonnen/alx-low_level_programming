#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2D grid previously created by 3-alloc_grid.c file function
 * @grid: 2D grid
 * @height: Height element of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		return;

	for  (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
