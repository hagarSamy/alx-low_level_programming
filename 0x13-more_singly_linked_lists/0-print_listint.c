#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *t = h;

	if (h == NULL)
		return (0);
	while (t != NULL)
	{
		i++;
		printf("%d\n", t->n);
		t = t->next;
	}
	return (i);
}
