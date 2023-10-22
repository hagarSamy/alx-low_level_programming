#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all elements in a struct
 * @h: a pointer to a head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] (%s)\n", h->len, h->str);
			}

			h = h->next;
			n++;
		}
	}
	return (n);
}
