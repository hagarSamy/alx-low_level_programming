#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer to head node
 * Return: sum of data in list
 * 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	if (head == NULL)
		return (0);
	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
