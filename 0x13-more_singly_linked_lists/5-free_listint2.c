#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list and sets the head to NULL
 * @head: double pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head != NULL)
	{
		t = *head;
		*head = *head->next;
		free(t);
	}
	*head = NULL;
}
