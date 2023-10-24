#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *t = h;

	if (h == NULL)
		return (0);
	while (t != NULL)
	{
		i++;
		t = t->next;
	}
	return (i);
}
