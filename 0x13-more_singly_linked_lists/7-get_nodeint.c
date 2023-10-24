#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to head
 * @index: the index of the node, starting at 0
 * Return: the node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int n = 0;

	while (t != NULL)
	{
		if (n == index)
			return (t);
		t = t->next;;
		n++;
	}
	return (NULL);
}
