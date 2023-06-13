#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - The function that returns a pointer to a 2D array of integers
 * @width: The width value
 * @height: The height value
 * Return: The pointer to the Two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **jkl;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);
	jkl = malloc(sizeof(int *) * height);
	if (jkl == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		jkl[m] = malloc(sizeof(int) * width);
		if (jkl[m] == NULL)
		{
			for (; m >= 0; m--)
				free(jkl[m]);
			free(jkl);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			jkl[m][n] = 0;
	}
	return (jkl);
}
