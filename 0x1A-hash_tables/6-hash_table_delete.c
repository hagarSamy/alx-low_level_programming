#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * 
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int idx = 0;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			current = ht->array[idx];
			while (current)
			{
				tmp = current->next;
				free (tmp->key);
            	free (tmp->value);
            	free (tmp);
				current = tmp;
			}
		}
	}
	free (ht->array);
    free (ht);
}
