#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 * or NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
		if (array == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);
	return (array);
}