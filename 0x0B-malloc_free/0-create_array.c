#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: charachter to initialize with
 * Return: NULL if size is 0 or if it fails
 * or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
