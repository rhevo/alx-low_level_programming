#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: with of array
 * @height: height of array
 *
 * Return: a pointer to two dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array, e, f;
	int lent = width * height;

	if (lent <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		array[e] = (int *)malloc(sizeof(int) * width);
		if (array[e] == NULL)
		{
			for (e--; e >= 0; e--)
				free(array[e]);
			free(array);

			return (NULL);
		}
	}

	for (e = 0; e < height; e++)
		for (f = 0; f < width; f++)
			array[e][f] = 0;
	return (array);
}
