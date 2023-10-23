#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: a pointer to head pointer
 * @str: string to duplicate
 * Return: pointer to added node
 * null on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (last == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	/*last points to NULL at the end*/

	last->next = new;
	return (new);
}
