#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		current = ht->array[idx];
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL && idx != (ht->size - 1))
				printf(", ");
			current = current->next;
		}
		idx++;
	}
	printf("}\n");
}
