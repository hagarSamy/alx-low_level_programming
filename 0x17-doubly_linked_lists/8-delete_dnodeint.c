#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a certain index
 * @head: double pointer to head
 * @index: index to delete node from
 * Return: 1 on success, -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	while (temp != NULL && i != index)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL && i == index)
	{
		if (temp->prev != NULL)
			temp->prev->next = temp->next;
		else
			*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1); }
	else
		return (-1);
}
