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
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%lu] (nil)\n", n);
		printf("[%u] (%s)\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}
