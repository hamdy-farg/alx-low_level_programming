#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the grid
 *
 * @grid: edasgg
 * @height: sadgdsahg
 *
 *
 *
 *
 * Return: asdgdasgads
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

