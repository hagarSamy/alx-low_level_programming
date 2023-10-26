#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0;
	listint_t *current = *nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}
	*head = prev;
}
