#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to a head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		free (head);
	while (head->next != NULL)
	{
		head = head->next;
		free (temp);
		temp = head;
	}
}
