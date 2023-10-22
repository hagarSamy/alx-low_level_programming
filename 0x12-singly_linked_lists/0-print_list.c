#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all elements in a struct
 * @h: a pointer to a head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%lu] (nil)\n", len);
		printf("[%lu] (%s)\n", len, temp->str);
		temp = temp->next;
		len++;
	}
	return (len);
}
