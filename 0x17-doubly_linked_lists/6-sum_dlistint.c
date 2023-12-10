#include "lists.h"

/**
 * sum_dlistint - returns sum of data in all nodes of a list
 * @head: pointer to the head
 * Return: the sum of data or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;
	int sum = 0;

	if (head == 0)
		return (sum);
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
