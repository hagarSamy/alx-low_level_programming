#include "hash_tables.h"

/**
 * free_node - frees nodes of the list
 * @node: the node to free
 * Return: void
*/

void freeNode(hash_node_t* node)
{
    hash_node_t *temp = node;

	while (temp)
	{
		node = node->next;
		free(node->key);
        free(node->value);
		free(temp);
		temp = node;
	}
}

/**
 * freeTable - frees a table
 * @table: a pointer to the table to be freed
 * Return: void
*/
void freeTable(hash_table_t* table)
{
    int i;

    for (i = 0; i < table->size; i++)
    {
        hash_node_t* node = table->array[i];
        if (node != NULL)
            freeNode(node);
    }
    free (table->array);
    free (table);
}
