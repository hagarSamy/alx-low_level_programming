#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at end of a list
 * @head: a pointer to the poiter to the head
 * @n: data to store in the new node
 * Return: address of new node or NuLL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;

	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;
	newNode->n =n;
	newNode->next = NULL;
	if (temp ==NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		newNode->prev = temp;
		temp->next = newNode;
	}
	return (newNode);
}
