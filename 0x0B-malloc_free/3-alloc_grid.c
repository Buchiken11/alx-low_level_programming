#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **ken;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ken = malloc(sizeof(int *) * height);
	if (ken == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ken[x] = malloc(sizeof(int) * width);
		if (ken[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ken[x]);
			free(ken);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ken[x][y] = 0;
	}
	return (ken);
}
