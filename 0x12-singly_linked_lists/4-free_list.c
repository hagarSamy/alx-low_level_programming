#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the pointer to the first element of the list
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
