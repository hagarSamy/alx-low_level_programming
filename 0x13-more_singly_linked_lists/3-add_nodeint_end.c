#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head
 * @n: data int to add to new node
 * Return: address of the new element
 * NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (last != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->next = NULL;
		new->n = n;
	}
	else
	{
		*head = new;
		new->next = NULL;
		new->n = n;
	}
	return (new);
}
