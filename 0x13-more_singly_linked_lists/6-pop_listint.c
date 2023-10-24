#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to a head
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int data;;
	listint_t *t = *head;

	if (head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	free(t);
	return(data);
}
