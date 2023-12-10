#include "lists.h"

/**
 * dlistint_len - counts elements of a doubly linked list
 * @h: a pointer to the list head
 * Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
