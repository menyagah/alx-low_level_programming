#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated for a 2D array of integers
 *
 * @grid: the 2D array of integers to free
 * @height: the height of the 2D array
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
