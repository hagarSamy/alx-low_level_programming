#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: double pointer to head
 * @index: where to delete node
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t, *prev;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = t->next;
		free(t);
		return (1);
	}
	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next;
	}
	if (ptrv == NULL)
		return (-1);
	t = prev->next;
	prev->next = t->next;
	free(t);
	return (1);
}
