#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *next;
	hash_table_t *head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{

				next = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = next;

			}


			}

		}


	free(head->array);
	free(head);

}
