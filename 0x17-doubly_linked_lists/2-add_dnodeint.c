#include "lists.h"

/**
 * *add_dnodeint - adds a new node at begining of a list
 * @head: a pointer to the poiter to the head
 * @n: data to store in the new node
 * Retuen: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return (NULL);
    newNode->n = n;
    newNode->next = *head;
    newNode->prev = NULL;
    *head = newNode;
    return (newNode);
}
