#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to a head
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);
	t = *head;
	data = (*head)->n;
	*head = t->next;
	free(t);
	return (data);
}
