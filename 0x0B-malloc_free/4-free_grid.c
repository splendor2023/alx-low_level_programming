#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2D grid of integers previously allocated by alloc_grid.
 * @grid: Pointer to the grid to be freed.
 * @height: Height of the grid.
 *
 * Return: void.
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
