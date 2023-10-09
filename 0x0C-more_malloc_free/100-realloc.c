#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: old memory size
 * @new_size: new size
 * Return: ptr if new_size == old_size
 * NULL if new_size is equal to zero, and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptrn;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	ptrn = malloc(new_size);
	if (ptrn == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		ptrn[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptrn);
}
