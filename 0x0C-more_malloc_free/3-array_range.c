#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: least value
 * @max: maximum value
 * Return: pointer to the newly allocated array
 * NULL if it fails or if min > max
 */

int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		p[i] = min + i;
	return (p);
}
