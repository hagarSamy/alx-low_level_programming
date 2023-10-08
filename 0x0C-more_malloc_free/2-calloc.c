#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: numbe of elements in the array
 * @size: bytes to be allocated
 * Return: void
 * NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	*((char *)p + i) = 0;
	return (p);
}
