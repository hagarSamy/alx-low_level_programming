#include "lists.h"

/**
 * *get_dnodeint_at_index - search for a node at a certain index
 * @head: pointer to the head
 * @index: index of node to return
 * Return: the node or NULL if not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (c == index)
		{
			return (temp);
		}
		c++;
		temp = temp->next;
	}
	return (NULL);
}
