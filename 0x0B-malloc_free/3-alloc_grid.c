#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make a grid.
 * @width: width to be inputed
 * @height: height to be inputed
 * Return: pointer to a 2-dim array.
 */
int **alloc_grid(int width, int height)
{
	int **mii;

	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mii = malloc(sizeof(int *) * height);
	if (mii == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		mii[k] = malloc(sizeof(int) * width);
		if (mii[k] == NULL)
		{
			for (; k >= 0; k--)
				free(mii[k]);
			free(mii);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			mii[k][j] = 0;
	}
	return (mii);
}
