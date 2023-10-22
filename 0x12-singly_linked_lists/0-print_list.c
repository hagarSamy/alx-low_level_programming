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
	int n = 0;

	while (temp != NULL)
	{
		n++;
		if (temp -> str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%u] (%s)\n", temp -> len, temp -> str);
		temp = temp -> next;
	}
	return (n);
}
