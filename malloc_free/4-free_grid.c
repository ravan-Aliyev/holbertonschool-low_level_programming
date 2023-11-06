#include <stdlib.h>
/**
 * free_grid - Free memory allocation.
 * @grid: array.
 * @height: size of row.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
