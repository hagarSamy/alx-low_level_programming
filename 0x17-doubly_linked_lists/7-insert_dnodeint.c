#include "lists.h"

/**
 * *insert_dnodeint_at_index - adds a node at a certain index
 * @h: double pointer to head
 * @idx: index to add node at
 * @n: data to add to node
 * Return: address of new node or NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n)); }
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++; }
	if (idx == count && temp != NULL)
	{
		new->next = temp;
		new->prev = temp->prev;
		temp->prev->next = new;
		temp->prev = new;
		return (new);
	}
	if (idx == count && temp == NULL)
	{
		return (add_dnodeint_end(h, n)); }
	free(new);
	return (NULL);
}
