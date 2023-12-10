#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: a pointer to the list head
 * Return: number of elements in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
