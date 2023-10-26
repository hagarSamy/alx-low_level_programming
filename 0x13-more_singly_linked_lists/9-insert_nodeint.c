#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head
 * @idx: index to add node at
 * @n: data for new node
 * Return: pointer to new node
 * NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	llistint_t *new, *prev, *t;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = *head;
	for (i = 0; i < idx - 1; i++)
	{
		prev = prev->next
	}
	if (prev == NULL)
	{
		free(new);
		return (NULL);
	}
	t = prev->next;
	prev->next = new;
	new->next = t;
	return (new);
}
