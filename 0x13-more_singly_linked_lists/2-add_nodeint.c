#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head pointer
 * @n: int data to add to new node
 * Return: address of the new node
 * NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = (listint_t *)malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
